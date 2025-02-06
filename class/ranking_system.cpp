#include "ranking_system.h"
//############################## class RankingSubgraph ##############################//
void RankingSubgraph::Copy(RankingSubgraph& input)
{
	edge_.clear();
	edge_.assign(input.edge_.begin(), input.edge_.end());
	edge_size_.clear();
	edge_size_.assign(input.edge_size_.begin(), input.edge_size_.end());
	node_.clear();
	node_.assign(input.node_.begin(), input.node_.end());
	graph_score_ = input.graph_score_;
	root_node_ = input.root_node_;
	T_.clear();
	T_.assign(input.T_.begin(), input.T_.end());

}

bool RankingSubgraph::isSimilarGraph(RankingSubgraph& G_i)
{
	double rad_threshold = 0.262, t_threshold = 20.0;

	// First, check true node 
	int base_node(-1);
	int num_shard = this->node_.size();
	int num_node(0);
	for (int i = 0; i < num_shard; i++) {
		if (this->node_[i] != G_i.node_[i]) {
			return false;
		}
		else {
			if (this->node_[i] && (base_node < 0)) 
			{
				base_node = i;
			}
			num_node++;
		}
	}

	if (num_node == 1) {
		return true;
	}

	Matrix4d T_base_A, T_base_B;
	this->T_[base_node].InvOut(T_base_A);
	G_i.T_[base_node].InvOut(T_base_B);

	for (int i = 0; i < num_shard; i++) {
		if (this->node_[i] && i != base_node) {
			Matrix4d T_a, T_b, T_a_i, T_b_i;
			this->T_[i].Output(T_a);
			G_i.T_[i].Output(T_b);

			T_a_i = T_base_A * T_a;
			T_b_i = T_base_B * T_b;
			if (!isSimilarTrans(T_a_i, T_b_i, rad_threshold, t_threshold)) {
				return false;
			}
		}
	}
	return true;
}

int RankingSubgraph::NumTrueNode(void)
{
	int out(0);
	for (int i = 0; i < node_.size(); i++) {
		if (node_[i])
			out++;
	}
	return out;
}

int RankingSubgraph::NodeOut(void)
{
	return priority_list_[priority_index_].node;
}

vector<LCSIndex> RankingSubgraph::EdgeOut(void)
{
	vector<LCSIndex> edge_out;

	int num = priority_list_[priority_index_].i_edge.size();

	for (int i = 0; i < num; i++) {
		int edge_index = priority_list_[priority_index_].i_edge[i];
		edge_out.emplace_back(sub_graph_[edge_index]);
	}

	return edge_out;
}

void RankingSubgraph::ReplaceLCS(list<LCSIndex>& lcs_in)
{
	lcs_reference_.clear();
	list<LCSIndex>::iterator iter = lcs_in.begin();
	for (; iter != lcs_in.end(); iter++) {
		lcs_reference_.emplace_back(*iter);
	}
}

void RankingSubgraph::RestoreShard(vector<Geom>& shard) const
{
	for (int i = 0; i < shard.size(); i++) {
		Matrix3d R_prev;
		Vector3d t_prev;
		if (node_[i]) {
			T_[i].Output(R_prev, t_prev);

			shard[i].Move(R_prev, t_prev);
		}
	}
}

void RankingSubgraph::ResetMatchedIndex(const vector<Geom>& shard)
{
	int num_shard = node_.size();
	if (!matched_index_.empty()) {
		for (int i = 0; i < matched_index_.size(); i++) {
			matched_index_[i].clear();
			vector<bool>().swap(matched_index_[i]);
		}
		vector<vector<bool>>().swap(matched_index_);
	}
	for (int i = 0; i < num_shard; i++) {
		vector<bool> m_index(shard[i].edge_line_.point_.cols(), false);
		matched_index_.emplace_back(m_index);
	}
}

void RankingSubgraph::MakeHierarchyPriorityList(int index,
	vector<RankingSubgraph>& graph)
{
	//########## Remove previous priority list 
	priority_list_.clear();
	vector<Chunk>().swap(priority_list_);
	// Clear subgraph lcs list
	sub_graph_.clear();
	vector<LCSIndex>().swap(sub_graph_);

	//########## Pick related edges from updated graph.
	sub_graph_ = PickEdges(node_);
	list<Chunk> priority, state_priority;
	int num_lcs_list = sub_graph_.size();

	//########## Classify edges whether outside of the sate or inside.
	for (int i = 0; i < num_lcs_list; i++) {
		Chunk dummy;
		dummy.graph_index = -1;
		int s_x = sub_graph_[i].shard_x_;
		int s_y = sub_graph_[i].shard_y_;
		int out_node = s_x - 1;
		dummy.node = s_x;
		if (node_[s_x - 1]) {
			dummy.node = s_y;
			out_node = s_y - 1;
		}

		for (int j = 0; j < graph.size(); j++) {
			if (j == index) continue;
			if (graph[j].node_[out_node]) {
				dummy.graph_index = j;
				break;
			}
		}

		dummy.i_edge.emplace_back(i);

		if (dummy.graph_index == -1)
			priority.emplace_back(dummy);	// Outstide edge 
		else
			state_priority.emplace_back(dummy);					// Inside edge
	}

	//########## First, Make priority list for outside edge.
	//cout << "Priority = " << priority.size() << endl;
	priority.sort(NodeCompare);
	CombineChunk(priority);

	for (auto iter = priority.begin(); iter != priority.end(); ++iter) {
		CalculateMatchingScore(*iter, graph[index].sub_graph_);
		graph[index].priority_list_.emplace_back(*iter);
	}


	//########## Make priority list for inside edges
	//cout << "Number of inside edge : " << state_priority.size() << endl;
	state_priority.sort([](const Chunk& a, const Chunk& b) -> bool {
		return a.graph_index < b.graph_index;
		});
	if (state_priority.size() > 0) {
		CombineGraphChunk(state_priority, graph);

		for (auto iter = state_priority.begin(); iter != state_priority.end(); ++iter) {
			if (iter->i_edge.size() > 0) {
				CalculateMatchingScore(*iter, graph[index].sub_graph_);
				graph[index].priority_list_.emplace_back(*iter);
			}
		}
	}

	sort(graph[index].priority_list_.begin(), graph[index].priority_list_.end(), InlierCompare);
	graph[index].priority_index_ = 0;
}

void RankingSubgraph::CombineGraphChunk(list<Chunk>& priority,
	const vector<RankingSubgraph>& graph)
{
	int current_graph = priority.begin()->graph_index;
	int local_graph(current_graph);
	if (current_graph < 0) {
		cout << "########################## Priority List error #######################" << endl;
		return;
	}
	for (auto iter = priority.begin(); iter != priority.end(); ++iter) {
		list<Chunk>::iterator c_iter = iter;
		if (current_graph != c_iter->graph_index)
			current_graph = c_iter->graph_index;
		while (c_iter != priority.end()) {
			local_graph = c_iter->graph_index;
			if (current_graph != local_graph)
				break;
			else if (iter == c_iter) {
				++c_iter;
				continue;
			}
			int i_index = iter->i_edge[0];
			int c_index = c_iter->i_edge[0];
			int i_trans_from = sub_graph_[i_index].trans_.index_ - 1;
			int i_trans_to = sub_graph_[i_index].trans_.toward_ - 1;
			int c_trans_from = sub_graph_[c_index].trans_.index_ - 1;
			int c_trans_to = sub_graph_[c_index].trans_.toward_ - 1;
			// If translation of iter and c_iter is similar, then merge it.
			Matrix4d T_c, T_i;

			if ((node_[i_trans_to]) && (node_[c_trans_to])) {
				sub_graph_[i_index].trans_.Output(T_i);
				sub_graph_[c_index].trans_.Output(T_c);
			}
			else if ((node_[i_trans_to]) && (node_[c_trans_from])) {
				sub_graph_[i_index].trans_.Output(T_i);
				sub_graph_[c_index].trans_.InvOut(T_c);
			}
			else if ((node_[i_trans_from]) && (node_[c_trans_to])) {
				sub_graph_[i_index].trans_.InvOut(T_i);
				sub_graph_[c_index].trans_.Output(T_c);
			}
			else if ((node_[i_trans_from]) && (node_[c_trans_from])) {
				sub_graph_[i_index].trans_.InvOut(T_i);
				sub_graph_[c_index].trans_.InvOut(T_c);
			}
			else {
				cout << "Error : CombineGraphChunk - Wrong compare case" << endl;
				T_c = Matrix4d::Zero();
				T_i = Matrix4d::Ones();
			}
			if (isSimilarTrans(T_c, T_i, 0.436, 20.0)) {	// ICCV->Hierarchy 0.436->0.35
				for (int i = 0; i < c_iter->i_edge.size(); i++) {
					if (!(sub_graph_[i_index].SamePart(sub_graph_[c_iter->i_edge[i]])))
					{
						iter->i_edge.emplace_back(c_iter->i_edge[i]);
					}
				}
				c_iter = priority.erase(c_iter);
			}
			else {
				++c_iter;
			}
		}
	}
}

