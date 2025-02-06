#include "reconstruction.h"
#include "../class/ranking_system.h"

//############################## other function ##############################//
bool isConverge(const Matrix4d& T,
	double rad_threshold,
	double t_threshold)
{
	Matrix3d R;
	Vector3d t, w;
	for (int i = 0; i < 3; i++) {
		R.row(i) << T(i, 0), T(i, 1), T(i, 2);
		t[i] = T(i, 3);
	}

	Matrix3d log_R = R.log();
	w << -log_R(1, 2), log_R(0, 2), -log_R(0, 1);

	double deg = w.norm();	// Radian
	double trans = t.norm();
	if ((deg < rad_threshold) && (trans < t_threshold)) {
		return true;
	}
	else {
		return false;
	}
}
bool isConverge(const Matrix3d& R,
	const Vector3d t,
	double rad_threshold,
	double t_threshold)
{
	Vector3d w;
	Matrix3d log_R = R.log();
	w << -log_R(1, 2), log_R(0, 2), -log_R(0, 1);

	double deg = w.norm();	// Radian
	double trans = t.norm();
	if ((deg < rad_threshold) && (trans < t_threshold)) {
		return true;
	}
	else {
		return false;
	}
}

double isClose2Eye(const Matrix4d& T) {
	Matrix4d TmI = T;
	for (int i = 0; i < 4; i++) {
		TmI(i, i) -= 1.0;
	}

	return (TmI.norm());
}

double isClose2Eye(const Matrix3d& R, const Vector3d& t)
{
	Matrix3d RmI = R;
	RmI(0, 0) -= 1.0;
	RmI(1, 1) -= 1.0;
	RmI(2, 2) -= 1.0;

	return (RmI.norm() + t.norm());
}

void AxisAlignment(BreakLine& data,
	Matrix3d& R_out,
	Vector3d& t_out,
	int axis_index)
{
	int numberOfPoints = data.point_.cols();
	if (numberOfPoints < 10) return;

	MatrixXd p_norm(3, numberOfPoints);
	for (int i = 0; i < numberOfPoints; i++) {
		p_norm.col(i) = data.point_.col(i) - data.axis_point_[axis_index];
	}

	Vector3d Axis;
	Axis = data.axis_norm_[axis_index] / data.axis_norm_[axis_index].norm();

	MatrixXd R_t(3, 3);
	MatrixXd R(3, 3);
	Vector3d v3 = Axis;
	Vector3d v2(3);
	Vector3d v1(3);
	Vector3d v1_hash(3);
	v1_hash(0, 0) = 1; v1_hash(1, 0) = 0; v1_hash(2, 0) = 0;

	Vector3d x_vector = v1_hash - ((v1_hash.dot(v3)) * v3);
	v1 = x_vector / x_vector.norm();
	v2 = v3.cross(v1);

	R_t.col(0) = v1;
	R_t.col(1) = v2;
	R_t.col(2) = v3;
	R = R_t.transpose();
	R_out = R;
	t_out = -R_out * data.axis_point_[axis_index];

	MatrixXd Q(3, numberOfPoints);
	Vector3d Q_D;
	Q = R * p_norm;
	Q_D = R * Axis;

	double Q_z_mean = Q.row(2).mean();
	for (int i = 0; i < Q.cols(); i++) {
		data.point_(0, i) = Q(0, i);
		data.point_(1, i) = Q(1, i);
		data.point_(2, i) = Q(2, i) - Q_z_mean;
	}
	t_out[2] -= Q_z_mean;

	data.normal_ = R * data.normal_;
	data.line_normal_ = R * data.line_normal_;

	for (int i = 0; i < data.axis_norm_.size(); i++) {
		data.axis_norm_[i] = R_out * data.axis_norm_[i];
		data.axis_point_[i] = R_out * data.axis_point_[i] + t_out;
	}

	data.axis_norm_[axis_index] = { 0, 0, 1 };
	data.axis_point_[axis_index] = { 0, 0, 0 };
}

void RejectOutlier(Corres& cor, double dist_TH, double angle_TH)
{
	vector<double> distance(cor.cor.size()), Norm(cor.cor.size());
	int num_inliers = 0;

	Corres dummy;
	dummy.index_A = cor.index_A;
	dummy.index_B = cor.index_B;
	for (int i = 0; i < cor.cor.size(); i++) {
		Norm[i] = (cor.cor[i].n_A.dot(cor.cor[i].n_B));
		distance[i] = (cor.cor[i].p_A - cor.cor[i].p_B).norm();

		if ((std::abs(distance[i]) < dist_TH) && (Norm[i]) > angle_TH) {
			dummy.cor.push_back(cor.cor[i]);

			num_inliers++;
		}
	}
	cor.cor.clear();
	cor = dummy;
}

void MakeBlock(BreakLine& L,
	BreakLine& output,
	int start,
	int end)
{
	output.point_ = L.point_.block(0, start - 1, 3, end - start + 1);
	output.normal_ = L.normal_.block(0, start - 1, 3, end - start + 1);
	output.line_normal_ = L.line_normal_.block(0, start - 1, 3, end - start + 1);
	output.axis_point_[0] = L.axis_point_[0];
	output.axis_norm_[0] = L.axis_norm_[0];
}

void MakeSection(vector<BreakLine>& L,
	BreakLine& p_A,
	BreakLine& p_B,
	const LCSIndex& index)
{
	int s_A = index.start_.y, s_B = index.start_.x;
	int e_A = index.end_.y, e_B = index.end_.x;

	p_A.point_.resize(3, index.size_);
	p_A.normal_.resize(3, index.size_);
	MakeBlock(L[index.shard_y_ - 1], p_A, s_A, e_A);

	L[index.shard_x_ - 1].ChangeOrder();
	p_B.point_.resize(3, index.size_);
	p_B.normal_.resize(3, index.size_);
	MakeBlock(L[index.shard_x_ - 1], p_B, s_B, e_B);
	L[index.shard_x_ - 1].ChangeOrder();
}

void MakeSection(vector<Geom>& shard,
	BreakLine& p_A,
	BreakLine& p_B,
	LCSIndex& index)
{
	int s_A = index.start_.y, s_B = index.start_.x;
	int e_A = index.end_.y, e_B = index.end_.x;

	p_A.point_.resize(3, index.size_);
	p_A.normal_.resize(3, index.size_);
	MakeBlock(shard[index.shard_y_ - 1].edge_line_, p_A, s_A, e_A);

	shard[index.shard_x_ - 1].edge_line_.ChangeOrder();
	p_B.point_.resize(3, index.size_);
	p_B.normal_.resize(3, index.size_);
	MakeBlock(shard[index.shard_x_ - 1].edge_line_, p_B, s_B, e_B);
	shard[index.shard_x_ - 1].edge_line_.ChangeOrder();
}

void ChangeFormat(const BreakLine& in, ptr_cloud out)
{
	size_t num = in.point_.cols();
	out->points.resize(num);

	for (size_t i = 0; i < num; i++) {
		out->points[i].x = in.point_(0, i);
		out->points[i].y = in.point_(1, i);
		out->points[i].z = in.point_(2, i);
		out->points[i].normal_x = in.normal_(0, i);
		out->points[i].normal_y = in.normal_(1, i);
		out->points[i].normal_z = in.normal_(2, i);
	}
}

