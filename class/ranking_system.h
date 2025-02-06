#pragma once
#ifndef _RANKING_SYSTEM_H_
#define _RANKING_SYSTEM_H_

#include <memory.h>
#include <omp.h>
#include <ctime>
#include "../class/data_structure.h"
#include "../class/feature_matching.h"
#include "../class/reconstruction.h"
#include "../class/filter.h"
#include "../class/visualize.h"
#include "../class/axis_estimation.h"
#include <pcl/common/common_headers.h>
#include <pcl/features/normal_3d.h>
#include <pcl/io/pcd_io.h>
#include <pcl/io/obj_io.h>
#include <pcl/io/vtk_lib_io.h>
#include <pcl/io/impl/vtk_lib_io.hpp>
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/console/parse.h>
#include <pcl/common/transforms.h>

struct Chunk {
	Chunk() :
		node(0),
		i_edge(0),
		inlier(0),
		graph_index(-1) {};

	bool operator ==(const Chunk& a) {
		if (this->node != a.node) return false;
		else if (this->inlier != a.inlier) return false;
		else if (this->i_edge.size() != a.i_edge.size()) return false;
		else {
			int count = 0;
			int size = this->i_edge.size();
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					if (a.i_edge[i] == this->i_edge[j]) {
						count++;
						break;
					}
				}
			}
			if (count != size) return false;
		}
		return true;
	}

	int node;
	vector<int> i_edge;			// edge index about LCS list
	int inlier;					// number of inlier of this chunk 
	int graph_index;			// This indicates a graph in the state. -1 indicates priority was generated from unmatched shards
};

struct TransHistory {
	int graph_idx;
	int node_idx;
	Matrix4d trans;
};

class RankingSubgraph {
public:
	explicit RankingSubgraph(int num_shard) 
	{
		graph_score_ = 0;
		pc_score_ = 0.0;
		root_node_ = -1;
		node_.resize(num_shard, false);
		simple_graph_ = MatrixXd::Zero(num_shard, num_shard);
		iscomplete_ = false;
		Matrix3d I = Matrix3d::Identity();
		Vector3d zero = { 0, 0, 0 };
		T_.resize(num_shard);
		for (int i = 0; i < num_shard; ++i) {
			T_[i].Set(I, zero, i + 1, i + 1);
		}
		max_overlap_area_ = 0;
	};

	RankingSubgraph(list<LCSIndex>& lcs_out, int num_of_shard)
		: lcs_reference_(lcs_out),
		knum_of_shard_(num_of_shard),
		priority_index_(0),
		iscomplete_(false)
	{
		graph_score_ = 0;
		pc_score_ = 0.0;
		root_node_ = -1;
		max_overlap_area_ = 0;
		node_.resize(num_of_shard, false);
		simple_graph_ = MatrixXd::Zero(num_of_shard, num_of_shard);

		Matrix3d I = Matrix3d::Identity();
		Vector3d zero = { 0, 0, 0 };
		T_.resize(num_of_shard);
		for (int i = 0; i < num_of_shard; ++i) {
			T_[i].Set(I, zero, i + 1, i + 1);
		}
		int count(0);
		for (auto iter = lcs_out.begin(); iter != lcs_out.end(); iter++) {
			sub_graph_.emplace_back(*iter);
			count++;
		}
	};

	~RankingSubgraph() {};

	bool operator > (const RankingSubgraph& rhs) const {
		return (this->graph_score_ > rhs.graph_score_);
	}	
	void Copy(RankingSubgraph& input);

	bool isSimilarGraph(RankingSubgraph& G_i);

	int NumTrueNode(void);

	// Output current node.
	int NodeOut(void);	

	// Output current connection edge
	vector<LCSIndex> EdgeOut(void);				

	// Replace lcs_reference to lcs_in
	void ReplaceLCS(list<LCSIndex>& lcs_in);			

	// Restore shard position
	void RestoreShard(vector<Geom>& shard) const;		

	void ResetMatchedIndex(const vector<Geom>& shard);

	void MakeHierarchyPriorityList(int index,
		vector<RankingSubgraph>& graph);

	void CombineGraphChunk(list<Chunk>& priority, 
		const vector<RankingSubgraph>& graph);

private:
	void CombineChunk(list<Chunk>& priority);

	// Pick subgraph edges 
	vector<LCSIndex> PickEdges(const vector<bool>& true_node);		

	void PickEdges(const vector<bool>& true_node,
		vector<LCSIndex>& inside_lcs,
		vector<LCSIndex>& outside_lcs);

public:
	int knum_of_shard_;							// Number of shards
	vector<Trans> T_;							// Transformation matrix of all shards.
	list<LCSIndex> lcs_reference_;				// Reference graph which is G in the algorithm. This reference graph varies with each step, which is line 7 in the algorithm 
	int priority_index_;						// Priority index : Which effective chunck is processing now
	vector<Chunk> priority_list_;				// Include processing node and connected edge to true_graph. 	
	vector<LCSIndex> sub_graph_;				// subgraph only includes nodes from (V - V')
	double max_overlap_area_;					// Max overlapped area of this step
	list<LCSIndex> edge_;
	vector<int>  edge_size_;					// Record of edge size of each step
	vector<bool> node_;
	int graph_score_;
	double pc_score_;							// Profile curve score
	int root_node_;								// Root node starts 1
	MatrixXd simple_graph_;						// Simple graph expression, which doesn't include edge region information
	vector<vector<bool>> matched_index_;		// e.g. if shard[0].point_.col(3) is matched then, matched_index_[0][3] is 'true' 
	bool iscomplete_;
};

struct PTR_PriorityList {
	int root_num_;
	int graph_index_;
	int priority_index_;
	int inlier_;
};