void RankingSubgraph::CombineChunk(list<Chunk>& priority)
{
	for (auto iter = priority.begin(); iter != priority.end(); ++iter) {
		list<Chunk>::iterator c_iter = iter;
		while (c_iter != priority.end()) {
			if (iter->node != c_iter->node)
			{
				break;
			}
			else if (iter == c_iter) {
				++c_iter;
				continue;
			}
			else {
				int i_index = iter->i_edge[0];
				int c_index = c_iter->i_edge[0];
				int i_trans_from = sub_graph_[i_index].trans_.index_;
				int i_trans_to = sub_graph_[i_index].trans_.toward_;
				int c_trans_from = sub_graph_[c_index].trans_.index_;
				int c_trans_to = sub_graph_[c_index].trans_.toward_;
				//########## If translation of iter and c_iter is similar, then merge it.
				Matrix4d T_c, T_i;
				if ((iter->node == i_trans_from) && (iter->node == c_trans_from)) {
					sub_graph_[i_index].trans_.Output(T_i);
					sub_graph_[c_index].trans_.Output(T_c);
				}
				else if ((iter->node == i_trans_from) && (iter->node == c_trans_to)) {
					sub_graph_[i_index].trans_.Output(T_i);
					sub_graph_[c_index].trans_.InvOut(T_c);
				}
				else if ((iter->node == i_trans_to) && (iter->node == c_trans_from)) {
					sub_graph_[i_index].trans_.InvOut(T_i);
					sub_graph_[c_index].trans_.Output(T_c);
				}
				else if ((iter->node == i_trans_to) && (iter->node == c_trans_to)) {
					sub_graph_[i_index].trans_.InvOut(T_i);
					sub_graph_[c_index].trans_.InvOut(T_c);
				}
				else {
					cout << "Error : CombineChunck - Wrong compare case" << endl;
					T_c = Matrix4d::Zero();
					T_i = Matrix4d::Ones();
				}
				if (isSimilarTrans(T_c, T_i, 0.436, 20.0))	// ICCV->Hierarchy 0.436 -> 0.35
				{
					for (int i = 0; i < c_iter->i_edge.size(); i++) {
						//########## If two lcs are not same edges
						if (!(sub_graph_[i_index].SamePart(sub_graph_[c_index]))) {
							iter->i_edge.emplace_back(c_iter->i_edge[i]);
						}
					}
					c_iter = priority.erase(c_iter);
				}
				else {
					++c_iter;
				}
			}
		}
	}
}

vector<LCSIndex> RankingSubgraph::PickEdges(const vector<bool>& true_node)
{
	vector<LCSIndex> lcs_input;
	list<LCSIndex>::iterator iter = lcs_reference_.begin();
	for (; iter != lcs_reference_.end(); ++iter) {
		int s_x = iter->shard_x_ - 1;
		int s_y = iter->shard_y_ - 1;
		if ((!true_node[s_x]) != (!true_node[s_y])) {
			lcs_input.emplace_back(*iter);
		}
	}
	return lcs_input;
}

void RankingSubgraph::PickEdges(const vector<bool>& true_node,
	vector<LCSIndex>& inside_lcs,
	vector<LCSIndex>& outside_lcs)
{
	list<LCSIndex>::iterator iter = lcs_reference_.begin();
	for (; iter != lcs_reference_.end(); ++iter) {
		int s_x = iter->shard_x_ - 1;
		int s_y = iter->shard_y_ - 1;
		if ((!true_node[s_x]) != (!true_node[s_y])) {
			inside_lcs.emplace_back(*iter);
		}
		else {
			outside_lcs.emplace_back(*iter);
		}
	}
}

//############################## class State ##############################//
void State::MakeTotalHierarchyPriority(void)
{
	int graph_size = graph_.size();
	total_priority_.clear();
	vector<PTR_PriorityList>().swap(total_priority_);

	int finish_counter(0);
	for (int i = 0; i < graph_size; i++) {
		if (graph_[i].iscomplete_) {
			finish_counter++;
			continue;
		}

		int root_node = graph_[i].root_node_;
		//########## Make priority including graphs which are in the same state
		graph_[i].MakeHierarchyPriorityList(i, graph_);
		FillTotalPR(graph_[i].priority_list_, i, root_node, total_priority_);
		if (graph_[i].priority_list_.empty()) {
			graph_[i].iscomplete_ = true;
			finish_counter++;
		}
	}

	//########## Make new graph into state
	if (finish_counter == graph_size) {
		int num_shard = true_node_.size();
		RankingSubgraph new_root_graph(num_shard);
		ReplenishRoot(new_root_graph);
		if (new_root_graph.root_node_ > 0) {
			graph_.emplace_back(new_root_graph);
		}
	}

	sort(total_priority_.begin(), total_priority_.end(), [](const PTR_PriorityList& a, const PTR_PriorityList& b) -> bool {
		return a.inlier_ > b.inlier_;
		});

	RemoveSamePriority();
}

void State::SynchronizeTrueNode(void)
{
	true_node_.clear();
	vector<bool>().swap(true_node_);

	true_node_.assign(graph_[0].node_.begin(), graph_[0].node_.end());
	for (int i = 0; i < true_node_.size(); i++) {
		for (int j = 1; j < graph_.size(); j++) {
			if (graph_[j].node_[i])
				true_node_[i] = true;
		}
	}
}

void State::UpdateMatchedMatrix(vector<Geom>& shard)
{
	if (total_matched_index_.empty()) {
		total_matched_index_.resize(shard.size());
		for (int i = 0; i < shard.size(); i++) {
			vector<bool> m_index(shard[i].edge_line_.point_.cols(), false);
			total_matched_index_[i] = m_index;
		}
	}
	for (int i = 0; i < total_matched_index_.size(); i++) {
		for (int j = 0; j < total_matched_index_[i].size(); j++) {
			total_matched_index_[i][j] = false;
			for (int k = 0; k < graph_.size(); k++) {
				if ((!graph_[k].matched_index_.empty()) && (graph_[k].matched_index_[i][j])) {
					total_matched_index_[i][j] = true;
					break;
				}
			}
		}
	}
}

void State::UpdateStateScore(void)
{
	this->state_score_ = 0;
	for (int i = 0; i < this->graph_.size(); i++) {
		this->state_score_ += this->graph_[i].graph_score_;
	}
}