void MakeCor(Corres& c_in,
	BreakLine& in_A,
	BreakLine& in_B,
	bool onetoone)
{
	if (in_A.point_.size() == 1 || in_B.point_.size() == 1) return;

	BreakLine p_A = in_A, p_B = in_B;

	p_A.BuildTree();
	p_B.BuildTree();
	kdres* res = NULL;
	Vector3d pA, pB, nA, nB, line_nA, line_nB;
	// In one to one correspondence case, we don't need to consider about the fix or move points
	// Basically p_A is fixed point and p_B is moving point
	// so correspondence is made by p_A
	for (int i = 0; i < p_B.point_.cols(); i++) {
		res = kd_nearest(p_A.tree_, &p_B.point_(0, i));
		int* ptr_index_A = NULL;
		ptr_index_A = (int*)kd_res_item(res, &pA(0, 0));
		nA = p_A.normal_.col(*ptr_index_A);
		line_nA = p_A.line_normal_.col(*ptr_index_A);
		kd_res_free(res);
		CorPair dummy;

		if (onetoone) {
			res = kd_nearest(p_B.tree_, &pA(0, 0));
			int* ptr_index_B = NULL;
			ptr_index_B = (int*)kd_res_item(res, &pB(0, 0));
			nB = p_B.normal_.col(*ptr_index_B);
			line_nB = p_B.line_normal_.col(*ptr_index_B);
			kd_res_free(res);

			if (pB.isApprox(p_B.point_.col(i))) {
				dummy.p_A = pA;
				dummy.p_B = pB;
				dummy.n_A = nA;
				dummy.n_B = nB;
				dummy.line_n_A = line_nA;
				dummy.line_n_B = line_nB;
				dummy.index_A = *ptr_index_A;
				dummy.index_B = *ptr_index_B;
				c_in.cor.push_back(dummy);
			}
		}
		else {
			dummy.p_A = pA;
			dummy.n_A = nA;
			dummy.line_n_A = line_nA;
			dummy.p_B = p_B.point_.col(i);
			dummy.n_B = p_B.normal_.col(i);
			dummy.line_n_B = p_B.line_normal_.col(i);
			dummy.index_A = *ptr_index_A;
			dummy.index_B = i;
			c_in.cor.push_back(dummy);
		}
	}
	p_A.RemoveTree();
	p_B.RemoveTree();
}
void MakeCor(Corres& c_in,
	Corres& c_compare,
	BreakLine& A,
	BreakLine& B,
	int K)
{
	ptr_cloud cloud_A(new pcl::PointCloud<pcl::PointNormal>);
	ptr_cloud cloud_B(new pcl::PointCloud<pcl::PointNormal>);
	ChangeFormat(A, cloud_A);
	ChangeFormat(B, cloud_B);

	// Make Kdtree
	pcl::search::KdTree<pcl::PointNormal> kd_cloud_A(new pcl::search::KdTree<pcl::PointNormal>);
	kd_cloud_A.setInputCloud(cloud_A);
	pcl::search::KdTree<pcl::PointNormal> kd_cloud_B(new pcl::search::KdTree<pcl::PointNormal>);
	kd_cloud_B.setInputCloud(cloud_B);

	pcl::PointNormal searchPoint;
	vector<pcl::PointNormal> p;
	p.resize(2 * K);
	pcl::PointNormal p1, p2, p3, p4;
	for (size_t i = 0; i < c_compare.cor.size(); i++) {
		searchPoint.x = c_compare.cor[i].p_A[0];
		searchPoint.y = c_compare.cor[i].p_A[1];
		searchPoint.z = c_compare.cor[i].p_A[2];

		std::vector<int> pointIdxNKNSearch_A(K);
		std::vector<float> pointNKNSquaredDistance(K);
		if (kd_cloud_A.nearestKSearch(searchPoint, K, pointIdxNKNSearch_A, pointNKNSquaredDistance) > 0) {
			for (size_t j = 0; j < K; j++) {
				p[2 * j].x = cloud_A->points[pointIdxNKNSearch_A[j]].x;
				p[2 * j].y = cloud_A->points[pointIdxNKNSearch_A[j]].y;
				p[2 * j].z = cloud_A->points[pointIdxNKNSearch_A[j]].z;
				p[2 * j].normal_x = cloud_A->points[pointIdxNKNSearch_A[j]].normal_x;
				p[2 * j].normal_y = cloud_A->points[pointIdxNKNSearch_A[j]].normal_y;
				p[2 * j].normal_z = cloud_A->points[pointIdxNKNSearch_A[j]].normal_z;
			}
		}

		// searching for closest point on the surface near moved breakline points
		searchPoint.x = c_compare.cor[i].p_B[0];
		searchPoint.y = c_compare.cor[i].p_B[1];
		searchPoint.z = c_compare.cor[i].p_B[2];

		vector<int> pointIdxNKNSearch_B(K);
		vector<float> pointNKNSquaredDistanceB(K);
		if (kd_cloud_B.nearestKSearch(searchPoint, K, pointIdxNKNSearch_B, pointNKNSquaredDistanceB) > 0)
		{
			for (size_t j = 0; j < K; j++) {
				p[2 * j + 1].x = cloud_B->points[pointIdxNKNSearch_B[j]].x;
				p[2 * j + 1].y = cloud_B->points[pointIdxNKNSearch_B[j]].y;
				p[2 * j + 1].z = cloud_B->points[pointIdxNKNSearch_B[j]].z;
				p[2 * j + 1].normal_x = cloud_B->points[pointIdxNKNSearch_B[j]].normal_x;
				p[2 * j + 1].normal_y = cloud_B->points[pointIdxNKNSearch_B[j]].normal_y;
				p[2 * j + 1].normal_z = cloud_B->points[pointIdxNKNSearch_B[j]].normal_z;
			}
		}
		for (size_t i = 0; i < K; i++) {
			CorPair dummy;
			dummy.p_A << p[2 * i].x, p[2 * i].y, p[2 * i].z;
			dummy.p_B << p[2 * i + 1].x, p[2 * i + 1].y, p[2 * i + 1].z;
			dummy.n_A << p[2 * i].normal_x, p[2 * i].normal_y, p[2 * i].normal_z;
			dummy.n_B << p[2 * i + 1].normal_x, p[2 * i + 1].normal_y, p[2 * i + 1].normal_z;
			c_in.cor.push_back(dummy);
		}
	}
}

void MakeCorWOBuildTree(Corres& c_in,
	BreakLine& in_A,
	BreakLine& in_B,
	bool onetoone)
{
	if (in_A.point_.size() == 1 || in_B.point_.size() == 1) return;
	kdres* res = NULL;
	Vector3d pA, pB, nA, nB, line_nA, line_nB;
	// In one to one correspondence case, we don't need to consider about the fix or move points
	// Basically p_A is fixed point and p_B is moving point
	// so correspondence is made by p_A
	for (int i = 0; i < in_B.point_.cols(); i++) {
		res = kd_nearest(in_A.tree_, &in_B.point_(0, i));
		int* ptr_index_A = NULL;
		ptr_index_A = (int*)kd_res_item(res, &pA(0, 0));
		nA = in_A.normal_.col(*ptr_index_A);
		line_nA = in_A.line_normal_.col(*ptr_index_A);
		kd_res_free(res);

		CorPair dummy;

		if (onetoone) {
			res = kd_nearest(in_B.tree_, &pA(0, 0));
			int* ptr_index_B = NULL;
			ptr_index_B = (int*)kd_res_item(res, &pB(0, 0));
			nB = in_B.normal_.col(*ptr_index_B);
			line_nB = in_B.line_normal_.col(*ptr_index_B);
			kd_res_free(res);

			if (pB.isApprox(in_B.point_.col(i))) {
				dummy.p_A = pA;
				dummy.p_B = pB;
				dummy.n_A = nA;
				dummy.n_B = nB;
				dummy.line_n_A = line_nA;
				dummy.line_n_B = line_nB;
				dummy.index_A = *ptr_index_A;
				dummy.index_B = *ptr_index_B;
				c_in.cor.push_back(dummy);
			}
		}
		else {
			dummy.p_A = pA;
			dummy.n_A = nA;
			dummy.line_n_A = line_nA;
			dummy.p_B = in_B.point_.col(i);
			dummy.n_B = in_B.normal_.col(i);
			dummy.line_n_B = in_B.line_normal_.col(i);
			dummy.index_A = *ptr_index_A;
			dummy.index_B = i;
			c_in.cor.push_back(dummy);
		}
	}
}

void MakeRadiusHeight(double& r, double& h, vector<Vector3d>& data)
{
	vector<double> radius, height;
	int num = data.size();
	int middle_num = (num + 1) / 2;
	radius.resize(num);
	height.resize(num);

	for (int i = 0; i < num; i++) {
		radius[i] = std::sqrt(data[i][0] * data[i][0] + data[i][1] * data[i][1]);
		height[i] = data[i][2];
	}
	sort(radius.begin(), radius.end());
	sort(height.begin(), height.end());
	r = radius[middle_num];
	h = height[middle_num];
}

bool isEdgeRemoved(const MatrixXd& table, const vector<LCSIndex>& edges)
{
	int num = edges.size();
	for (int i = 0; i < num; i++) {
		int x = edges[i].shard_x_ - 1;
		int y = edges[i].shard_y_ - 1;

		if (x > y) {
			if (!table(y, x)) return true;
		}
		else if (y > x) {
			if (!table(x, y)) return true;
		}
	}

	return false;
}

void MakeSingleCorres(vector<Corres>& COR,
	vector<BreakLine>& L,
	const vector<bool>& true_node,
	const int& c_node,
	bool onetoone)
{
	int num_shard = true_node.size();
	vector<int> cor_making_index;
	//########## First make KD tree
	for (int i = 0; i < num_shard; i++) {
		if (true_node[i]) {
			L[i].BuildTree();
			cor_making_index.push_back(i);
		}
	}
	L[c_node - 1].BuildTree();

	int cor_counter(0);
	int total_size = cor_making_index.size();
	vector<Corres> COR_dummy(total_size);
	vector<bool> cor_index(total_size, false);

	omp_set_num_threads(NUMBER_OF_THREAD);
#pragma omp parallel for
	for (int i = 0; i < total_size; i++) {
		int i_B = cor_making_index[i];
		Corres cor_line;
		MakeCorWOBuildTree(cor_line, L[c_node - 1], L[i_B], onetoone);
		RejectOutlier(cor_line, 20, 0.7);

		cor_line.index_A = c_node;
		cor_line.index_B = i_B + 1;
		COR_dummy[i] = cor_line;
		if (cor_line.cor.size() > MINIMUM_NUMBER / 2) {	// ICCV->Hierarchy
			cor_counter++;
			cor_index[i] = true;
		}
	}

	for (int i = 0; i < total_size; i++) {
		if (cor_index[i]) {
			COR.push_back(COR_dummy[i]);
		}
	}

	//########## After make correspondence, remove KD tree
	for (int i = 0; i < num_shard; i++) {
		if (true_node[i]) {
			L[i].RemoveTree();
		}
	}
	L[c_node - 1].RemoveTree();
}