class State {
public:
	State() : state_score_(0) {};
	explicit State(int num_shard) 
		: state_score_(0), 
		true_node_(num_shard, false) { };
	~State() {};

	// Including all grpahs and hierarchy to make priority list
	void MakeTotalHierarchyPriority(void);	

	// Fill out reconstructed shards into true_node_
	void SynchronizeTrueNode(void);		

	// Fill out reconstructed points as true value into total_matched_matrix
	void UpdateMatchedMatrix(vector<Geom>& shard);		

	// Update Statescore, which is sum of all graph score
	void UpdateStateScore(void);			

	bool isSimilarState(State& input);

	void SaveLog(const string& path, 
		int index,
		const vector<Trans>& T_axis);

	void ReplaceGraph(int index, 
		int& merged_index);

	void ReplenishRoot(RankingSubgraph& graph);

	void RemoveSamePriority(void);

	string StringOutHistory(int index);

public:
	vector<RankingSubgraph> graph_;
	vector<PTR_PriorityList> total_priority_;
	vector<bool> true_node_;
	vector<TransHistory> history_;
	int state_score_;

	vector<vector<bool>> total_matched_index_;
	vector<pair<int, int>> root_sequence_;
};

class StateManager {
public:
	StateManager() : N_(0), s_(0), step_counter_(0), num_init_prio_(0) {};

	// If there is no previous grpah use this constructor
	StateManager(int N, 
		int s,
		vector<Geom>& shard, 
		list<LCSIndex>& LCS_out, 
		int step_size, 
		const string& log_path)
		: log_path_(log_path),
		step_size_(step_size),
		num_init_prio_(0)
	{	
		Initialize(N, s, shard, LCS_out);
	}
	StateManager(int step_size, string& log_path) : N_(0), s_(0), num_init_prio_(0) {
		step_size_ = step_size;
		log_path_ = log_path;
	};

	void getShard(vector<Geom>& shard);

	void Initialize(int N, 
		int s,
		vector<Geom>& shard, 
		list<LCSIndex>& LCS_out);

	void BuildStep(void);

private:
	bool BuildState(State& state, 
		int order_index, 
		int ext_index);

	bool EndCondition(State& state);

	void PrepareNextStep(State& state);

public:
	vector<State> ext_state_;			// extended state
	vector<State> out_state_;			// Output state
	list<LCSIndex> initial_graph_;		// Initial graph, 
	vector<Geom> shard_;
	string log_path_;

private:
	int N_;
	int s_;
	int step_counter_;
	int step_size_;
	int num_init_prio_;
};

//############################## Other Functions ##############################//
bool InlierCompare(const Chunk& A,
	const Chunk& B);

void CalculateMatchingScore(Chunk& chunk, 
	const vector<LCSIndex>& lcs_out);

bool SortPair(const pair<int, int>& a, 
	const pair<int, int>& b);

vector<pair<int, int>> SortRoot(list<LCSIndex>& lcs_out, vector<Geom>& shard);

bool NodeCompare(const Chunk& A, 
	const Chunk& B);

// Pick only index edge, which is usually rim(index 1) or base(index 2) or fractured base(index 3)
void ExclusivelyPickEdge(list<LCSIndex>& lcs_out, 
	vector<Geom>& shard,
	int exclusive_index = 0);	

void TransAverage(int current_node, 
	vector<LCSIndex>& edges, 
	Matrix3d& R,
	Vector3d& t);
void TransAverage(const vector<bool>& merge_node, 
	vector<LCSIndex>& edges, 
	Matrix3d& R, 
	Vector3d& t);

void PickEdges(list<LCSIndex>& lcs_out,
	const vector<bool>& true_node);

void RemoveEdgeUsingPCInlier(vector<Geom>& shard,
	vector<RankingSubgraph>& graph,
	int g_index);

void RemoveOverlappedLCS(const RankingSubgraph& top_graph,
	list<LCSIndex>& lcs_out);

void RemoveSmallShards(vector<Geom>& shard, 
	list<LCSIndex>& lcs,
	int threshold = 50);

bool CompExtGraph(const RankingSubgraph& a,
	const RankingSubgraph& b);

void EditLCSPairTrans(RankingSubgraph& subgraph);

void RemoveSameGraph(vector<RankingSubgraph>& g_in,
	vector<RankingSubgraph>& g_out);
void RemoveSameGraph(vector<RankingSubgraph>& g);

void RemoveSameState(vector<State>& state);

bool isSameGraph(RankingSubgraph& g_a, 
	RankingSubgraph& g_b);

void PrepareGraphBuilding(vector<Geom>& shard,
	RankingSubgraph& toprank_graph,
	vector<TransHistory>& history,
	int graph_index);

void PrepareGraphBuildinginMerge(vector<Geom>& shard, 
	RankingSubgraph& base_graph, 
	const RankingSubgraph& merge_graph,
	vector<TransHistory>& history,
	int graph_index);

void GraphAxisRefinement(vector<Geom>& shard,
	RankingSubgraph& toprank_graph, 
	vector<TransHistory>& history,
	int graph_index);

bool CheckGraphPlausibility(vector<Geom>& shard,
	RankingSubgraph& toprank_graph,
	string& log_path, 
	int step_counter, 
	int ext_index,
	int graph_index,
	int merge_graph);

void FillTotalPR(const vector<Chunk>& PR_list,
	int index,
	int root_node,
	vector<PTR_PriorityList>& total_PR);

bool SingleOverlapTest(const vector<bool>& true_node,
	const int& c_node,
	vector<Geom>& shard);

bool isIdentity(Matrix3d& R);

void InputHistory(vector<TransHistory>& history,
	int node,
	int graph_idx,
	Matrix3d R,
	Vector3d t);
	
#endif // !_RANKING_SYSTEM_H