bool State::isSimilarState(State& input)
{
	bool out = true;
	vector<bool> sim_index(graph_.size(), false);
	vector<bool> sim_comp(input.graph_.size(), false);

	for (int i = 0; i < graph_.size(); i++) {
		if (sim_index[i])
			continue;
		for (int j = 0; j < input.graph_.size(); j++) {
			if (sim_comp[j])
				continue;
			if (graph_[i].isSimilarGraph(input.graph_[j])) {
				sim_index[i] = true;
				sim_comp[j] = true;
			}
		}
	}
	for (int i = 0; i < graph_.size(); i++) {
		if (!sim_index[i]) {
			out = false;
			break;
		}
	}
	return out;
}

void State::SaveLog(const string& path,
	int index,
	const vector<Trans>& T_axis)
{
	//########## Get time information for saving ##########//
	struct tm* curr_tm;
	time_t curr_time = time(nullptr);
	curr_tm = localtime(&curr_time);
	int year = curr_tm->tm_year + 1900;
	int mon = curr_tm->tm_mon + 1;
	int day = curr_tm->tm_mday;
	int hour = curr_tm->tm_hour;
	int min = curr_tm->tm_min;

	int graph_size = this->graph_.size();
	string log_path = path + "_Top_" + to_string(index + 1) + "_Score_"
		+ to_string(day) + "_" + to_string(hour) + "_" + to_string(min) + ".txt";
	ofstream writeStream(log_path, ios::out | ios::trunc);
	if (writeStream) {
		writeStream << "Score : " << state_score_ << endl;
	}
	if (writeStream) {
		writeStream.close();
	}

	string trans_path = path + "_Top_" + to_string(index + 1) + "_Trans_" 
		+ to_string(day) + "_" + to_string(min) + ".csv";

	ofstream trans_stream(trans_path, ios::out | ios::trunc);
	
	// First, Save axis alignment matrix //
	for (int i = 0; i < T_axis.size(); i++){
		Matrix4d T;
		string contents;
		T_axis[i].Output(T);
		contents += to_string(i + 1) + ", ";

		for(int j = 0; j < 4; j++){
			for (int k = 0; k < 4; k++){
				contents += to_string(T(j, k)) + ", ";
			}
		}
		contents += "\n";
		trans_stream << contents;
	}
	trans_stream << "History" << endl;

	// Second, Save transformation history //
	for(int  i = 0; i < history_.size(); i++){
		string contents = StringOutHistory(i);
		trans_stream << contents;
	}

	if (trans_stream) {
		trans_stream.close();
	}
	else {
		cout << "Ranking_System : File opening error" << endl;
	}
}

void State::ReplaceGraph(int index, int& merged_index)
{
	int num_shard = true_node_.size();
	RankingSubgraph new_root_graph(num_shard);
	ReplenishRoot(new_root_graph);
	if (new_root_graph.root_node_ > 0) {
		// new_root_graph.MakeTransLog();
		graph_[index] = new_root_graph;
		InputHistory(history_,
		-new_root_graph.root_node_,
		index,
		Matrix3d::Identity(),
		Vector3d::Zero());
	}
	// All nodes are participating in reconstruction already.
	// There is no more outside node to use as root node. 
	else {
		// If removing 'index' is smaller than 'merged_index', the order of indexing will be messed up.
		if (index < merged_index) {
			merged_index--;
		}
		graph_.erase(graph_.begin() + index);
		cout << "There is no more new root" << endl;
	}

}

void State::ReplenishRoot(RankingSubgraph& graph)
{
	graph.root_node_ = -1;
	for (int i = 0; i < root_sequence_.size(); i++) {
		int root = root_sequence_[i].first;
		if (root_sequence_[i].second <= 0)
			continue;
		if (!true_node_[root - 1]) {
			graph.root_node_ = root;
			graph.node_[root - 1] = true;
			true_node_[root - 1] = true;
			break;
		}
	}
}

void State::RemoveSamePriority()
{
	int num = total_priority_.size();
	vector<bool> remove_table(num, false);
	for (int i = 0; i < num; i++) {
		if (remove_table[i])
			continue;

		int r_graph_i = total_priority_[i].graph_index_;
		int r_pr_i = total_priority_[i].priority_index_;
		int r_merge_i = graph_[r_graph_i].priority_list_[r_pr_i].graph_index;

		if (r_merge_i < 0) {
			continue;
		}

		for (int j = i + 1; j < num; j++) {
			if (remove_table[j])
				continue;

			int c_graph_i = total_priority_[j].graph_index_;
			int c_pr_i = total_priority_[j].priority_index_;
			int c_merge_i = graph_[c_graph_i].priority_list_[c_pr_i].graph_index;

			if (c_merge_i < 0) {
				continue;
			}

			if (r_graph_i != c_merge_i || r_merge_i != c_graph_i) {
				continue;
			}

			vector<LCSIndex> r_edge = graph_[r_graph_i].EdgeOut();
			vector<LCSIndex> c_edge = graph_[c_graph_i].EdgeOut();

			Matrix3d R, r_R, c_R;
			Vector3d t, r_t, c_t;
			TransAverage(graph_[r_graph_i].node_, r_edge, r_R, r_t);
			TransAverage(graph_[c_graph_i].node_, c_edge, c_R, c_t);

			R = r_R * c_R;
			t = r_R * c_t + r_t;
			if (!isConverge(R, t, 0.1, 10)) {
				continue;
			}

			if (total_priority_[i].inlier_ >= total_priority_[j].inlier_) {
				remove_table[j] = true;
			}
			else
				remove_table[i] = true;
			break;
		}
	}

	for (int i = num - 1; i > -1; i--) {
		if (remove_table[i])
			total_priority_.erase(total_priority_.begin() + i);
	}
}

string State::StringOutHistory(int index)
{
	string out;
	out += to_string(history_[index].graph_idx) + ", ";
	out += to_string(history_[index].node_idx) + ", ";
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			out += to_string(history_[index].trans(i, j)) + ", ";
		}
	}
	out += "\n";
	return out;
}

//############################## class StateManager ##############################//
void StateManager::getShard(vector<Geom>& shard)
{
	shard_.clear();
	int num_shard = shard.size();
	for (int i = 0; i < num_shard; i++) {
		shard_.push_back(shard[i]);
	}
}

void StateManager::Initialize(int N,
	int s,
	vector<Geom>& shard,
	list<LCSIndex>& LCS_out)
{
	cout << "----- Initialize Building graph  -----" << endl;
	N_ = N;
	s_ = s;
	step_counter_ = 0;
	ext_state_.clear();
	out_state_.clear();
	initial_graph_.clear();
	initial_graph_ = LCS_out;

	getShard(shard);

	vector<pair<int, int>> root_node = SortRoot(initial_graph_, shard_);

	int num_shard = shard.size();

	cout << "----- Make root graph  -----" << endl;
	int num_s = root_node.size();
	if (num_s > s_) num_s = s_;

	bool isroot = true;
	for (int j = 0; j < N_; j++) {
		State root_state;
		root_state.root_sequence_ = root_node;
		int start_i = num_s * j;
		int end_i = num_s * (j + 1);
		if (end_i > root_node.size()) {
			end_i = root_node.size();
			isroot = false;
		}


		for (int i = start_i; i < end_i; i++) {
			if (root_node[i].second <= 0 || !isroot) {
				//isroot = false;
				break;
			}
			RankingSubgraph root_graph(initial_graph_, num_shard);

			root_graph.node_[root_node[i].first - 1] = true;
			root_graph.root_node_ = root_node[i].first;

			root_state.graph_.emplace_back(root_graph);
			InputHistory(root_state.history_,
				-root_state.graph_.back().root_node_,
				root_state.graph_.size() - 1,
				Matrix3d::Identity(),
				Vector3d::Zero());
		}

		if (isroot && !root_state.graph_.empty()) {
			ext_state_.emplace_back(root_state);
			ext_state_.back().SynchronizeTrueNode();
			ext_state_.back().MakeTotalHierarchyPriority();
		}
		else
			break;
	}
	num_init_prio_ = ext_state_[0].total_priority_.size();
}