void MakeMergeCorres(vector<Corres>& COR,
	vector<BreakLine>& L,
	const vector<bool>& true_node,
	const vector<bool>& merge_node,
	bool onetoone)
{
	int num_shard = true_node.size();
	//########## First make KD tree
	for (int i = 0; i < num_shard; i++) {
		if (true_node[i] || merge_node[i]) {
			L[i].BuildTree();
		}
	}

	//########## Make correspondence pair index
	vector<pair<int, int>> pair_index;
	for (int i = 0; i < num_shard; i++) {
		for (int j = 0; j < num_shard; j++) {
			if (i == j)
				continue;
			if ((true_node[i]) && (merge_node[j])) {
				pair<int, int> pair_dummy;
				pair_dummy.first = j;
				pair_dummy.second = i;
				pair_index.push_back(pair_dummy);
			}
		}
	}

	int total_size = pair_index.size();
	vector<Corres> COR_dummy(total_size);
	vector<bool> cor_index(total_size, false);
	omp_set_num_threads(NUMBER_OF_THREAD);
#pragma omp parallel for 
	for (int i = 0; i < total_size; i++) {
		int i_mov = pair_index[i].first, i_fix = pair_index[i].second;
		Corres cor_line;
		MakeCorWOBuildTree(cor_line, L[i_mov], L[i_fix], onetoone);
		RejectOutlier(cor_line, 20, 0.7);

		cor_line.index_A = i_mov + 1;
		cor_line.index_B = i_fix + 1;
		COR_dummy[i] = cor_line;
		// If the number of breakline correspondence is over 6, fill out the table
		if (cor_line.cor.size() > MINIMUM_NUMBER / 2) {
			cor_index[i] = true;
		}
	}

	for (int i = 0; i < total_size; i++) {
		if (cor_index[i]) {
			COR.push_back(COR_dummy[i]);
		}
	}

	//########## After make correspondence, remove KD tree
	for (int i = 0; i < num_shard; i++) {
		if (true_node[i] || merge_node[i]) {
			L[i].RemoveTree();
		}
	}
}

void MakeMultiCorres(vector<Corres>& COR,
	vector<Geom>& shard,
	const vector<bool>& true_node,
	MatrixXd& simple_graph,
	MatrixXd& table,
	bool onetoone)
{
	int num_shard = true_node.size();
	//########## First make KD tree
	for (int i = 0; i < num_shard; i++) {
		if (true_node[i]) {
			shard[i].edge_line_.BuildTree();
		}
	}

	//########## Make correspondence pair index
	vector<pair<int, int>> pair_index;
	for (int i = 0; i < num_shard; i++) {
		for (int j = i + 1; j < num_shard; j++) {
			if ((true_node[i]) && (true_node[j])) {
				pair<int, int> pair_dummy;
				pair_dummy.first = i;
				pair_dummy.second = j;
				pair_index.push_back(pair_dummy);
			}
		}
	}

	int cor_counter(0);
	int total_size = pair_index.size();
	vector<Corres> COR_dummy(total_size);
	vector<bool> cor_index(total_size, false);
	omp_set_num_threads(NUMBER_OF_THREAD);
#pragma omp parallel for 
	for (int i = 0; i < total_size; i++) {
		int i_A = pair_index[i].first, i_B = pair_index[i].second;
		Corres cor_line;
		MakeCorWOBuildTree(cor_line, shard[i_A].edge_line_, shard[i_B].edge_line_, onetoone);
		RejectOutlier(cor_line, 20, 0.7);

		cor_line.index_A = i_A + 1;
		cor_line.index_B = i_B + 1;
		COR_dummy[i] = cor_line;
		// If the number of breakline correspondence is over 6, fill out the table
		if (cor_line.cor.size() > MINIMUM_NUMBER / 2) {	// ICCV->Hierarchy
			cor_counter++;
			cor_index[i] = true;

			simple_graph(i_A, i_B) = 1;
			simple_graph(i_B, i_A) = 1;
			table(i_A, i_B) = 1;
			table(i_B, i_A) = 1;
		}
	}

	for (int i = 0; i < total_size; i++) {
		if (cor_index[i]) {
			COR.push_back(COR_dummy[i]);
		}
	}

	//########## After make correspondence, remove KD tree
	for (int i = 0; i < num_shard; i++) {
		if (true_node[i]) {
			shard[i].edge_line_.RemoveTree();
		}
	}
}

void MakeCorWithSur(vector<Corres>& COR_line,
	vector<Corres>& COR_sur,
	vector<Corres>& COR_frac,
	vector<Geom>& shard,
	const vector<bool>& true_node,
	MatrixXd& table,
	bool onetoone)
{
	int num_shard = true_node.size();
	//########## First make KD tree
	for (int i = 0; i < num_shard; i++) {
		if (true_node[i]) {
			shard[i].edge_line_.BuildTree();
			shard[i].sur_frac_.BuildTree();
		}
	}

	//########## Make correspondence pair index
	vector<pair<int, int>> pair_index;
	for (int i = 0; i < num_shard; i++) {
		for (int j = i + 1; j < num_shard; j++) {
			if ((true_node[i]) && (true_node[j])) {
				pair<int, int> pair_dummy;
				pair_dummy.first = i;
				pair_dummy.second = j;
				pair_index.push_back(pair_dummy);
			}
		}
	}

	int cor_counter(0);
	int total_size = pair_index.size();
	vector<Corres> COR_line_dummy(total_size);
	vector<Corres> COR_sur_dummy(total_size);
	vector<Corres> COR_frac_dummy(total_size);
	vector<bool> cor_index(total_size, false);
	omp_set_num_threads(NUMBER_OF_THREAD);
#pragma omp parallel for 
	for (int i = 0; i < total_size; i++) {
		int i_A = pair_index[i].first, i_B = pair_index[i].second;
		Corres cor_line;
		MakeCorWOBuildTree(cor_line, shard[i_A].edge_line_, shard[i_B].edge_line_, onetoone);
		RejectOutlier(cor_line, 10, 0.8);

		cor_line.index_A = i_A + 1;
		cor_line.index_B = i_B + 1;
		COR_line_dummy[i] = cor_line;
		// If the number of breakline correspondence is over 6, fill out the table
		if (cor_line.cor.size() > MINIMUM_NUMBER / 2) {	// ICCV->Hierarchy
			cor_counter++;
			cor_index[i] = true;

			table(i_A, i_B) = 1;
			table(i_B, i_A) = 1;

			Corres tmp_frac, tmp_sur;
			tmp_frac.index_A = i_A + 1;
			tmp_frac.index_B = i_B + 1;
			tmp_sur.index_A = i_A + 1;
			tmp_sur.index_B = i_B + 1;

			MakeCorWOBuildTree(tmp_frac, shard[i_A].sur_frac_, shard[i_B].sur_frac_, onetoone);

			// Normal of fracture surface is inverted to each other so you have to multiply -1
			for (int c = 0; c < tmp_frac.cor.size(); c++) {
				tmp_frac.cor[c].n_B = -1 * tmp_frac.cor[c].n_B;
			}
			RejectOutlier(tmp_frac, 10, 0.7);

			// Make inner surface correspondence
			MakeCor(tmp_sur, cor_line, shard[i_A].sur_out_, shard[i_B].sur_out_, 4);
			COR_sur_dummy[i] = tmp_sur;
			COR_frac_dummy[i] = tmp_frac;
		}
	}

	for (int i = 0; i < total_size; i++) {
		if (cor_index[i]) {
			COR_line.push_back(COR_line_dummy[i]);
			COR_sur.push_back(COR_sur_dummy[i]);
			COR_frac.push_back(COR_frac_dummy[i]);
		}
	}

	//########## After make correspondence, remove KD tree
	for (int i = 0; i < num_shard; i++) {
		if (true_node[i]) {
			shard[i].edge_line_.RemoveTree();
			shard[i].sur_frac_.RemoveTree();
		}
	}
}

bool inlierCalculate(int& inlier,
	const vector<bool>& true_node,
	const vector<Corres>& cor,
	const vector<BreakLine>& L,
	bool volume_weight)
{
	vector<double> num_points(L.size(), 0);
	for (int i = 0; i < L.size(); i++) {
		num_points[i] = L[i].point_.cols();
	}
	CountInlier(inlier,
		cor,
		num_points,
		INLIER_THRESHOLD,
		ANGLE_THRESHOLD);	

	if (inlier < MINIMUM_NUMBER) {
		return false;
	}

	if (volume_weight) {
		double den(0), input_w(0), volume_weight(1);
		for (int i = 0; i < true_node.size(); i++) {
			if (true_node[i]) {
				den += 100.0;
				input_w += (double)L[i].point_.cols();
			}
		}

		input_w = input_w / den;
		volume_weight = (exp(input_w) - exp(-input_w)) / (exp(input_w) + exp(-input_w));
		inlier = (int)(volume_weight * (double)inlier);
	}

	return true;
}
bool inlierCalculate(int& inlier,
	const vector<bool>& true_node,
	const vector<Corres>& cor,
	const vector<Geom>& shard,
	bool volume_weight)
{
	vector<double> num_points(shard.size(), 0);
	for (int i = 0; i < shard.size(); i++) {
		num_points[i] = shard[i].edge_line_.point_.cols();
	}
	CountInlier(inlier,
		cor,
		num_points,
		INLIER_THRESHOLD,
		ANGLE_THRESHOLD);	

	if (inlier < MINIMUM_NUMBER) {
		return false;
	}

	if (volume_weight) {
		double den(0), input_w(0), volume_weight(1);
		for (int i = 0; i < true_node.size(); i++) {
			if (true_node[i]) {
				den += 100.0;
				input_w += (double)shard[i].edge_line_.point_.cols();
			}
		}

		input_w = input_w / den;
		volume_weight = (exp(input_w) - exp(-input_w)) / (exp(input_w) + exp(-input_w));
		inlier = (int)(volume_weight * (double)inlier);
	}

	return true;
}