bool StateManager::EndCondition(State& state)
{
	bool out = false;

	int counter(0);
	for (int i = 0; i < shard_.size(); i++) {
		if (state.true_node_[i])
			counter++;
	}
	if (counter == shard_.size() & state.total_priority_.empty()) {
		cout << "End condition : All shards are matched" << endl;
		out = true;
	}
	if (!out) {
		if (step_counter_ == step_size_) {
			cout << "End condition : Counter Finish" << endl;
			out = true;
		}
	}

	if (state.total_priority_.empty()) {
		cout << "End condition : Priority list empty " << endl;
		out = true;
	}

	return out;
}

void StateManager::PrepareNextStep(State& state)
{
	int num_shard = shard_.size();
	for (int i = 0; i < state.graph_.size(); i++) {
		//########## Clear previous priority list
		state.graph_[i].priority_list_.clear();
		vector<Chunk>().swap(state.graph_[i].priority_list_);

		//########## Restore shards position.
		state.graph_[i].RestoreShard(shard_);
	}

	//########## Update axis based feature
	for (int j = 0; j < num_shard; j++) {
		int num_axis = shard_[j].edge_line_.axis_norm_.size();
		if ((num_axis == 1) || (state.true_node_[j])) {
			CalculateFeatureAxisless(shard_[j], 0);
		}
		else if (num_axis > 1) {
			CalculateFeatureAxisless(shard_[j], 0);
			for (int k = 1; k < num_axis; k++) {
				Matrix3d R_a, R_i;
				Vector3d t_a, t_i;
				AxisAlignment(shard_[j].edge_line_, R_a, t_a, k);
				CalculateFeatureAxisless(shard_[j], k);
				R_i = R_a.inverse();
				t_i = -R_i * t_a;
				shard_[j].MoveWOSurface(R_i, t_i);
			}
		}
	}

	//########## Make new 'edge'
	list<LCSIndex> lcs_out;
	FeatureCompGraphBuilding(shard_,
		lcs_out,
		25,
		MINIMUM_NUMBER,
		state.total_matched_index_);

	for (int i = 0; i < state.graph_.size(); i++) {
		list<LCSIndex> lcs = lcs_out;
		PickEdges(lcs, state.graph_[i].node_);
		
		RegistrationPruning(shard_, lcs, state.graph_, i, step_counter_);
		state.graph_[i].ReplaceLCS(lcs);

		RemoveEdgeUsingPCInlier(shard_, state.graph_, i);
	}

	int current_graph_size = state.graph_.size();
	state.MakeTotalHierarchyPriority();

	//########## If total number of priority is lower than 10% of previous one,
	//########## add new node
	if (state.total_priority_.size() < num_init_prio_ * 0.1) {
		RankingSubgraph new_root_graph(num_shard);
		state.ReplenishRoot(new_root_graph);
		if (new_root_graph.root_node_ > 0) {
			// new_root_graph.MakeTransLog();
			state.graph_.emplace_back(new_root_graph);
			InputHistory(state.history_,
			-state.graph_.back().root_node_,
			state.graph_.size() - 1,
			Matrix3d::Identity(),
			Vector3d::Zero());
		}
	}

	//########## Make priority for newly added graph
	if (state.graph_.size() > current_graph_size) {
		list<LCSIndex> lcs_new;
		FeatureCompGraphBuilding(shard_,
			lcs_new,
			25,
			MINIMUM_NUMBER,
			state.total_matched_index_);

		PickEdges(lcs_new, state.graph_.back().node_);
		RegistrationPruning(shard_, lcs_new, state.graph_, state.graph_.size() - 1, step_counter_);
		state.graph_.back().ReplaceLCS(lcs_new);
		RemoveEdgeUsingPCInlier(shard_, state.graph_, state.graph_.size() - 1);

		state.MakeTotalHierarchyPriority();
	}

	//########## Restore initial state
	for (int i = 0; i < state.graph_.size(); i++) {
		for (int j = 0; j < num_shard; j++) {
			if (state.graph_[i].node_[j]) {
				Matrix3d R;
				Vector3d t;
				state.graph_[i].T_[j].InvOut(R, t);
				shard_[j].Move(R, t);
			}
		}
	}
}

void StateManager::BuildStep(void)
{
	cout << "----- Start : " << step_counter_ << " Step -----" << endl;

	int num_state = ext_state_.size();
	int num_shard = shard_.size();
	vector<State> next_state_set;
	int ext_s = s_;
	cout << "----- Expend  Select " << ext_s << " number of graphs" << endl;
	cout << "Number of current States : " << num_state << " same or less than " << N_ << endl;

	//########## Extend State (FIRST STAGE) 
	//########## Current state manager has 'num_state' states, and each state explores 's_' times different states.
	for (int i = 0; i < num_state; i++) {
		//########## If state satisfies end condition, save state into 'out_state_' vector
		if (EndCondition(ext_state_[i])) {
			out_state_.push_back(ext_state_[i]);
			continue;
		}
		//########## Extend 's_' number of state based on priority list
		else {
			int ext_counter(0);

			for (int j = 0; j < ext_s; j++) {
				State next_state = ext_state_[i];
				if (j > next_state.total_priority_.size() - 1)
					break;
				else if (BuildState(next_state, j, i)) {
					next_state_set.push_back(next_state);
					ext_counter++;
				}
			}
			//########## If the extension failed, Show current state as result
			if (ext_counter == 0) {
				out_state_.push_back(ext_state_[i]);
			}
		}
	}
	step_counter_++;
	ext_state_.clear();
	vector<State>().swap(ext_state_);

	//########## End all graph building process
	if (next_state_set.empty()) {
		cout << "----- Finish build graph  -----" << endl;
		sort(out_state_.begin(), out_state_.end(), [](State a, State b) -> bool {
			return a.state_score_ > b.state_score_;
			});
		RemoveSameState(out_state_);

		for (int i = 0; i < out_state_.size(); i++) {
			for (int j = 0; j < out_state_[i].graph_.size(); j++) {
				// out_state_[i].graph_[j].MakeTransLog();
				Matrix3d R; Vector3d t;
				for (int k = 0; k < out_state_[i].graph_[j].T_.size(); k++) {
					out_state_[i].graph_[j].T_[k].Output(R, t);
				}
			}
		}
		return;
	}

	//########## Prepare next Step (SECOND STAGE)
	else {
		cout << "----- Select N subgraphs for next step  -----" << endl;
		sort(next_state_set.begin(), next_state_set.end(), [](State a, State b) -> bool {
			return a.state_score_ > b.state_score_;
			});
		RemoveSameState(next_state_set);

		int N = next_state_set.size();
		if (N > N_) N = N_;

		cout << "Start to pick" << N << " number of high rank state" << endl;
		for (int iter = 0; iter < N; iter++) {
			PrepareNextStep(next_state_set[iter]);
			ext_state_.push_back(next_state_set[iter]);
		}
	}
	next_state_set.clear();
	vector<State>().swap(next_state_set);

	BuildStep();
	return;
}