void AxisConsistency(vector<BreakLine>& L,
	ceres::Problem& problem,
	ceres::LossFunction* loss_axis,
	double* s,
	double* trans,
	double w_a,
	int index)
{
	const int point_interval = 1;
	int num_surf_points = L[index].point_.cols();
	// total # residuals = 2 * num_residuals_per_surface
	int num_residuals_per_surface = num_surf_points / point_interval;
	int point_id;
	for (int k = 0; k < num_residuals_per_surface; ++k) {
		// add 2 residuals per selected surface point
		point_id = k * point_interval;
		ceres::CostFunction* biaxial_cao_error_in =
			new ceres::AutoDiffCostFunction<BiaxialCaoErrorWithFixedAxis, 1, 3, 3>(
				new BiaxialCaoErrorWithFixedAxis(
					L[index].point_.col(point_id),
					L[index].normal_.col(point_id),
					w_a
				)
				);
		problem.AddResidualBlock(biaxial_cao_error_in, loss_axis, s, trans);
	}
}
void AxisConsistency(vector<Geom>& shard,
	ceres::Problem& problem,
	ceres::LossFunction* loss_axis,
	double* s,
	double* trans,
	double w_a,
	int index)
{
	const int point_interval = 1;
	int num_surf_points = shard[index].edge_line_.point_.cols();
	// total # residuals = 2 * num_residuals_per_surface
	int num_residuals_per_surface = num_surf_points / point_interval;
	int point_id;
	for (int k = 0; k < num_residuals_per_surface; ++k) {
		// add 2 residuals per selected surface point
		point_id = k * point_interval;
		ceres::CostFunction* biaxial_cao_error_in =
			new ceres::AutoDiffCostFunction<BiaxialCaoErrorWithFixedAxis, 1, 3, 3>(
				new BiaxialCaoErrorWithFixedAxis(
					shard[index].edge_line_.point_.col(point_id),
					shard[index].edge_line_.normal_.col(point_id),
					w_a
				)
				);
		problem.AddResidualBlock(biaxial_cao_error_in, loss_axis, s, trans);
	}
}

void MakeRimData(vector<Vector3d>& rim_data,
	const vector<bool>& true_node,
	const vector<BreakLine>& L)
{
	for (int i = 0; i < true_node.size(); i++) {
		if (true_node[i]) {
			for (int j = 0; j < L[i].index_.cols(); j++) {
				if (L[i].index_(2, j)) {
					int start = L[i].index_(0, j);
					int end = L[i].index_(1, j);
					for (int r_c = start - 1; r_c < end; r_c++) {
						rim_data.push_back(L[i].point_.col(r_c));
					}
				}
			}
		}
	}
}
void MakeRimData(vector<Vector3d>& rim_data,
	const vector<bool>& true_node,
	const vector<Geom>& shard)
{
	for (int i = 0; i < true_node.size(); i++) {
		if (true_node[i] && shard[i].edge_line_.is_seg_rim_) {
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

void RimConstraint(vector<BreakLine>& L,
	ceres::Problem& problem,
	ceres::LossFunction* loss_rim,
	double* s,
	double* trans,
	double* R_rim,
	double* H_rim,
	double w_r,
	double w_h,
	int index)
{
	for (int j = 0; j < L[index].index_.cols(); j++) {
		if (L[index].index_(2, j)) {
			int start = L[index].index_(0, j);
			int end = L[index].index_(1, j);
			for (int r_c = start - 1; r_c < end; r_c++) {
				ceres::CostFunction* cost_function_rim =
					new ceres::AutoDiffCostFunction<CostFuncRim, 2, 3, 3, 1, 1>(new CostFuncRim(L[index].point_.col(r_c), w_r, w_h));
				problem.AddResidualBlock(cost_function_rim, loss_rim, s, trans, R_rim, H_rim);
			}
		}
	}
}
void RimConstraint(vector<Geom>& shard,
	ceres::Problem& problem,
	ceres::LossFunction* loss_rim,
	double* s,
	double* trans,
	double* R_rim,
	double* H_rim,
	double w_r,
	double w_h,
	int index)
{
	for (int j = 0; j < shard[index].edge_line_.index_.cols(); j++) {
		if (shard[index].edge_line_.index_(2, j)) {
			int start = shard[index].edge_line_.index_(0, j);
			int end = shard[index].edge_line_.index_(1, j);
			for (int r_c = start - 1; r_c < end; r_c++) {
				ceres::CostFunction* cost_function_rim =
					new ceres::AutoDiffCostFunction<CostFuncRim, 2, 3, 3, 1, 1>(new CostFuncRim(shard[index].edge_line_.point_.col(r_c), w_r, w_h));
				problem.AddResidualBlock(cost_function_rim, loss_rim, s, trans, R_rim, H_rim);
			}
		}
	}
}

void P2LConstraint(vector<Corres>& COR,
	ceres::Problem& problem,
	ceres::LossFunction* loss_dist,
	ceres::LossFunction* loss_norm,
	double** s,
	double** trans,
	double w_line,
	double w_n)
{
	for (int i = 0; i < COR.size(); i++) {
		for (int k = 0; k < COR[i].cor.size(); k++) {
			ceres::CostFunction* cost_function_dist =
				new ceres::AutoDiffCostFunction<CostFuncLineDist, 4, 3, 3, 3, 3>(new CostFuncLineDist(COR[i].cor[k], w_line));
			problem.AddResidualBlock(cost_function_dist, loss_dist, s[COR[i].index_A - 1], s[COR[i].index_B - 1], trans[COR[i].index_A - 1], trans[COR[i].index_B - 1]);

			ceres::CostFunction* cost_function_norm =
				new ceres::AutoDiffCostFunction<CostFuncNorm, 3, 3, 3, 3, 3>(new CostFuncNorm(COR[i].cor[k], w_n));
			problem.AddResidualBlock(cost_function_norm, loss_norm, s[COR[i].index_A - 1], s[COR[i].index_B - 1], trans[COR[i].index_A - 1], trans[COR[i].index_B - 1]);
		}
	}
}
void P2LConstraintFixed(vector<Corres>& COR,
	ceres::Problem& problem,
	ceres::LossFunction* loss_dist,
	ceres::LossFunction* loss_norm,
	double* s,
	double* trans,
	double w_line,
	double w_n)
{
	for (int i = 0; i < COR.size(); i++) {
		for (int k = 0; k < COR[i].cor.size(); k++) {
			ceres::CostFunction* cost_function_dist =
				new ceres::AutoDiffCostFunction<CostFuncFixedLineDist, 2, 3, 3>(new CostFuncFixedLineDist(COR[i].cor[k], w_line));
			problem.AddResidualBlock(cost_function_dist, loss_dist, s, trans);

			ceres::CostFunction* cost_function_norm =
				new ceres::AutoDiffCostFunction<CostFuncFixedNorm, 3, 3, 3>(new CostFuncFixedNorm(COR[i].cor[k], w_n));
			problem.AddResidualBlock(cost_function_norm, loss_norm, s, trans);
		}
	}
}

void P2PConstraint(vector<Corres>& COR,
	ceres::Problem& problem,
	ceres::LossFunction* loss_dist,
	ceres::LossFunction* loss_norm,
	double** s,
	double** trans,
	double w_d,
	double w_n)
{
	for (int i = 0; i < COR.size(); i++) {
		for (int k = 0; k < COR[i].cor.size(); k++) {
			ceres::CostFunction* cost_function_dist =
				new ceres::AutoDiffCostFunction<CostFuncDist, 3, 3, 3, 3, 3>(new CostFuncDist(COR[i].cor[k], w_d));
			problem.AddResidualBlock(cost_function_dist, loss_dist, s[COR[i].index_A - 1], s[COR[i].index_B - 1], trans[COR[i].index_A - 1], trans[COR[i].index_B - 1]);

			ceres::CostFunction* cost_function_norm =
				new ceres::AutoDiffCostFunction<CostFuncNorm, 3, 3, 3, 3, 3>(new CostFuncNorm(COR[i].cor[k], w_n));
			problem.AddResidualBlock(cost_function_norm, loss_norm, s[COR[i].index_A - 1], s[COR[i].index_B - 1], trans[COR[i].index_A - 1], trans[COR[i].index_B - 1]);
		}
	}
}
void P2PConstraintFixed(vector<Corres>& COR,
	ceres::Problem& problem,
	ceres::LossFunction* loss_dist,
	ceres::LossFunction* loss_norm,
	double* s,
	double* trans,
	double w_d,
	double w_n)
{
	for (int i = 0; i < COR.size(); i++) {
		for (int k = 0; k < COR[i].cor.size(); k++) {
			ceres::CostFunction* cost_function_dist =
				new ceres::AutoDiffCostFunction<CostFuncFixedDist, 3, 3, 3>(new CostFuncFixedDist(COR[i].cor[k], w_d));
			problem.AddResidualBlock(cost_function_dist, loss_dist, s, trans);

			ceres::CostFunction* cost_function_norm =
				new ceres::AutoDiffCostFunction<CostFuncFixedNorm, 3, 3, 3>(new CostFuncFixedNorm(COR[i].cor[k], w_n));
			problem.AddResidualBlock(cost_function_norm, loss_norm, s, trans);
		}
	}
}

void SurConstraint(vector<Corres>& COR,
	ceres::Problem& problem,
	ceres::LossFunction* loss_dist,
	double** s,
	double** trans,
	double weight)
{
	for (int i = 0; i < COR.size(); i++) {
		for (int k = 0; k < COR[i].cor.size(); k++) {
			ceres::CostFunction* cost_function_sur =
				new ceres::AutoDiffCostFunction<CostFunctorSur, 2, 3, 3, 3, 3>(new CostFunctorSur(COR[i].cor[k], weight));
			problem.AddResidualBlock(cost_function_sur, loss_dist, s[COR[i].index_A - 1], s[COR[i].index_B - 1], trans[COR[i].index_A - 1], trans[COR[i].index_B - 1]);
		}
	}
}

void UsePreCorres(Corres& cor_in,
	vector<BreakLine>& L,
	BreakLine& p_A,
	BreakLine& p_B,
	const LCSIndex& lcs,
	int c_node,
	bool fix)
{
	MakeSection(L, p_A, p_B, lcs);
	for (int j = 0; j < p_A.point_.cols(); j++) {
		CorPair dummy;
		dummy.p_A = p_A.point_.col(j);
		dummy.p_B = p_B.point_.col(j);
		dummy.n_A = p_A.normal_.col(j);
		dummy.n_B = p_B.normal_.col(j);
		dummy.line_n_A = p_A.line_normal_.col(j);
		dummy.line_n_B = p_B.line_normal_.col(j);
		cor_in.cor.push_back(dummy);
	}
	if (!fix)
		return;

	if (cor_in.index_A != c_node) {
		for (int i = 0; i < cor_in.cor.size(); i++) {
			cor_in.cor[i].SwitchAB();
		}
		cor_in.index_B = cor_in.index_A;
		cor_in.index_A = c_node;
	}
}

void UpdateTrans(BreakLine& L,
	double* s,
	double* trans,
	vector<Matrix3d>& R,
	vector<Vector3d>& t,
	vector<Matrix3d>& R_i,
	vector<Vector3d>& t_i,
	int index)
{
	double s_dummy[9];
	ceres::AngleAxisToRotationMatrix(s, s_dummy);
	Matrix3d R_dummy(s_dummy);
	R_i[index] = R_dummy;
	t_i[index] = Vector3d(trans[0], trans[1], trans[2]);

	EdgeLineMove(L, R_i[index], t_i[index]);
	R[index] = R_i[index] * R[index];
	t[index] = t_i[index] + R_i[index] * t[index];
}
void UpdateTrans(Geom& shard,
	double* s,
	double* trans,
	vector<Matrix3d>& R,
	vector<Vector3d>& t,
	vector<Matrix3d>& R_i,
	vector<Vector3d>& t_i,
	int index)
{
	double s_dummy[9];
	ceres::AngleAxisToRotationMatrix(s, s_dummy);
	Matrix3d R_dummy(s_dummy);
	R_i[index] = R_dummy;
	t_i[index] = Vector3d(trans[0], trans[1], trans[2]);

	shard.Move(R_i[index], t_i[index]);
	R[index] = R_i[index] * R[index];
	t[index] = t_i[index] + R_i[index] * t[index];
}

void FillMatchedPoints(const vector<Corres>& COR,
	vector<vector<bool>>& table)
{
	// Fill out matched points
	for (int i = 0; i < COR.size(); i++) {
		int s_A = COR[i].index_A - 1;
		int s_B = COR[i].index_B - 1;
		for (int j = 0; j < COR[i].cor.size(); j++) {
			double dist(0);
			dist = (COR[i].cor[j].p_A - COR[i].cor[j].p_B).norm();
			if (dist < 3.0) {
				table[s_A][COR[i].cor[j].index_A] = true;
				table[s_B][COR[i].cor[j].index_B] = true;
			}
		}
	}
}

void Icp(vector<BreakLine>& L,
	vector<Matrix3d>& R,
	vector<Vector3d>& t,
	const vector<LCSIndex>& m_LCS,
	CycleNode& cycle,
	bool pre_cor,
	bool onetoone)
{
	int num_shard = L.size();
	int num_node = cycle.nodes.size();
	int num_edge = cycle.edges.size();
	vector<Corres> COR;
	vector<Matrix3d> R_i = R;
	vector<Vector3d> t_i = t;
	vector<bool> true_node(num_shard, false);
	double** trans = new double* [num_shard];	// trans : transfortation
	double** s = new double* [num_shard];		// s : rotaion representer
	double w_d(1.0), w_n(3.0), w_line(1.0), w_a(0.1);
	double w_r(1.0), w_h(1.0);
	int max_iteration = 50, ceres_iteration = 100;

	COR.resize(num_edge);				// number of correspondence s same as number of edges
	if (num_edge != 1) {
		cout << "WARNING : num_edge should be one" << endl;
		return;
	}
	for (int i = 0; i < num_shard; ++i) {
		trans[i] = new double[3];
		s[i] = new double[3];
	}

	// Iterate until R_i and t_i are not changed
	bool point_to_line = false;
	bool axis = false;
	bool rim = false;

	for (int iter = 0; iter < max_iteration; iter++) {
		if (iter > 0) {
			// Turn off the Rim constraint if only one piece has rim
			int rim_counter = 0;
			rim = true;
			axis = true;
			for (int i = 0; i < num_node; i++) {
				int n_index = cycle.nodes[i] - 1;
				if (L[n_index].is_seg_rim_) rim_counter++;
			}
			if (rim_counter < 2) rim = false;
			point_to_line = true;
		}
		//########## Clear transformation parameters
		for (int i = 0; i < num_shard; i++) {
			for (int j = 0; j < 3; j++) {
				trans[i][j] = 0;
				s[i][j] = 0;
			}
			true_node[i] = false;
		}

		//############### Make correspondence ###############// 
		COR.clear();
		int shard_A = m_LCS[cycle.edges[0]].shard_y_;	// real shard number(i.g. piece 1 is 1)
		int shard_B = m_LCS[cycle.edges[0]].shard_x_;	// shard_x : mov, shard_y : fix
		Corres cor_in;
		cor_in.index_A = shard_A, cor_in.index_B = shard_B;	// make corres index(index the connected nodes)
		BreakLine p_A = L[shard_A - 1], p_B = L[shard_B - 1];

		// if use pre-correspondence then you need to divide the breakline data
		if (pre_cor) {
			UsePreCorres(cor_in, L, p_A, p_B, m_LCS[cycle.edges[0]]);
		}

		else {
			//if not then just use whole breakline data to make correspondence.
			MakeCor(cor_in, p_A, p_B, onetoone);	// If you make one to one correspondecne then set onetoone as true
			RejectOutlier(cor_in, 20, 0.7);
		}

		COR.push_back(cor_in);

		pre_cor = false;		// Pre-correspondences are used at only first time.

		//############### Check correspondence number ###############// 
		bool miss_cor = false;
		//#pragma omp parallel for
		for (int i = 0; i < COR.size(); i++) {
			if (COR[i].cor.size() < MINIMUM_NUMBER) {
				miss_cor = true;
				cycle.score = 11.0;
				break;
			}

			// Fill out edge table 
			int s_A = COR[i].index_A - 1;
			int s_B = COR[i].index_B - 1;
			true_node[s_A] = true;
			true_node[s_B] = true;
		}
		if (miss_cor)
			break;

		//############### Set nonlinear equation ###############// 
		ceres::Problem problem;
		ceres::LossFunction* loss_dist = new ceres::CauchyLoss(5.0);
		ceres::LossFunction* loss_norm = new ceres::CauchyLoss(2.0);
		ceres::LossFunction* loss_axis = new ceres::CauchyLoss(2.0);
		ceres::LossFunction* loss_rim = new ceres::CauchyLoss(2.0);

		if (point_to_line) {
			P2LConstraint(COR, problem, loss_dist, loss_norm, s, trans, w_line, w_n);
		}
		else {
			P2PConstraint(COR, problem, loss_dist, loss_norm, s, trans, w_d, w_n);
		}

		//######################### Axis consistency ###########################// 
		if (axis) {
			for (int i = 0; i < num_shard; i++) {
				if (true_node[i]) {
					AxisConsistency(L, problem, loss_axis, s[i], trans[i], w_a, i);
				}
			}
		}

		//######################### Rim constraint ###########################// 
		//If rim = true : consider the rim constraint.
		if (rim) {
			double R_rim(0), H_rim(0);
			vector<Vector3d> rim_data;
			MakeRimData(rim_data, true_node, L);

			if (rim_data.empty())
				continue;

			MakeRadiusHeight(R_rim, H_rim, rim_data);

			for (int i = 0; i < num_node; i++) {
				int node = cycle.nodes[i] - 1;
				RimConstraint(L, problem, loss_rim, s[node], trans[node], &R_rim, &H_rim, w_r, w_h, node);
			}
		}

		ceres::Solver::Options options;
		options.max_num_iterations = ceres_iteration;
		options.minimizer_progress_to_stdout = false;
		options.linear_solver_type = ceres::SPARSE_SCHUR;
		options.function_tolerance = CERES_FUNC_TOL;
		options.num_threads = NUMBER_OF_THREAD;
		ceres::Solver::Summary summary;
		ceres::Solve(options, &problem, &summary);

		//############### Update the transformation matrix to data ###############//
		for (int i = 0; i < num_node; i++) {
			int node = cycle.nodes[i] - 1;
			UpdateTrans(L[node], s[node], trans[node], R, t, R_i, t_i, node);
		}
		shard_A = m_LCS[cycle.edges[0]].shard_y_ - 1;
		shard_B = m_LCS[cycle.edges[0]].shard_x_ - 1;
		Matrix4d T1 = Matrix4d::Identity(), T2 = Matrix4d::Identity();
		for (int j = 0; j < 3; j++) {
			T1.row(j) << R_i[shard_A].row(j), t_i[shard_A][j];
			T2.row(j) << R_i[shard_B].row(j), t_i[shard_B][j];
		}
		Matrix4d T = T1.inverse() * T2;

		bool isfinish = false;
		// If all transformation matries are not chaged then stop the iteration
		if (isConverge(T, 0.1, 2.0)) {
			isfinish = true;
		}
		else {
			cycle.score = 11.0;
			cycle.inlier = 0;
			if (iter == (max_iteration - 1)) {
				isfinish = true;
			}
		}

		if (isfinish) {
			int shard_A = m_LCS[cycle.edges[0]].shard_y_;	// real shard number(i.g. piece 1 is 1)
			int shard_B = m_LCS[cycle.edges[0]].shard_x_;	// shard_x : mov, shard_y : fix
			Corres cor_pair;
			cor_pair.index_A = shard_A, cor_pair.index_B = shard_B;	// make corres index(index the connected nodes)
			BreakLine p_A = L[shard_A - 1], p_B = L[shard_B - 1];
			vector<Corres> cor_conv;
			MakeCor(cor_pair, p_A, p_B, onetoone);	// If you make one to one correspondecne then set onetoone as true
			RejectOutlier(cor_pair, 20, 0.7);
			cor_conv.push_back(cor_pair);
			
			MatchingScore(cycle.score, cor_conv);
			bool inlier_cal = inlierCalculate(cycle.inlier, true_node, cor_conv, L);
			if (!inlier_cal) {
				cycle.score = 11.0;
			}

			break;
		}
	}


	R_i.clear();
	t_i.clear();
	for (int i = 0; i < num_shard; i++) {
		delete[] trans[i];
		delete[] s[i];
	}
	delete[] trans;
	delete[] s;
}

void Registration(vector<BreakLine>& L,
	vector<Matrix3d>& R,
	vector<Vector3d>& t,
	LCSIndex& lcs,
	const vector<bool>& true_node)
{
	int num_shard = L.size();
	vector<Corres> COR;
	vector<Matrix3d> R_i = R;
	vector<Vector3d> t_i = t;
	MatrixXd Table(num_shard, num_shard);
	double* trans = new double[3];
	double* s = new double[3];
	double w_d(1.0), w_n(3.0), w_line(1.0), w_a(0.1), w_r(1.0), w_h(1.0);
	bool pre_cor = true, onetoone = true;
	int max_iteration = 50, ceres_iteration = 100;

	int c_node = lcs.shard_x_;
	int set_node = lcs.shard_y_;
	if (true_node[c_node - 1]) {
		c_node = lcs.shard_y_;
		set_node = lcs.shard_x_;
	}

	// Iterate until R_i and t_i are not changed
	bool point_to_line = false;
	bool axis = false;
	bool rim = false;

	for (int iter = 0; iter < max_iteration; iter++) {
		if (iter > 0) {
			// Turn off the Rim constraint if only one piece has rim
			if (L[c_node - 1].is_seg_rim_ && L[set_node - 1].is_seg_rim_)
				rim = true;

			axis = true;
			point_to_line = true;
		}

		//########## Clear transformation parameters
		for (int i = 0; i < num_shard; i++) {
			for (int j = 0; j < num_shard; j++) {
				Table(i, j) = 0;
			}
		}
		for (int j = 0; j < 3; j++) {
			trans[j] = 0;
			s[j] = 0;
		}
		//############### Make correspondence ###############// 
		// First time make correspondence in general way and then use one to one conditions
		// Because If you use one to one conditions from beginning, then because of small number of correspondences
		// matching results would not good.

		COR.clear();
		int shard_A = lcs.shard_y_;	// real shard number(i.g. piece 1 is 1)
		int shard_B = lcs.shard_x_;	// shard_x : mov, shard_y : fix
		BreakLine p_A = L[shard_A - 1], p_B = L[shard_B - 1];

		// if use pre-correspondence then you need to divide the breakline data
		if (pre_cor) {
			Corres cor_in;
			cor_in.index_A = shard_A, cor_in.index_B = shard_B;	// make corres index(index the connected nodes)
			UsePreCorres(cor_in, L, p_A, p_B, lcs, c_node, true);
			COR.push_back(cor_in);
		}

		else {
			MakeSingleCorres(COR, L, true_node, c_node, onetoone);
		}

		pre_cor = false;		// Pre-correspondences are used at only first time.

		//############### Check correspondence number ###############// 
		for (int i = 0; i < COR.size(); ) {
			if (COR[i].cor.size() < MINIMUM_NUMBER) {
				COR.erase(COR.begin() + i);
			}
			else {
				// Fill out edge table 
				int s_A = COR[i].index_A - 1;
				int s_B = COR[i].index_B - 1;
				Table(s_A, s_B) = 1;
				Table(s_B, s_A) = 1;
				i++;
			}
		}
		if (COR.empty()) {
			lcs.score_ = 11.0;
			lcs.inliner_ = 0;
			break;
		}

		//############### Set nonlinear equation ###############// 
		ceres::Problem problem;
		ceres::LossFunction* loss_dist = new ceres::CauchyLoss(5.0);
		ceres::LossFunction* loss_norm = new ceres::CauchyLoss(2.0);
		ceres::LossFunction* loss_axis = new ceres::CauchyLoss(2.0);
		ceres::LossFunction* loss_rim = new ceres::CauchyLoss(2.0);

		if (point_to_line) {
			P2LConstraintFixed(COR, problem, loss_dist, loss_norm, s, trans, w_line, w_n);
		}
		else {
			P2PConstraintFixed(COR, problem, loss_dist, loss_norm, s, trans, w_d, w_n);
		}

		//######################### Axis consistency ###########################// 
		//const int point_interval = 1;
		if (axis) {
			AxisConsistency(L, problem, loss_axis, s, trans, w_a, c_node - 1);
		}

		//######################### Rim ###########################// 
		//If rim = true : consider the rim constraint.
		double R_rim(0), H_rim(0);
		if (rim) {
			vector<Vector3d> rim_data;
			MakeRimData(rim_data, true_node, L);

			if (rim_data.empty())
				continue;

			MakeRadiusHeight(R_rim, H_rim, rim_data);

			RimConstraint(L, problem, loss_rim, s, trans, &R_rim, &H_rim, w_r, w_h, c_node - 1);
		}

		//############### Solve nonlinear equation ###############//
		if (rim) {
			problem.SetParameterBlockConstant(&R_rim);
			problem.SetParameterBlockConstant(&H_rim);
		}

		ceres::Solver::Options options;
		options.max_num_iterations = ceres_iteration;
		options.minimizer_progress_to_stdout = false;
		options.linear_solver_type = ceres::SPARSE_SCHUR;
		options.function_tolerance = CERES_FUNC_TOL;
		options.num_threads = NUMBER_OF_THREAD;
		ceres::Solver::Summary summary;
		ceres::Solve(options, &problem, &summary);

		//############### Update the transformation matrix to data ###############//
		int count(0);	// For stop condition
		UpdateTrans(L[c_node - 1], s, trans, R, t, R_i, t_i, c_node - 1);

		Matrix4d T = Matrix4d::Identity();
		for (int j = 0; j < 3; j++) {
			T.row(j) << R_i[c_node - 1].row(j), t_i[c_node - 1][j];
		}

		bool isfinish = false;
		if (isConverge(T, 0.1, 2.0)) {
			isfinish = true;
		}
		else {
			lcs.score_ = 11.0;
			lcs.inliner_ = 0;
			if (iter == max_iteration - 1) {
				isfinish = true;
			}
		}

		if (isfinish) {
			vector<Corres> cor_conv;
			MakeSingleCorres(cor_conv, L, true_node, c_node, onetoone);

			MatchingScore(lcs.score_, cor_conv);
			bool inlier_cal = inlierCalculate(lcs.inliner_, true_node, cor_conv, L);

			if (!inlier_cal)
				lcs.score_ = 11.0;

			break;
		}
	}

	R_i.clear();
	t_i.clear();
	delete[] trans;
	delete[] s;
}
void Registration(vector<BreakLine>& L,
	vector<Matrix3d>& R,
	vector<Vector3d>& t,
	LCSIndex& lcs,
	const vector<bool>& true_node,
	const vector<bool>& merge_node)
{
	int num_shard = L.size();
	vector<Corres> COR;
	vector<Matrix3d> R_i = R;
	vector<Vector3d> t_i = t;
	MatrixXd Table(num_shard, num_shard);
	double* trans = new double[3];
	double* s = new double[3];
	double w_d(1.0), w_n(3.0), w_line(1.0), w_a(0.1), w_r(1.0), w_h(1.0);
	bool pre_cor = true, onetoone = true;
	int max_iteration = 50, ceres_iteration = 100;

	int c_node = lcs.shard_x_;
	int set_node = lcs.shard_y_;
	int outside_index;
	if (true_node[c_node - 1]) {
		c_node = lcs.shard_y_;
		set_node = lcs.shard_x_;
	}

	// Iterate until R_i and t_i are not changed
	bool point_to_line = false;
	bool axis = false;
	bool rim = false;

	for (int iter = 0; iter < max_iteration; iter++) {
		if (iter > 0) {
			// Turn off the Rim constraint if only one piece has rim
			int rim_counter = 0;
			bool merge_rim = false, set_rim = false;
			for (int i = 0; i < num_shard; i++) {
				if (merge_node[i] && L[i].is_seg_rim_)
					merge_rim = true;
				else if (true_node[i] && L[i].is_seg_rim_)
					set_rim = true;
			}
			rim = merge_rim & set_rim;

			axis = true;
			point_to_line = true;
		}

		//########## Clear transformation parameters
		for (int i = 0; i < num_shard; i++) {
			for (int j = 0; j < num_shard; j++) {
				Table(i, j) = 0;
			}
		}
		for (int j = 0; j < 3; j++) {
			trans[j] = 0;
			s[j] = 0;
		}
		//############### Make correspondence ###############// 
		// First time make correspondence in general way and then use one to one conditions
		// Because If you use one to one conditions from beginning, then because of small number of correspondences
		// matching results would not good.

		COR.clear();
		int shard_A = lcs.shard_y_;	// real shard number(i.g. piece 1 is 1)
		int shard_B = lcs.shard_x_;	// shard_x : mov, shard_y : fix
		BreakLine p_A = L[shard_A - 1], p_B = L[shard_B - 1];

		// if use pre-correspondence then you need to divide the breakline data
		if (pre_cor) {
			Corres cor_in;
			cor_in.index_A = shard_A, cor_in.index_B = shard_B;	// make corres index(index the connected nodes)
			UsePreCorres(cor_in, L, p_A, p_B, lcs, c_node, true);
			COR.push_back(cor_in);
		}

		else {
			MakeMergeCorres(COR, L, true_node, merge_node, onetoone);
		}

		pre_cor = false;		// Pre-correspondences are used at only first time.

		//############### Check correspondence number ###############// 
		for (int i = 0; i < COR.size(); ) {
			if (COR[i].cor.size() < MINIMUM_NUMBER) {
				COR.erase(COR.begin() + i);
			}
			else {
				// Fill out edge table 
				int s_A = COR[i].index_A - 1;
				int s_B = COR[i].index_B - 1;

				Table(s_A, s_B) = 1;
				Table(s_B, s_A) = 1;
				i++;
			}
		}
		if (COR.empty()) {
			lcs.score_ = 11.0;
			lcs.inliner_ = 0;
			break;
		}

		//############### Set nonlinear equation ###############// 
		ceres::Problem problem;
		ceres::LossFunction* loss_dist = new ceres::CauchyLoss(5.0);
		ceres::LossFunction* loss_norm = new ceres::CauchyLoss(2.0);
		ceres::LossFunction* loss_axis = new ceres::CauchyLoss(2.0);
		ceres::LossFunction* loss_rim = new ceres::CauchyLoss(2.0);

		if (point_to_line) {
			P2LConstraintFixed(COR, problem, loss_dist, loss_norm, s, trans, w_line, w_n);
		}
		else {
			P2PConstraintFixed(COR, problem, loss_dist, loss_norm, s, trans, w_d, w_n);
		}

		//######################### Axis consistency ###########################// 
		//const int point_interval = 1;
		if (axis) {
			//AxisConsistency(L, problem, loss_axis, s, trans, w_a, c_node - 1);
			for (int i = 0; i < num_shard; i++) {
				if (merge_node[i])
					AxisConsistency(L, problem, loss_axis, s, trans, w_a, i);
			}
		}

		//######################### Rim ###########################// 
		//If rim = true : consider the rim constraint.
		double R_rim(0), H_rim(0);
		if (rim) {
			vector<Vector3d> rim_data;
			MakeRimData(rim_data, true_node, L);

			if (rim_data.empty())
				continue;

			MakeRadiusHeight(R_rim, H_rim, rim_data);

			for (int i = 0; i < num_shard; i++) {
				if (merge_node[i] && L[i].is_seg_rim_)
					RimConstraint(L, problem, loss_rim, s, trans, &R_rim, &H_rim, w_r, w_h, i);
			}
		}

		//############### Solve nonlinear equation ###############//
		if (rim) {
			problem.SetParameterBlockConstant(&R_rim);
			problem.SetParameterBlockConstant(&H_rim);
		}

		ceres::Solver::Options options;
		options.max_num_iterations = ceres_iteration;
		options.minimizer_progress_to_stdout = false;
		options.linear_solver_type = ceres::SPARSE_SCHUR;
		options.function_tolerance = CERES_FUNC_TOL;
		options.num_threads = NUMBER_OF_THREAD;
		ceres::Solver::Summary summary;
		ceres::Solve(options, &problem, &summary);

		//############### Update the transformation matrix to data ###############//
		for (int i = 0; i < num_shard; i++) {
			double s_dummy[9];
			ceres::AngleAxisToRotationMatrix(s, s_dummy);
			Matrix3d R_m(s_dummy);
			Vector3d t_m = Vector3d(trans[0], trans[1], trans[2]);

			if (i == c_node - 1)
				UpdateTrans(L[i], s, trans, R, t, R_i, t_i, i);
			else if (merge_node[i])
				EdgeLineMove(L[i], R_m, t_m);
		}

		Matrix4d T = Matrix4d::Identity();
		for (int j = 0; j < 3; j++) {
			T.row(j) << R_i[c_node - 1].row(j), t_i[c_node - 1][j];
		}

		bool isfinish = false;
		if (isConverge(T, 0.1, 2.0)) {
			isfinish = true;
		}
		else {
			lcs.score_ = 11.0;
			lcs.inliner_ = 0;
			if (iter == max_iteration - 1) {
				isfinish = true;
			}
		}
		if (isfinish) {
			vector<Corres> cor_conv;
			vector<bool> c_node_only(num_shard, false);
			c_node_only[c_node - 1] = true;
			MakeMergeCorres(cor_conv, L, true_node, c_node_only, onetoone);
			MatchingScore(lcs.score_, cor_conv);
			bool inlier_cal = inlierCalculate(lcs.inliner_, true_node, cor_conv, L);
			if (!inlier_cal)
				lcs.score_ = 11.0;

			break;
		}
	}

	R_i.clear();
	t_i.clear();
	delete[] trans;
	delete[] s;
}

void IcpIncGraphAxis(
	vector<Geom>& shard,
	vector<Matrix3d>& R,
	vector<Vector3d>& t,
	RankingSubgraph& graph,
	vector<RankingSubgraph>& pregraph,
	int& inlier,
	bool rim,
	bool axis)
{
	int num_shard = shard.size();
	vector<Corres> COR;
	vector<Matrix3d> R_i = R;
	vector<Vector3d> t_i = t;
	vector<LCSIndex> edges = graph.EdgeOut();
	MatrixXd Table(num_shard, num_shard);
	MatrixXd dummy_table(num_shard, num_shard);
	double** trans = new double* [num_shard];	// trans : transfortation
	double** s = new double* [num_shard];		// s : rotaion representer
	double w_d(1.0), w_n(3.0), w_line(1.0);
	double w_r(1.0), w_h(1.0);
	double w_a(0.1);
	bool cor_onetoone = true, point_to_line = true;
	int max_iteration = 100, ceres_iteration = 100;

	for (int i = 0; i < num_shard; ++i) {
		trans[i] = new double[3];
		s[i] = new double[3];
	}
	for (int i = 0; i < num_shard; i++) {
		for (int j = 0; j < num_shard; j++) {
			graph.simple_graph_(i, j) = 0;
			Table(i, j) = 0;
		}
	}

	{
		// Turn off the Rim constraint if only one piece has rim
		int rim_counter = 0;
		//if (shard[c_node - 1].edge_line_.is_seg_rim_) rim_counter++;
		for (int i = 0; i < num_shard; i++) {
			if ((graph.node_[i]) && (shard[i].edge_line_.is_seg_rim_)) {
				rim_counter++;
			}
		}
		if (rim_counter < 2) rim = false;
	}
	// Iterate until R_i and t_i are not changed
	for (int iter = 0; iter < max_iteration; iter++) {
		//############### Clear Parameters ###############// 
		for (int i = 0; i < num_shard; i++) {
			for (int j = 0; j < 3; j++) {
				trans[i][j] = 0;
				s[i][j] = 0;
			}
			R_i[i] = Matrix3d::Identity();
			t_i[i] = Vector3d(0, 0, 0);
			for (int k = 0; k < num_shard; k++) {
				graph.simple_graph_(i, k) = 0;
				Table(i, k) = 0;
			}
		}

		//############### Make correspondence ###############// 
		COR.clear();
		MakeMultiCorres(COR, shard, graph.node_, dummy_table, dummy_table, cor_onetoone);

		//############### Set nonlinear equation ###############// 
		ceres::Problem problem;
		ceres::LossFunction* loss_dist = new ceres::CauchyLoss(5.0);	// 5
		ceres::LossFunction* loss_norm = new ceres::CauchyLoss(2.0);	// 2
		ceres::LossFunction* loss_axis = new ceres::CauchyLoss(2.0);	// 1.5
		ceres::LossFunction* loss_rim = new ceres::CauchyLoss(2.0);		// 5

		int num_cor_points(0);
		//######################### correspondence distance ###########################// 
		if (point_to_line) {
			P2LConstraint(COR, problem, loss_dist, loss_norm, s, trans, w_line, w_n);
		}
		else if (!point_to_line) {
			P2PConstraint(COR, problem, loss_dist, loss_norm, s, trans, w_d, w_n);
		}

		//######################### Axis consistency ###########################// 
		//const int point_interval = 1;
		if (axis) {
			for (int i = 0; i < num_shard; i++) {
				if (graph.node_[i]) {
					AxisConsistency(shard, problem, loss_axis, s[i], trans[i], w_a, i);
				}
			}
		}

		//######################### Rim condition ###########################// 
		// If rim = true : consider the rim constraint.
		if (rim) {
			double R_rim(0), H_rim(0), num_rim(0);
			vector<Vector3d> rim_data;
			MakeRimData(rim_data, graph.node_, shard);

			if (rim_data.empty())
				continue;
			MakeRadiusHeight(R_rim, H_rim, rim_data);

			for (int i = 0; i < num_shard; i++) {
				if ((graph.node_[i]) && (shard[i].edge_line_.is_seg_rim_)) {
					RimConstraint(shard, problem, loss_rim, s[i], trans[i], &R_rim, &H_rim, w_r, w_h, i);
				}
			}
		}
		//############### Solve nonlinear equation ###############//
		if (pregraph.size() != 0) {
			//cout << "Constant ceres parameter " << endl;
			for (int i = 0; i < num_shard; i++) {
				if (pregraph.back().node_[i]) {
					problem.SetParameterBlockConstant(s[i]);
					problem.SetParameterBlockConstant(trans[i]);
				}
			}
		}

		ceres::Solver::Options options;
		options.max_num_iterations = ceres_iteration;
		options.minimizer_progress_to_stdout = false;
		options.linear_solver_type = ceres::SPARSE_SCHUR;
		options.function_tolerance = CERES_FUNC_TOL;
		options.num_threads = NUMBER_OF_THREAD;
		ceres::Solver::Summary summary;
		ceres::Solve(options, &problem, &summary);

		//############### Update the transformation matrix to data ###############//
		for (int i = 0; i < num_shard; i++) {
			if (graph.node_[i]) {
				UpdateTrans(shard[i], s[i], trans[i], R, t, R_i, t_i, i);
			}
		}
		int num_of_corres = COR.size();
		int count(0);
		for (int i = 0; i < num_of_corres; i++) {
			int shard_A = COR[i].index_A - 1;
			int shard_B = COR[i].index_B - 1;
			Matrix4d T1 = Matrix4d::Identity(), T2 = Matrix4d::Identity();
			for (int j = 0; j < 3; j++) {
				T1.row(j) << R_i[shard_A].row(j), t_i[shard_A][j];
				T2.row(j) << R_i[shard_B].row(j), t_i[shard_B][j];
			}
			Matrix4d T = T1.inverse() * T2;
			if (isConverge(T, 0.05, 1.0))
				count++;
		}

		if ((count == num_of_corres))
		{
			vector<Corres> cor_conv;
			MakeMultiCorres(cor_conv, 
				shard, 
				graph.node_, 
				graph.simple_graph_, 
				Table, 
				cor_onetoone);

			if (!isEdgeRemoved(Table, edges)) {
				bool inlier_cal = inlierCalculate(inlier, graph.node_, cor_conv, shard);
				if (inlier_cal) {
					FillMatchedPoints(cor_conv, graph.matched_index_);
				}
				else
					inlier = -1;
			}
			else {
				inlier = -1;
			}
			break;
		}
		else {
			inlier = -1;
			if (iter == max_iteration - 1) {
				cout << "Not converge : Sherd alignment " << endl;
			}
		}
	}

	R_i.clear();
	t_i.clear();
	for (int i = 0; i < num_shard; i++) {
		delete[] trans[i];
		delete[] s[i];
	}
	delete[] trans;
	delete[] s;
}

void IcpFine(
	vector<Geom>& shard,
	vector<Matrix3d>& R,
	vector<Vector3d>& t,
	vector<bool>& true_node,
	MatrixXd& graph)
{
	// Initialize transformation matrix
	int num_shard = shard.size();
	vector<Matrix3d> R_i = R;
	vector<Vector3d> t_i = t;
	vector<Corres> COR_line, COR_sur, COR_frac;
	MatrixXd dummy_table(num_shard, num_shard);
	double** trans = new double* [num_shard];	// trans : transfortation
	double** s = new double* [num_shard];		// s : rotaion representer
	double w_d(1.5), w_n(1.5), w_line(1.0);
	double w_r(0.5), w_h(0.5);
	double w_a(1.0);
	bool cor_onetoone = true,  rim = true, axis = true;
	int max_iteration = 100, ceres_iteration = 100;

	for (int i = 0; i < num_shard; ++i) {
		trans[i] = new double[3];
		s[i] = new double[3];
	}
	for (int i = 0; i < num_shard; i++) {
		for (int j = 0; j < num_shard; j++) {
			graph(i, j) = 0;
			dummy_table(i, j) = 0;
		}
	}

	int rim_counter = 0;
	for (int i = 0; i < num_shard; i++) {
		if ((true_node[i]) && (shard[i].edge_line_.is_seg_rim_)) {
			rim_counter++;
		}
	}
	if (rim_counter < 2) rim = false;

	for (int iter = 0; iter < max_iteration; iter++) {
		//############### Clear Parameters ###############// 
		for (int i = 0; i < num_shard; i++) {
			for (int j = 0; j < 3; j++) {
				trans[i][j] = 0;
				s[i][j] = 0;
			}
			R_i[i] = Matrix3d::Identity();
			t_i[i] = Vector3d(0, 0, 0);
			for (int k = 0; k < num_shard; k++) {
				graph(i, k) = 0;
				dummy_table(i, k) = 0;
			}
		}

		//############### Make correspondence ###############// 
		COR_line.clear(), COR_sur.clear(), COR_frac.clear();
		MakeCorWithSur(COR_line, COR_sur, COR_frac, shard, true_node, dummy_table, false);

		if (COR_sur.empty() || COR_frac.empty())
			break;

		//############### Set nonlinear equation ###############// 
		ceres::Problem problem;
		ceres::LossFunction* loss_dist = new ceres::CauchyLoss(5.0);	
		ceres::LossFunction* loss_norm = new ceres::CauchyLoss(2.0);	
		ceres::LossFunction* loss_axis = new ceres::CauchyLoss(2.0);	
		ceres::LossFunction* loss_rim = new ceres::CauchyLoss(2.0);		

		//######################### correspondence distance ###########################// 
		P2PConstraint(COR_frac, problem, loss_dist, loss_norm, s, trans, w_d, w_n);
		SurConstraint(COR_sur, problem, loss_dist, s, trans, 3 * w_d);

		//######################### Axis consistency ###########################// 
		//const int point_interval = 1;
		if (axis) {
			for (int i = 0; i < num_shard; i++) {
				if (true_node[i]) {
					AxisConsistency(shard, problem, loss_axis, s[i], trans[i], w_a, i);
				}
			}
		}

		//######################### Rim condition ###########################// 
		// If rim = true : consider the rim constraint.
		if (rim) {
			double R_rim(0), H_rim(0), num_rim(0);
			vector<Vector3d> rim_data;
			MakeRimData(rim_data, true_node, shard);

			if (rim_data.empty())
				continue;
			MakeRadiusHeight(R_rim, H_rim, rim_data);

			for (int i = 0; i < num_shard; i++) {
				if ((true_node[i]) && (shard[i].edge_line_.is_seg_rim_)) {
					RimConstraint(shard, problem, loss_rim, s[i], trans[i], &R_rim, &H_rim, w_r, w_h, i);
				}
			}
		}

		//############### Solve nonlinear equation ###############//
		ceres::Solver::Options options;
		options.max_num_iterations = ceres_iteration;
		options.minimizer_progress_to_stdout = false;
		options.linear_solver_type = ceres::SPARSE_SCHUR;
		options.function_tolerance = CERES_FUNC_TOL;
		options.num_threads = NUMBER_OF_THREAD;
		ceres::Solver::Summary summary;
		ceres::Solve(options, &problem, &summary);

		//############### Update the transformation matrix to data ###############//
		for (int i = 0; i < num_shard; i++) {
			if (true_node[i]) {
				double s_dummy[9];
				ceres::AngleAxisToRotationMatrix(s[i], s_dummy);
				Matrix3d R_dummy(s_dummy);
				R_i[i] = R_dummy;
				t_i[i] = Vector3d(trans[i][0], trans[i][1], trans[i][2]);

				shard[i].Move(R_i[i], t_i[i], true);
				R[i] = R_i[i] * R[i];
				t[i] = t_i[i] + R_i[i] * t[i];
			}
		}
		int num_of_corres = COR_line.size();
		int count(0);
		for (int i = 0; i < num_of_corres; i++) {
			int shard_A = COR_line[i].index_A - 1;
			int shard_B = COR_line[i].index_B - 1;
			Matrix4d T1 = Matrix4d::Identity(), T2 = Matrix4d::Identity();
			for (int j = 0; j < 3; j++) {
				T1.row(j) << R_i[shard_A].row(j), t_i[shard_A][j];
				T2.row(j) << R_i[shard_B].row(j), t_i[shard_B][j];
			}
			Matrix4d T = T1.inverse() * T2;
			if (isConverge(T, 0.02, 0.5))
				count++;
		}
		if (count == num_of_corres) {
			vector<Corres> cor_conv;
			MakeMultiCorres(cor_conv,
				shard,
				true_node,
				graph,
				graph,
				false);
			cout << "#################### Fine reconstruction is converge ####################" << endl;
			iter = max_iteration;
			break;
		}
	}


	R_i.clear();
	t_i.clear();
	for (int i = 0; i < num_shard; i++) {
		delete[] trans[i];
		delete[] s[i];
	}
	delete[] trans;
	delete[] s;
}