bool StateManager::BuildState(State& state,
	int order_index,
	int ext_index)
{
	bool return_value = true;
	int num_shard = shard_.size();

	int graph_index = state.total_priority_[order_index].graph_index_;
	if (state.graph_[graph_index].root_node_ != state.total_priority_[order_index].root_num_) {
		cout << "StateManager :: BuildState Graph doesn't accord record" << endl;
		return false;
	}

	//########## Save initial axis data
	Vector3d axis_point_log(shard_[state.graph_[graph_index].root_node_ - 1].edge_line_.axis_point_[0]);
	Vector3d axis_norm_log(shard_[state.graph_[graph_index].root_node_ - 1].edge_line_.axis_norm_[0]);

	state.graph_[graph_index].priority_index_ = state.total_priority_[order_index].priority_index_;
	int pr_index = state.graph_[graph_index].priority_index_;
	int merge_graph = state.graph_[graph_index].priority_list_[pr_index].graph_index;

	//########## merge_graph < 0 means reconstructing node is coming from outside state
	if (merge_graph < 0) {
		int current_node = state.graph_[graph_index].NodeOut() - 1;
		state.true_node_[current_node] = true;
		// state.node_log_.emplace_back(current_node + 1);

		PrepareGraphBuilding(shard_, 
			state.graph_[graph_index],
			state.history_,
			graph_index);
	}
	//########## merge_graph > 0 means that graph merging step inside state
	else {
		cout << "Graph merging step : " << merge_graph + 1 << " to " << graph_index + 1 << endl;

		PrepareGraphBuildinginMerge(shard_,
			state.graph_[graph_index],
			state.graph_[merge_graph],
			state.history_,
			graph_index);

		state.ReplaceGraph(merge_graph, graph_index);
	}

	vector<Matrix3d> R(num_shard);
	vector<Vector3d> t(num_shard);
	for (int i = 0; i < num_shard; i++) {
		R[i] = Matrix3d::Identity();
		t[i] = { 0, 0, 0 };
	}
	int global_inlier = 0;
	bool rim_restrain = true, axis_restrain = true;
	vector<RankingSubgraph> Dummy_graph;

	IcpIncGraphAxis(shard_,
		R,
		t,
		state.graph_[graph_index],
		Dummy_graph,
		state.graph_[graph_index].graph_score_,
		rim_restrain,
		axis_restrain);

	for (int i = 0; i < num_shard; i++) {
		state.graph_[graph_index].T_[i].Input(R[i], t[i]);
		InputHistory(
			state.history_, 
			i + 1, 
			graph_index, 
			R[i], t[i]);
	}
	GraphAxisRefinement(shard_, state.graph_[graph_index], state.history_, graph_index);

	return_value = CheckGraphPlausibility(shard_,
		state.graph_[graph_index],
		log_path_,
		step_counter_,
		ext_index,
		order_index,
		merge_graph);

	for (int i = 0; i < num_shard; i++) {
		Matrix3d R_i;
		Vector3d t_i;
		if (state.graph_[graph_index].node_[i]) {
			state.graph_[graph_index].T_[i].InvOut(R_i, t_i);
			shard_[i].Move(R_i, t_i);
		}
	}
	shard_[state.graph_[graph_index].root_node_ - 1].edge_line_.axis_point_[0] = axis_point_log;
	shard_[state.graph_[graph_index].root_node_ - 1].edge_line_.axis_norm_[0] = axis_norm_log;


	if (return_value) {
		state.UpdateMatchedMatrix(shard_);
		state.UpdateStateScore();
		state.SynchronizeTrueNode();
	}

	return return_value;
}

//############################## Other function ##############################//
bool InlierCompare(const Chunk& A, const Chunk& B)
{
	if (A.inlier == B.inlier) {
		if (A.node == B.node) {
			return A.i_edge > B.i_edge;
		}
		else {
			return A.node > B.node;
		}
	}

	else {
		return A.inlier > B.inlier;
	}
}

void CalculateMatchingScore(Chunk& chunk, const vector<LCSIndex>& lcs_out)
{
	// Reset the score
	chunk.inlier = 0;
	vector<LCSIndex> history;	// ICCV->Hierarchy Doesn't count same edge more than one time
	int num_multi_edge(0);
	for (int i = 0; i < chunk.i_edge.size(); i++) {
		int index = chunk.i_edge[i];
		bool isadd = true;
		for (int j = 0; j < history.size(); j++) {
			if (history[j].SamePart(lcs_out[index])) {
				isadd = false;
				break;
			}
		}
		if (isadd) {
			chunk.inlier += lcs_out[index].inliner_;
			history.push_back(lcs_out[index]);
			num_multi_edge++;
		}
	}
}

bool SortPair(const pair<int, int>& a,
	const pair<int, int>& b)
{
	return a.second > b.second;
}

vector<pair<int, int>> SortRoot(list<LCSIndex>& lcs_out, vector<Geom>& shard)
{
	int num_of_shard = shard.size();
	vector<pair<int, int>> node(num_of_shard);	// first : node index, second : score

	list<LCSIndex>::iterator iter = lcs_out.begin();

	for (; iter != lcs_out.end(); ++iter) {
		node[iter->shard_x_ - 1].second += iter->inliner_;
		node[iter->shard_y_ - 1].second += iter->inliner_;
	}

	for (int i = 0; i < node.size(); i++) {
		double input_w = (double)shard[i].edge_line_.point_.cols() / 100;
		double volume_weight = (exp(input_w) - exp(-input_w)) / (exp(input_w) + exp(-input_w));
		node[i].second = (int)(volume_weight * (double)node[i].second);
		node[i].first = i + 1;
	}

	sort(node.begin(), node.end(), SortPair);

	cout << "Node Sequence : ";
	for (int i = 0; i < node.size(); i++) {
		cout << node[i].first << "(" << node[i].second << "), ";
	}
	cout << endl;
	return node;
}

bool NodeCompare(const Chunk& A, const Chunk& B)
{
	return A.node < B.node;
}


void ExclusivelyPickEdge(list<LCSIndex>& lcs_out,
	vector<Geom>& shard,
	int exclusive_index)
{
	if (exclusive_index == 0)
		return;

	list<LCSIndex>::iterator iter = lcs_out.begin();

	if (exclusive_index == 1) {
		for (; iter != lcs_out.end(); ) {
			int s_x = iter->shard_x_ - 1;
			int s_y = iter->shard_y_ - 1;
			if ((shard[s_x].edge_line_.is_seg_rim_) && (shard[s_y].edge_line_.is_seg_rim_)) {
				++iter;
			}
			else
				iter = lcs_out.erase(iter);
		}
	}
	else if (exclusive_index == 2) {
		for (; iter != lcs_out.end(); ) {
			int s_x = iter->shard_x_ - 1;
			int s_y = iter->shard_y_ - 1;
			if ((shard[s_x].edge_line_.is_seg_base_) && (shard[s_y].edge_line_.is_seg_base_)) {
				++iter;
			}
			else
				iter = lcs_out.erase(iter);
		}
	}
	else if (exclusive_index == 3) {
		for (; iter != lcs_out.end(); ) {
			int s_x = iter->shard_x_ - 1;
			int s_y = iter->shard_y_ - 1;
			if ((shard[s_x].edge_line_.is_seg_base_) && (shard[s_y].edge_line_.is_seg_base_)) {
				if ((!shard[s_x].edge_line_.is_sane_base_) && (!shard[s_y].edge_line_.is_sane_base_)) {
					++iter;
				}
				else {
					iter = lcs_out.erase(iter);
				}
			}
			else
				iter = lcs_out.erase(iter);
		}
	}
}

void TransAverage(int current_node,
	vector<LCSIndex>& edges,
	Matrix3d& R,
	Vector3d& t)
{
	//########## Choose one reference rotation. And calculate average relative rotation matrix
	//########## to avoid singularity
	int num_edge = edges.size();
	Vector3d  w = { 0, 0, 0 }, t_avg = { 0, 0, 0 };

	R = Matrix3d::Zero();

	Matrix4d T_ref_inv;
	Matrix3d R_ref, R_avg;
	Vector3d t_ref = { 0, 0, 0 };
	if (edges[0].trans_.index_ == current_node) {
		edges[0].trans_.InvOut(T_ref_inv);
		edges[0].trans_.Output(R_ref, t_ref);
	}
	else {
		edges[0].trans_.Output(T_ref_inv);
		edges[0].trans_.InvOut(R_ref, t_ref);
	}

	if (num_edge == 1) {
		R = R_ref;
		t = t_ref;
		return;
	}

	vector<Matrix3d> R_r;
	vector<Vector3d> t_r;
	for (int i = 1; i < num_edge; i++) {
		Matrix4d tmp_T, T_r;
		if (edges[i].trans_.index_ == current_node) {
			edges[i].trans_.Output(tmp_T);
		}
		else {
			edges[i].trans_.InvOut(tmp_T);
		}
		T_r = tmp_T * T_ref_inv;

		Matrix3d tmp_R = Matrix3d::Identity();
		Vector3d tmp_w, tmp_t = { 0, 0, 0 };
		for (int k = 0; k < 3; k++) {
			tmp_R.row(k) << T_r(k, 0), T_r(k, 1), T_r(k, 2);
			tmp_t[k] = T_r(k, 3);
		}

		tmp_R = tmp_R.log();
		tmp_w << -tmp_R(1, 2), tmp_R(0, 2), -tmp_R(0, 1);
		w += tmp_w;
		t_avg += tmp_t;
	}

	w = w / num_edge;
	t_avg = t_avg / num_edge;
	R_avg.col(0) << 0, w(2), -w(1);
	R_avg.col(1) << -w(2), 0, w(0);
	R_avg.col(2) << w(1), -w(0), 0;

	R_avg = R_avg.exp();

	R = R_avg * R_ref;
	t = R_avg * t_ref + t_avg;
}

void TransAverage(const vector<bool>& merge_node,
	vector<LCSIndex>& edges,
	Matrix3d& R, Vector3d& t)
{
	// Choose one reference rotation. And calculate average relative rotation matrix
	// to avoid singularity
	int num_edge = edges.size();
	Vector3d  w = { 0, 0, 0 }, t_avg = { 0, 0, 0 };

	R = Matrix3d::Zero();

	Matrix4d T_ref_inv;
	Matrix3d R_ref, R_avg;
	Vector3d t_ref = { 0, 0, 0 };
	int e_index = edges[0].trans_.index_ - 1;
	if (merge_node[e_index]) {
		edges[0].trans_.InvOut(T_ref_inv);
		edges[0].trans_.Output(R_ref, t_ref);
	}
	else {
		edges[0].trans_.Output(T_ref_inv);
		edges[0].trans_.InvOut(R_ref, t_ref);
	}

	if (num_edge == 1) {
		R = R_ref;
		t = t_ref;
		return;
	}

	vector<Matrix3d> R_r;
	vector<Vector3d> t_r;
	for (int i = 1; i < num_edge; i++) {
		e_index = edges[i].trans_.index_ - 1;
		Matrix4d tmp_T, T_r;
		if (merge_node[e_index]) {
			edges[i].trans_.Output(tmp_T);
		}
		else {
			edges[i].trans_.InvOut(tmp_T);
		}
		T_r = tmp_T * T_ref_inv;

		Matrix3d tmp_R = Matrix3d::Identity();
		Vector3d tmp_w, tmp_t = { 0, 0, 0 };
		for (int k = 0; k < 3; k++) {
			tmp_R.row(k) << T_r(k, 0), T_r(k, 1), T_r(k, 2);
			tmp_t[k] = T_r(k, 3);
		}

		tmp_R = tmp_R.log();
		tmp_w << -tmp_R(1, 2), tmp_R(0, 2), -tmp_R(0, 1);
		w += tmp_w;
		t_avg += tmp_t;
	}

	w = w / num_edge;
	t_avg = t_avg / num_edge;
	R_avg.col(0) << 0, w(2), -w(1);
	R_avg.col(1) << -w(2), 0, w(0);
	R_avg.col(2) << w(1), -w(0), 0;

	R_avg = R_avg.exp();

	R = R_avg * R_ref;
	t = R_avg * t_ref + t_avg;
}

void PickEdges(list<LCSIndex>& lcs_out, const vector<bool>& true_node)
{
	list<LCSIndex>::iterator iter = lcs_out.begin();

	for (; iter != lcs_out.end(); ) {
		int s_x = iter->shard_x_ - 1;
		int s_y = iter->shard_y_ - 1;
		if ((!true_node[s_x]) != (!true_node[s_y])) {
			++iter;
		}
		else {
			iter = lcs_out.erase(iter);
		}
	}
}

void RemoveSmallShards(vector<Geom>& shard, list<LCSIndex>& lcs, int threshold)
{
	list<LCSIndex>::iterator iter = lcs.begin();

	for (; iter != lcs.end(); ) {
		int num_x = shard[iter->shard_x_ - 1].edge_line_.point_.cols();
		int num_y = shard[iter->shard_y_ - 1].edge_line_.point_.cols();
		if ((num_x < threshold) || (num_y < threshold)) {
			iter = lcs.erase(iter);
		}
		else
			iter++;
	}
}
bool CompExtGraph(const RankingSubgraph& a, const RankingSubgraph& b)
{
	return a.graph_score_ > b.graph_score_;
}

void EditLCSPairTrans(RankingSubgraph& subgraph)
{
	list<LCSIndex>::iterator iter = subgraph.lcs_reference_.begin();
	for (; iter != subgraph.lcs_reference_.end(); ) {
		int index = iter->trans_.index_;
		int toward = iter->trans_.toward_;
		if (subgraph.node_[index - 1]) {
			Matrix4d T_p, T_i;
			subgraph.T_[index - 1].InvOut(T_i);
			iter->trans_.Output(T_p);
			iter->trans_.Set(T_i, index, toward);
			iter->trans_.Input(T_p);
		}
		else {
			Matrix4d T;
			subgraph.T_[toward - 1].Output(T);
			iter->trans_.Input(T);
		}
		iter++;
	}
}

void RemoveEdgeUsingPCInlier(vector<Geom>& shard,
	vector<RankingSubgraph>& graph,
	int g_index)
{
	int num_shard = shard.size();
	list<LCSIndex>::iterator lcs_iter = graph[g_index].lcs_reference_.begin();

	for (; lcs_iter != graph[g_index].lcs_reference_.end(); ) {
		Matrix3d R_p, R_pi;
		Vector3d t_p, t_pi;
		int c_node = lcs_iter->shard_x_;
		lcs_iter->trans_.Output(R_p, t_p);
		lcs_iter->trans_.InvOut(R_pi, t_pi);
		bool is_outside = false;
		int merge_index = -1;

		if (graph[g_index].node_[c_node - 1])
			c_node = lcs_iter->shard_y_;

		is_outside = isOutside(*lcs_iter, graph, g_index, c_node, merge_index);


		if (!is_outside) {
			for (int i = 0; i < shard.size(); i++) {
				if (graph[merge_index].node_[i])
					shard[i].MoveWOSurface(R_p, t_p);
			}

			// ICCV->Hierarchy
			bool overlap = MergeOverlapTest(shard,
				graph,
				g_index,
				merge_index);

			if (overlap)
				lcs_iter = graph[g_index].lcs_reference_.erase(lcs_iter);
			else {
				//########## Calculate PC based inlier
				bool pc_out = CountPCInlier(lcs_iter->inliner_,
					graph[g_index].node_,
					graph[merge_index].node_,
					shard,
					7.0, 1.5);	//

				if (pc_out)
					lcs_iter++;
				else
					lcs_iter = graph[g_index].lcs_reference_.erase(lcs_iter);
			}

			for (int i = 0; i < shard.size(); i++) {
				if (graph[merge_index].node_[i])
					shard[i].MoveWOSurface(R_pi, t_pi);
			}
		}
		else {
			shard[c_node - 1].MoveWOSurface(R_p, t_p);

			//########## Remove Overlap fragment
			bool overlap = SingleOverlapTest(graph[g_index].node_,
				c_node - 1,
				shard);

			if (overlap)
				lcs_iter = graph[g_index].lcs_reference_.erase(lcs_iter);
			else {
				//########## Calculate PC based inlier
				bool pc_out = CountPCInlier(lcs_iter->inliner_,
					graph[g_index].node_,
					shard,
					c_node,
					7.0, 1.5, false);

				if (pc_out)
					lcs_iter++;
				else {
					lcs_iter = graph[g_index].lcs_reference_.erase(lcs_iter);
				}
			}
			shard[c_node - 1].MoveWOSurface(R_pi, t_pi);
		}
	}
}


void RemoveSameGraph(vector<RankingSubgraph>& g_in, vector<RankingSubgraph>& g_out)
{
	g_out.clear();
	int num = g_in.size();
	bool* index = new bool[num];
	std::fill_n(index, num, false);

	for (int i = 0; i < num; i++) {
		if (index[i])
			continue;
		for (int j = i + 1; j < num; j++) {
			if (index[j])
				continue;
			else {
				if (g_in[i].isSimilarGraph(g_in[j]))
				{
					if (g_in[i].edge_.size() >= g_in[j].edge_.size()) {
						index[j] = true;
					}
					else {
						index[i] = true;
						break;
					}
				}
			}
		}
	}
	for (int i = 0; i < num; i++) {
		if (!index[i]) {
			g_out.push_back(g_in[i]);
		}
	}

	delete[] index;
}

void RemoveSameGraph(vector<RankingSubgraph>& g)
{
	vector<RankingSubgraph> tmp_g = g;
	g.clear();
	int num = tmp_g.size();
	bool* index = new bool[num];
	std::fill_n(index, num, false);

	for (int i = 0; i < num; i++) {
		if (index[i])
			continue;
		for (int j = i + 1; j < num; j++) {
			if (index[j])
				continue;
			else {
				if (tmp_g[i].isSimilarGraph(tmp_g[j]))
				{
					if (tmp_g[i].edge_.size() >= tmp_g[j].edge_.size()) {
						index[j] = true;
					}
					else {
						index[i] = true;
						break;
					}
				}
			}
		}
	}
	for (int i = 0; i < num; i++) {
		if (!index[i]) {
			g.push_back(tmp_g[i]);
		}
	}

	delete[] index;
}

void RemoveSameState(vector<State>& state)
{
	vector<State> tmp_s = state;
	state.clear();
	vector<State>().swap(state);


	int num = tmp_s.size();
	bool* index = new bool[num];
	std::fill_n(index, num, false);

	for (int i = 0; i < num; i++) {
		if (index[i])
			continue;
		for (int j = i + 1; j < num; j++) {
			if (index[j])
				continue;
			else {
				if (tmp_s[i].isSimilarState(tmp_s[j])) {
					if (tmp_s[i].state_score_ >= tmp_s[j].state_score_) {
						index[j] = true;
					}
					else {
						index[i] = true;
						break;
					}
				}
			}
		}
	}
	for (int i = 0; i < num; i++) {
		if (!index[i]) {
			state.push_back(tmp_s[i]);
		}
	}

	delete[] index;
}

bool isSameGraph(RankingSubgraph& g_a, RankingSubgraph& g_b)
{
	int num_node = g_a.node_.size();
	int num_edge = g_a.edge_.size();
	if (num_node != g_b.node_.size()) return false;
	else if (num_edge != g_b.edge_.size()) return false;

	// Investigate node first
	for (int i = 0; i < num_node; i++) {
		if (g_a.node_[i] != g_b.node_[i]) {
			return false;
		}
	}

	// Investigate edges 
	list<LCSIndex>::iterator a_iter = g_a.edge_.begin();
	list<LCSIndex>::iterator b_iter = g_b.edge_.begin();
	for (; a_iter != g_a.edge_.end(); ) {
		if (a_iter->index_ != b_iter->index_) {
			return false;
		}
		else {
			a_iter++;
			b_iter++;
		}
	}

	return true;
}

void PrepareGraphBuilding(vector<Geom>& shard,
	RankingSubgraph& toprank_graph,
	vector<TransHistory>& history,
	int graph_index)
{
	int num_shard = shard.size();

	//########## Find current reconstructing node from priority list
	int current_node = toprank_graph.NodeOut() - 1;
	toprank_graph.node_[current_node] = true;

	//########## Find edge from prioirty list
	vector<LCSIndex> edges = toprank_graph.EdgeOut();
	int num_priority_edges = edges.size();
	toprank_graph.edge_size_.push_back(num_priority_edges);

	//########## Insert used edge to toprank_graph edge set for building history
	for (int i = 0; i < num_priority_edges; i++) {
		pair<int, int> edge_link;
		edge_link.first = edges[i].shard_x_;
		edge_link.second = edges[i].shard_y_;

		toprank_graph.edge_.push_back(edges[i]);
		toprank_graph.simple_graph_(edges[i].shard_x_ - 1, edges[i].shard_y_ - 1) = 1;
		toprank_graph.simple_graph_(edges[i].shard_y_ - 1, edges[i].shard_x_ - 1) = 1;
	}

	//########## Initialize transformation matrix for ICP
	toprank_graph.RestoreShard(shard);

	//########## Move current piece based on pairwise transformation matrix
	Matrix3d R_p;
	Vector3d t_p;

	//########## In this Algorithm, pieces are always axis aligned initial state
	TransAverage(current_node + 1, edges, R_p, t_p);

	//########## Make ICP initial condiiton
	shard[current_node].Move(R_p, t_p);
	toprank_graph.T_[current_node].Input(R_p, t_p);
	InputHistory(history, 
		current_node + 1,
		graph_index,
		R_p, t_p);

	//########## Initialize 'matched_index_' member.
	toprank_graph.ResetMatchedIndex(shard);
}

void PrepareGraphBuildinginMerge(vector<Geom>& shard,
	RankingSubgraph& base_graph,
	const RankingSubgraph& merge_graph,
	vector<TransHistory>& history,
	int graph_index)
{
	int num_shard = shard.size();
	int pr_index = base_graph.priority_index_;
	if (base_graph.priority_list_[pr_index].graph_index < 0) {
		cout << "PrepareGraphBuildinginMerge Error " << endl;
	}

	base_graph.RestoreShard(shard);

	//########## Find current reconstructing node from priority list
	for (int i = 0; i < merge_graph.node_.size(); i++) {
		if (merge_graph.node_[i]) {
			if (base_graph.node_[i]) {
				cout << "PrepareGraphBuildinginMerge Error : There is overlapped node" << endl;
				return;
			}
			base_graph.node_[i] = true;
		}
	}
	// base_graph.MakeTransLog(); // Check here

	//########## Find edge from prioirty list
	vector<LCSIndex> edges = base_graph.EdgeOut();
	int num_priority_edges = edges.size();
	base_graph.edge_size_.emplace_back(num_priority_edges);

	//########## Insert used edge to toprank_graph edge set for building history
	for (int i = 0; i < num_priority_edges; i++) {
		pair<int, int> edge_link;
		edge_link.first = edges[i].shard_x_;
		edge_link.second = edges[i].shard_y_;

		base_graph.edge_.emplace_back(edges[i]);
		base_graph.simple_graph_(edges[i].shard_x_ - 1, edges[i].shard_y_ - 1) = 1;
		base_graph.simple_graph_(edges[i].shard_y_ - 1, edges[i].shard_x_ - 1) = 1;
	}

	//########## Move current piece based on pairwise transformation matrix
	Matrix3d R_p, R_prev;
	Vector3d t_p, t_prev;

	//########## In this Algorithm, pieces are always axis aligned initial state
	TransAverage(merge_graph.node_, edges, R_p, t_p);

	//########## Make ICP initial condiiton
	for (int i = 0; i < merge_graph.node_.size(); i++) {
		if (merge_graph.node_[i]) {
			merge_graph.T_[i].Output(R_prev, t_prev);
			shard[i].Move(R_prev, t_prev);
			shard[i].Move(R_p, t_p);
			base_graph.T_[i].Input(R_prev, t_prev);
			base_graph.T_[i].Input(R_p, t_p);
			InputHistory(history, 
			i + 1, 
			graph_index,
			R_p, t_p);
		}
	}
	base_graph.ResetMatchedIndex(shard);
}

void GraphAxisRefinement(vector<Geom>& shard,
	RankingSubgraph& toprank_graph, 
	vector<TransHistory>& history,
	int graph_index)
{
	int num_shard = shard.size();
	vector<Geom*> geom_ptr;
	for (int i = 0; i < num_shard; i++) {
		if (toprank_graph.node_[i]) {
			geom_ptr.push_back(&shard[i]);
		}
	}

	Matrix3d R_a;
	Vector3d t_a;

	//########## Axis refinement process
	shard[toprank_graph.root_node_ - 1].edge_line_.axis_point_[0] = { 0, 0, 0 };
	shard[toprank_graph.root_node_ - 1].edge_line_.axis_norm_[0] = { 0, 0, 1 };
	RefineAxis(geom_ptr,
		shard[toprank_graph.root_node_ - 1].edge_line_.axis_point_[0],
		shard[toprank_graph.root_node_ - 1].edge_line_.axis_norm_[0],
		100, NUMBER_OF_THREAD, 0.5, true);
	//########## End axis refinement process

	AxisAlignment(shard[toprank_graph.root_node_ - 1].edge_line_, R_a, t_a);
	shard[toprank_graph.root_node_ - 1].SurMove(R_a, t_a);

	toprank_graph.T_[toprank_graph.root_node_ - 1].Input(R_a, t_a);
	InputHistory(history, 
	toprank_graph.root_node_, 
	graph_index,
	R_a, t_a);
	// toprank_graph.InputTransLog(toprank_graph.root_node_, R_a, t_a); // Check here
	for (int i = 0; i < num_shard; i++) {
		if ((i + 1 != toprank_graph.root_node_) && (toprank_graph.node_[i])) {
			shard[i].Move(R_a, t_a);
			toprank_graph.T_[i].Input(R_a, t_a);
			InputHistory(history, 
			i + 1,
			graph_index,
			R_a, t_a);
		}
	}
}

bool CheckGraphPlausibility(vector<Geom>& shard,
	RankingSubgraph& toprank_graph,
	string& log_path,
	int step_counter,
	int ext_index,
	int graph_index,
	int merge_graph)
{
	string fail_reason = "NONE_";	// For debug
	bool return_value = true;
	int num_shard = shard.size();
	//################### First, Cehck score which is the number of inliers #################// 	
	if (toprank_graph.graph_score_ < 0)
	{
		fail_reason = "Score_";
		return_value = false;
	}

	//################### Second, Check all pair-wise overlap #################// 
	if (return_value)
	{
		for (int i = 0; i < num_shard; i++) {
			for (int j = i + 1; j < num_shard; j++) {
				if ((toprank_graph.node_[i]) && (toprank_graph.node_[j])) {
					double area, size;
					bool overlap = OverlapCheck_3d(shard[i].edge_line_,
						shard[j].edge_line_,
						area,
						size,
						50);
					toprank_graph.max_overlap_area_ = std::max(area, toprank_graph.max_overlap_area_);
					if (overlap) {
						fail_reason = "Overlap_" + to_string(toprank_graph.max_overlap_area_) + "_";
						return_value = false;
						break;
					}
				}
			}
			if (!return_value) {
				break;
			}
		}
	}

	//################### Third, Check shape which is profile curves and rim condition #################// 
	vector<Vector3d> profile;
	if (return_value) {
		bool profile_matched = true;
		if (step_counter > 0) {
			bool interpolation = false, is_rim = false;
			double H_rim(0), R_rim(0);
			vector<Vector3d> rim_data;
			for (int i = 0; i < num_shard; i++) {
				if ((toprank_graph.node_[i])) {
					ToCylindricalInterpolation(shard[i].edge_line_, profile, interpolation);
					if (shard[i].edge_line_.is_seg_rim_) {
						is_rim = true;
						for (int j = 0; j < shard[i].edge_line_.index_.cols(); j++) {
							if (shard[i].edge_line_.index_(2, j)) {
								int start = shard[i].edge_line_.index_(0, j);
								int end = shard[i].edge_line_.index_(1, j);
								for (int r_c = start - 1; r_c < end; r_c++) {
									rim_data.push_back(shard[i].edge_line_.point_.col(r_c));
								}
							}
						}
					}
				}
			}
			double pc_var_value(0);
			if (!profile.empty()) {
				profile_matched = ProfileChecking(profile, 7.0, 7.0);	//
			}
			if (profile_matched && is_rim) {
				int up_count(0), down_count(0);
				MakeRadiusHeight(R_rim, H_rim, rim_data);
				MinMaxValue z_total;
				z_total.max_value = profile.back()(2);
				z_total.min_value = profile.front()(2);
				double top_gap = z_total.max_value - H_rim - 10;
				double bottom_gap = H_rim - z_total.min_value - 10;
				if ((top_gap > 0) && (bottom_gap > 0)) {
					profile_matched = false;
				}
			}
		}


		if (!profile_matched) {
			fail_reason = "PC_";
			return_value = false;
		}
	}

	return return_value;
}

void FillTotalPR(const vector<Chunk>& PR_list,
	int index,
	int root_node,
	vector<PTR_PriorityList>& total_PR)
{
	for (int j = 0; j < PR_list.size(); j++) {
		PTR_PriorityList ptr_P_L;
		ptr_P_L.root_num_ = root_node;
		ptr_P_L.graph_index_ = index;
		ptr_P_L.priority_index_ = j;
		ptr_P_L.inlier_ = PR_list[j].inlier;
		total_PR.emplace_back(ptr_P_L);
	}
}

// ICCV->Hierarchy
bool SingleOverlapTest(const vector<bool>& true_node,
	const int& c_node,
	vector<Geom>& shard)
{
	bool overlap = false;
	//########## Remove Overlap fragment
	for (int j = 0; j < shard.size(); j++) {
		if (true_node[j]) {
			double area, size;

			overlap = OverlapCheck_3d(shard[j].edge_line_,
				shard[c_node].edge_line_,
				area,
				size,
				100);

			if (overlap)
				break;
		}
	}

	return overlap;
}

bool isIdentity(Matrix3d& R){
	Matrix3d id = Matrix3d::Identity();
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(R(i ,j) != id(i, j)){
				return false;
			}
		}
	}
	return true;
}

void InputHistory(vector<TransHistory>& history,
		int node,
		int graph_idx,
		Matrix3d R,
		Vector3d t)
{
	if(isIdentity(R) && node > -1) {
		if(t[0] == 0 && t[1] == 0 && t[2] == 0)
			return;
	}
	if(node < 0){
		node *= -1;
	}
	struct TransHistory input_history;
	input_history.graph_idx = graph_idx;
	input_history.node_idx = node;
	input_history.trans = Matrix4d::Identity();
	for (int i = 0; i < 3; i++) {
		input_history.trans.row(i) << R(i, 0), R(i, 1), R(i, 2), t[i];
	}

	history.push_back(input_history);
}