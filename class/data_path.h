#pragma once
#include <string>
//#ifndef _DATA_PATH_H_
//#define _DATA_PATH_H_

#ifndef _DATA_PATH_H_
#define _DATA_PATH_H_

#define POT_A
//#define POT_B
//#define POT_C
//#define POT_D
// #define POT_E
//#define POT_F
//#define POT_G
//#define POT_H
//#define POT_I
//#define POT_J
//#define POT_A_B_C
//#define POT_D_E
//#define POT_E_I
//#define POT_C_J
//#define POT_A_B_F_G_H
//#define POT_A_B_C_D_E
//#define POT_All
//#define BB_Bwl_1 			// Bowl B1, B2, B3
//#define BB_Plt_1			// Plate P1, P2, P3
//#define BB_Vse_1			// Vase V1, V2, V3

using namespace std;

string data_type = "SfS_pp/"; // Or BreakingBad/Objects
//string pot_type = "Other/";

string path = "/Dataset/" + data_type;
//string path = "C:/Pottery/Pottery Data/" + pot_type;



//############################################ Breakingbad Plate_1 ############################################//
#ifdef BB_Plt_1
#define SHARD_NUMBER 12
#define NUM_MIXED_SHERD 1

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Plt_A_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Plt_A_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Plt_A_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Plt_A_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Plt_A_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Plt_A_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Plt_A_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Plt_A_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Plt_A_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Plt_A_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Plt_A_Piece_11_Breakline_0.pcd",
	path + "Breaklines/Plt_A_Piece_12_Breakline_0.pcd"
	//path + "Breaklines/Plt_C_Piece_13_Breakline_0.pcd"

};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Plt_A_Piece_01_Mesh.obj",
	path + "Mesh/Plt_A_Piece_02_Mesh.obj",
	path + "Mesh/Plt_A_Piece_03_Mesh.obj",
	path + "Mesh/Plt_A_Piece_04_Mesh.obj",
	path + "Mesh/Plt_A_Piece_05_Mesh.obj",
	path + "Mesh/Plt_A_Piece_06_Mesh.obj",
	path + "Mesh/Plt_A_Piece_07_Mesh.obj",
	path + "Mesh/Plt_A_Piece_08_Mesh.obj",
	path + "Mesh/Plt_A_Piece_09_Mesh.obj",
	path + "Mesh/Plt_A_Piece_10_Mesh.obj",
	path + "Mesh/Plt_A_Piece_11_Mesh.obj",
	path + "Mesh/Plt_A_Piece_12_Mesh.obj"
	//path + "Mesh/Plt_C_Piece_13_Mesh.obj"

};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Plt_A_Piece_01_Axis.xyz",
	path + "Axes/Plt_A_Piece_02_Axis.xyz",
	path + "Axes/Plt_A_Piece_03_Axis.xyz",
	path + "Axes/Plt_A_Piece_04_Axis.xyz",
	path + "Axes/Plt_A_Piece_05_Axis.xyz",
	path + "Axes/Plt_A_Piece_06_Axis.xyz",
	path + "Axes/Plt_A_Piece_07_Axis.xyz",
	path + "Axes/Plt_A_Piece_08_Axis.xyz",
	path + "Axes/Plt_A_Piece_09_Axis.xyz",
	path + "Axes/Plt_A_Piece_10_Axis.xyz",
	path + "Axes/Plt_A_Piece_11_Axis.xyz",
	path + "Axes/Plt_A_Piece_12_Axis.xyz"
	//path + "Axes/Plt_C_Piece_13_Axis.xyz"

};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Plt_A_Piece_01_Surface_0.xyz",
	path + "Surfaces/Plt_A_Piece_02_Surface_0.xyz",
	path + "Surfaces/Plt_A_Piece_03_Surface_0.xyz",
	path + "Surfaces/Plt_A_Piece_04_Surface_0.xyz",
	path + "Surfaces/Plt_A_Piece_05_Surface_0.xyz",
	path + "Surfaces/Plt_A_Piece_06_Surface_0.xyz",
	path + "Surfaces/Plt_A_Piece_07_Surface_0.xyz",
	path + "Surfaces/Plt_A_Piece_08_Surface_0.xyz",
	path + "Surfaces/Plt_A_Piece_09_Surface_0.xyz",
	path + "Surfaces/Plt_A_Piece_10_Surface_0.xyz",
	path + "Surfaces/Plt_A_Piece_11_Surface_0.xyz",
	path + "Surfaces/Plt_A_Piece_12_Surface_0.xyz"
	//path + "Surfaces/Plt_C_Piece_13_Surface_0.xyz"

};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Plt_A_Piece_01_Surface_1.xyz",
	path + "Surfaces/Plt_A_Piece_02_Surface_1.xyz",
	path + "Surfaces/Plt_A_Piece_03_Surface_1.xyz",
	path + "Surfaces/Plt_A_Piece_04_Surface_1.xyz",
	path + "Surfaces/Plt_A_Piece_05_Surface_1.xyz",
	path + "Surfaces/Plt_A_Piece_06_Surface_1.xyz",
	path + "Surfaces/Plt_A_Piece_07_Surface_1.xyz",
	path + "Surfaces/Plt_A_Piece_08_Surface_1.xyz",
	path + "Surfaces/Plt_A_Piece_09_Surface_1.xyz",
	path + "Surfaces/Plt_A_Piece_10_Surface_1.xyz",
	path + "Surfaces/Plt_A_Piece_11_Surface_1.xyz",
	path + "Surfaces/Plt_A_Piece_12_Surface_1.xyz"
	//path + "Surfaces/Plt_C_Piece_13_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Plt_A_Piece_01_Surface_F.xyz",
	path + "Surfaces/Plt_A_Piece_02_Surface_F.xyz",
	path + "Surfaces/Plt_A_Piece_03_Surface_F.xyz",
	path + "Surfaces/Plt_A_Piece_04_Surface_F.xyz",
	path + "Surfaces/Plt_A_Piece_05_Surface_F.xyz",
	path + "Surfaces/Plt_A_Piece_06_Surface_F.xyz",
	path + "Surfaces/Plt_A_Piece_07_Surface_F.xyz",
	path + "Surfaces/Plt_A_Piece_08_Surface_F.xyz",
	path + "Surfaces/Plt_A_Piece_09_Surface_F.xyz",
	path + "Surfaces/Plt_A_Piece_10_Surface_F.xyz",
	path + "Surfaces/Plt_A_Piece_11_Surface_F.xyz",
	path + "Surfaces/Plt_A_Piece_12_Surface_F.xyz"
	//path + "Surfaces/Plt_C_Piece_13_Surface_F.xyz"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Plt_A_Piece_1_T.txt",
	path + "Ground Truth/Plt_A_Piece_2_T.txt",
	path + "Ground Truth/Plt_A_Piece_3_T.txt",
	path + "Ground Truth/Plt_A_Piece_4_T.txt",
	path + "Ground Truth/Plt_A_Piece_5_T.txt",
	path + "Ground Truth/Plt_A_Piece_6_T.txt",
	path + "Ground Truth/Plt_A_Piece_7_T.txt",
	path + "Ground Truth/Plt_A_Piece_8_T.txt",
	path + "Ground Truth/Plt_A_Piece_9_T.txt",
	path + "Ground Truth/Plt_A_Piece_10_T.txt",
	path + "Ground Truth/Plt_A_Piece_11_T.txt",
	path + "Ground Truth/Plt_A_Piece_12_T.txt"
	// path + "Ground Truth/Plt_C_Piece_13_T.txt",
};

string gt_graph_path[1] = {
	path + "Ground Truth/Plt_A_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1 
	true,   // 2 
	true,	// 3 
	true,   // 4 
	true,   // 5 
	true,   // 6 
	true,   // 7 
	true,   // 8 
	true,   // 9 
	true,   // 10 
	true,   // 11
	true   // 12
	// true,   // 13
};
#endif

//############################################ Breakingbad Plate_2 ############################################//
#ifdef BB_Plt_2
#define SHARD_NUMBER 11
#define NUM_MIXED_SHERD 1

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Plt_B_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Plt_B_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Plt_B_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Plt_B_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Plt_B_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Plt_B_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Plt_B_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Plt_B_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Plt_B_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Plt_B_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Plt_B_Piece_11_Breakline_0.pcd"

};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Plt_B_Piece_01_Mesh.obj",
	path + "Mesh/Plt_B_Piece_02_Mesh.obj",
	path + "Mesh/Plt_B_Piece_03_Mesh.obj",
	path + "Mesh/Plt_B_Piece_04_Mesh.obj",
	path + "Mesh/Plt_B_Piece_05_Mesh.obj",
	path + "Mesh/Plt_B_Piece_06_Mesh.obj",
	path + "Mesh/Plt_B_Piece_07_Mesh.obj",
	path + "Mesh/Plt_B_Piece_08_Mesh.obj",
	path + "Mesh/Plt_B_Piece_09_Mesh.obj",
	path + "Mesh/Plt_B_Piece_10_Mesh.obj",
	path + "Mesh/Plt_B_Piece_11_Mesh.obj"

};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Plt_B_Piece_01_Axis.xyz",
	path + "Axes/Plt_B_Piece_02_Axis.xyz",
	path + "Axes/Plt_B_Piece_03_Axis.xyz",
	path + "Axes/Plt_B_Piece_04_Axis.xyz",
	path + "Axes/Plt_B_Piece_05_Axis.xyz",
	path + "Axes/Plt_B_Piece_06_Axis.xyz",
	path + "Axes/Plt_B_Piece_07_Axis.xyz",
	path + "Axes/Plt_B_Piece_08_Axis.xyz",
	path + "Axes/Plt_B_Piece_09_Axis.xyz",
	path + "Axes/Plt_B_Piece_10_Axis.xyz",
	path + "Axes/Plt_B_Piece_11_Axis.xyz"

};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Plt_B_Piece_01_Surface_0.xyz",
	path + "Surfaces/Plt_B_Piece_02_Surface_0.xyz",
	path + "Surfaces/Plt_B_Piece_03_Surface_0.xyz",
	path + "Surfaces/Plt_B_Piece_04_Surface_0.xyz",
	path + "Surfaces/Plt_B_Piece_05_Surface_0.xyz",
	path + "Surfaces/Plt_B_Piece_06_Surface_0.xyz",
	path + "Surfaces/Plt_B_Piece_07_Surface_0.xyz",
	path + "Surfaces/Plt_B_Piece_08_Surface_0.xyz",
	path + "Surfaces/Plt_B_Piece_09_Surface_0.xyz",
	path + "Surfaces/Plt_B_Piece_10_Surface_0.xyz",
	path + "Surfaces/Plt_B_Piece_11_Surface_0.xyz"

};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Plt_B_Piece_01_Surface_1.xyz",
	path + "Surfaces/Plt_B_Piece_02_Surface_1.xyz",
	path + "Surfaces/Plt_B_Piece_03_Surface_1.xyz",
	path + "Surfaces/Plt_B_Piece_04_Surface_1.xyz",
	path + "Surfaces/Plt_B_Piece_05_Surface_1.xyz",
	path + "Surfaces/Plt_B_Piece_06_Surface_1.xyz",
	path + "Surfaces/Plt_B_Piece_07_Surface_1.xyz",
	path + "Surfaces/Plt_B_Piece_08_Surface_1.xyz",
	path + "Surfaces/Plt_B_Piece_09_Surface_1.xyz",
	path + "Surfaces/Plt_B_Piece_10_Surface_1.xyz",
	path + "Surfaces/Plt_B_Piece_11_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Plt_B_Piece_01_Surface_F.xyz",
	path + "Surfaces/Plt_B_Piece_02_Surface_F.xyz",
	path + "Surfaces/Plt_B_Piece_03_Surface_F.xyz",
	path + "Surfaces/Plt_B_Piece_04_Surface_F.xyz",
	path + "Surfaces/Plt_B_Piece_05_Surface_F.xyz",
	path + "Surfaces/Plt_B_Piece_06_Surface_F.xyz",
	path + "Surfaces/Plt_B_Piece_07_Surface_F.xyz",
	path + "Surfaces/Plt_B_Piece_08_Surface_F.xyz",
	path + "Surfaces/Plt_B_Piece_09_Surface_F.xyz",
	path + "Surfaces/Plt_B_Piece_10_Surface_F.xyz",
	path + "Surfaces/Plt_B_Piece_11_Surface_F.xyz"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Plt_B_Piece_1_T.txt",
	path + "Ground Truth/Plt_B_Piece_2_T.txt",
	path + "Ground Truth/Plt_B_Piece_3_T.txt",
	path + "Ground Truth/Plt_B_Piece_4_T.txt",
	path + "Ground Truth/Plt_B_Piece_5_T.txt",
	path + "Ground Truth/Plt_B_Piece_6_T.txt",
	path + "Ground Truth/Plt_B_Piece_7_T.txt",
	path + "Ground Truth/Plt_B_Piece_8_T.txt",
	path + "Ground Truth/Plt_B_Piece_9_T.txt",
	path + "Ground Truth/Plt_B_Piece_10_T.txt",
	path + "Ground Truth/Plt_B_Piece_11_T.txt"
};

string gt_graph_path[1] = {
	path + "Ground Truth/Plt_B_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1 
	true,   // 2 
	true,	// 3 
	true,   // 4 
	true,   // 5 
	true,   // 6 
	true,   // 7 
	true,   // 8 
	true,   // 9 
	true,   // 10 
	true    // 11
};
#endif

//############################################ Breakingbad Plate_3 ############################################//
#ifdef BB_Plt_3
#define SHARD_NUMBER 7
#define NUM_MIXED_SHERD 1

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Plt_C_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Plt_C_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Plt_C_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Plt_C_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Plt_C_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Plt_C_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Plt_C_Piece_07_Breakline_0.pcd"

};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Plt_C_Piece_01_Mesh.obj",
	path + "Mesh/Plt_C_Piece_02_Mesh.obj",
	path + "Mesh/Plt_C_Piece_03_Mesh.obj",
	path + "Mesh/Plt_C_Piece_04_Mesh.obj",
	path + "Mesh/Plt_C_Piece_05_Mesh.obj",
	path + "Mesh/Plt_C_Piece_06_Mesh.obj",
	path + "Mesh/Plt_C_Piece_07_Mesh.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Plt_C_Piece_01_Axis.xyz",
	path + "Axes/Plt_C_Piece_02_Axis.xyz",
	path + "Axes/Plt_C_Piece_03_Axis.xyz",
	path + "Axes/Plt_C_Piece_04_Axis.xyz",
	path + "Axes/Plt_C_Piece_05_Axis.xyz",
	path + "Axes/Plt_C_Piece_06_Axis.xyz",
	path + "Axes/Plt_C_Piece_07_Axis.xyz"

};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Plt_C_Piece_01_Surface_0.xyz",
	path + "Surfaces/Plt_C_Piece_02_Surface_0.xyz",
	path + "Surfaces/Plt_C_Piece_03_Surface_0.xyz",
	path + "Surfaces/Plt_C_Piece_04_Surface_0.xyz",
	path + "Surfaces/Plt_C_Piece_05_Surface_0.xyz",
	path + "Surfaces/Plt_C_Piece_06_Surface_0.xyz",
	path + "Surfaces/Plt_C_Piece_07_Surface_0.xyz"

};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Plt_C_Piece_01_Surface_1.xyz",
	path + "Surfaces/Plt_C_Piece_02_Surface_1.xyz",
	path + "Surfaces/Plt_C_Piece_03_Surface_1.xyz",
	path + "Surfaces/Plt_C_Piece_04_Surface_1.xyz",
	path + "Surfaces/Plt_C_Piece_05_Surface_1.xyz",
	path + "Surfaces/Plt_C_Piece_06_Surface_1.xyz",
	path + "Surfaces/Plt_C_Piece_07_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Plt_C_Piece_01_Surface_F.xyz",
	path + "Surfaces/Plt_C_Piece_02_Surface_F.xyz",
	path + "Surfaces/Plt_C_Piece_03_Surface_F.xyz",
	path + "Surfaces/Plt_C_Piece_04_Surface_F.xyz",
	path + "Surfaces/Plt_C_Piece_05_Surface_F.xyz",
	path + "Surfaces/Plt_C_Piece_06_Surface_F.xyz",
	path + "Surfaces/Plt_C_Piece_07_Surface_F.xyz"
};


string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Plt_C_Piece_1_T.txt",
	path + "Ground Truth/Plt_C_Piece_2_T.txt",
	path + "Ground Truth/Plt_C_Piece_3_T.txt",
	path + "Ground Truth/Plt_C_Piece_4_T.txt",
	path + "Ground Truth/Plt_C_Piece_5_T.txt",
	path + "Ground Truth/Plt_C_Piece_6_T.txt",
	path + "Ground Truth/Plt_C_Piece_7_T.txt"
};

string gt_graph_path[1] = {
	path + "Ground Truth/Plt_C_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1 
	true,   // 2 
	true,	// 3 
	true,   // 4 
	true,   // 5 
	true,   // 6 
	true   // 7 
};
#endif


//############################################ Breakingbad Bowl_1 ############################################//
#ifdef BB_Bwl_1
#define SHARD_NUMBER 10
#define NUM_MIXED_SHERD 1

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Bwl_A_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Bwl_A_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Bwl_A_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Bwl_A_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Bwl_A_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Bwl_A_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Bwl_A_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Bwl_A_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Bwl_A_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Bwl_A_Piece_10_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Bwl_A_Piece_01_Mesh.obj",
	path + "Mesh/Bwl_A_Piece_02_Mesh.obj",
	path + "Mesh/Bwl_A_Piece_03_Mesh.obj",
	path + "Mesh/Bwl_A_Piece_04_Mesh.obj",
	path + "Mesh/Bwl_A_Piece_05_Mesh.obj",
	path + "Mesh/Bwl_A_Piece_06_Mesh.obj",
	path + "Mesh/Bwl_A_Piece_07_Mesh.obj",
	path + "Mesh/Bwl_A_Piece_08_Mesh.obj",
	path + "Mesh/Bwl_A_Piece_09_Mesh.obj",
	path + "Mesh/Bwl_A_Piece_10_Mesh.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Bwl_A_Piece_01_Axis.xyz",
	path + "Axes/Bwl_A_Piece_02_Axis.xyz",
	path + "Axes/Bwl_A_Piece_03_Axis.xyz",
	path + "Axes/Bwl_A_Piece_04_Axis.xyz",
	path + "Axes/Bwl_A_Piece_05_Axis.xyz",
	path + "Axes/Bwl_A_Piece_06_Axis.xyz",
	path + "Axes/Bwl_A_Piece_07_Axis.xyz",
	path + "Axes/Bwl_A_Piece_08_Axis.xyz",
	path + "Axes/Bwl_A_Piece_09_Axis.xyz",
	path + "Axes/Bwl_A_Piece_10_Axis.xyz"

};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Bwl_A_Piece_01_Surface_0.xyz",
	path + "Surfaces/Bwl_A_Piece_02_Surface_0.xyz",
	path + "Surfaces/Bwl_A_Piece_03_Surface_0.xyz",
	path + "Surfaces/Bwl_A_Piece_04_Surface_0.xyz",
	path + "Surfaces/Bwl_A_Piece_05_Surface_0.xyz",
	path + "Surfaces/Bwl_A_Piece_06_Surface_0.xyz",
	path + "Surfaces/Bwl_A_Piece_07_Surface_0.xyz",
	path + "Surfaces/Bwl_A_Piece_08_Surface_0.xyz",
	path + "Surfaces/Bwl_A_Piece_09_Surface_0.xyz",
	path + "Surfaces/Bwl_A_Piece_10_Surface_0.xyz"

};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Bwl_A_Piece_01_Surface_1.xyz",
	path + "Surfaces/Bwl_A_Piece_02_Surface_1.xyz",
	path + "Surfaces/Bwl_A_Piece_03_Surface_1.xyz",
	path + "Surfaces/Bwl_A_Piece_04_Surface_1.xyz",
	path + "Surfaces/Bwl_A_Piece_05_Surface_1.xyz",
	path + "Surfaces/Bwl_A_Piece_06_Surface_1.xyz",
	path + "Surfaces/Bwl_A_Piece_07_Surface_1.xyz",
	path + "Surfaces/Bwl_A_Piece_08_Surface_1.xyz",
	path + "Surfaces/Bwl_A_Piece_09_Surface_1.xyz",
	path + "Surfaces/Bwl_A_Piece_10_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Bwl_A_Piece_01_Surface_F.xyz",
	path + "Surfaces/Bwl_A_Piece_02_Surface_F.xyz",
	path + "Surfaces/Bwl_A_Piece_03_Surface_F.xyz",
	path + "Surfaces/Bwl_A_Piece_04_Surface_F.xyz",
	path + "Surfaces/Bwl_A_Piece_05_Surface_F.xyz",
	path + "Surfaces/Bwl_A_Piece_06_Surface_F.xyz",
	path + "Surfaces/Bwl_A_Piece_07_Surface_F.xyz",
	path + "Surfaces/Bwl_A_Piece_08_Surface_F.xyz",
	path + "Surfaces/Bwl_A_Piece_09_Surface_F.xyz",
	path + "Surfaces/Bwl_A_Piece_10_Surface_F.xyz"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Bwl_A_Piece_1_T.txt",
	path + "Ground Truth/Bwl_A_Piece_2_T.txt",
	path + "Ground Truth/Bwl_A_Piece_3_T.txt",
	path + "Ground Truth/Bwl_A_Piece_4_T.txt",
	path + "Ground Truth/Bwl_A_Piece_5_T.txt",
	path + "Ground Truth/Bwl_A_Piece_6_T.txt",
	path + "Ground Truth/Bwl_A_Piece_7_T.txt",
	path + "Ground Truth/Bwl_A_Piece_8_T.txt",
	path + "Ground Truth/Bwl_A_Piece_9_T.txt",
	path + "Ground Truth/Bwl_A_Piece_10_T.txt"
};

string gt_graph_path[1] = {
	path + "Ground Truth/Bwl_A_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1  Base
	true,   // 2 
	true,	// 3 
	true,   // 4 
	true,   // 5  Base
	true,   // 6 
	true,   // 7 
	true,   // 8 
	true,   // 9 
	true  // 10 

};
#endif


//############################################ Breakingbad Bowl_2 ############################################//
#ifdef BB_Bwl_2
#define SHARD_NUMBER 11
#define NUM_MIXED_SHERD 1

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Bwl_B_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_11_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Bwl_B_Piece_01_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_02_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_03_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_04_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_05_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_06_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_07_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_08_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_09_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_10_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_11_Mesh.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Bwl_B_Piece_01_Axis.xyz",
	path + "Axes/Bwl_B_Piece_02_Axis.xyz",
	path + "Axes/Bwl_B_Piece_03_Axis.xyz",
	path + "Axes/Bwl_B_Piece_04_Axis.xyz",
	path + "Axes/Bwl_B_Piece_05_Axis.xyz",
	path + "Axes/Bwl_B_Piece_06_Axis.xyz",
	path + "Axes/Bwl_B_Piece_07_Axis.xyz",
	path + "Axes/Bwl_B_Piece_08_Axis.xyz",
	path + "Axes/Bwl_B_Piece_09_Axis.xyz",
	path + "Axes/Bwl_B_Piece_10_Axis.xyz",
	path + "Axes/Bwl_B_Piece_11_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Bwl_B_Piece_01_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_02_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_03_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_04_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_05_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_06_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_07_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_08_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_09_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_10_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_11_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Bwl_B_Piece_01_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_02_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_03_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_04_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_05_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_06_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_07_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_08_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_09_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_10_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_11_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Bwl_B_Piece_01_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_02_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_03_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_04_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_05_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_06_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_07_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_08_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_09_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_10_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_11_Surface_F.xyz"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Bwl_B_Piece_1_T.txt",
	path + "Ground Truth/Bwl_B_Piece_2_T.txt",
	path + "Ground Truth/Bwl_B_Piece_3_T.txt",
	path + "Ground Truth/Bwl_B_Piece_4_T.txt",
	path + "Ground Truth/Bwl_B_Piece_5_T.txt",
	path + "Ground Truth/Bwl_B_Piece_6_T.txt",
	path + "Ground Truth/Bwl_B_Piece_7_T.txt",
	path + "Ground Truth/Bwl_B_Piece_8_T.txt",
	path + "Ground Truth/Bwl_B_Piece_9_T.txt",
	path + "Ground Truth/Bwl_B_Piece_10_T.txt",
	path + "Ground Truth/Bwl_B_Piece_11_T.txt"
};

string gt_graph_path[1] = {
	path + "Ground Truth/Bwl_B_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1 
	true,   // 2 
	true,	// 3 
	true,   // 4 
	true,   // 5 
	true,   // 6 
	true,   // 7 
	true,   // 8 
	true,   // 9 
	true,   // 10
	true    // 11
};
#endif

//############################################ Breakingbad Bowl_3 ############################################//
#ifdef BB_Bwl_3
#define SHARD_NUMBER 6
#define NUM_MIXED_SHERD 1

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Bwl_C_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Bwl_C_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Bwl_C_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Bwl_C_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Bwl_C_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Bwl_C_Piece_06_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Bwl_C_Piece_01_Mesh.obj",
	path + "Mesh/Bwl_C_Piece_02_Mesh.obj",
	path + "Mesh/Bwl_C_Piece_03_Mesh.obj",
	path + "Mesh/Bwl_C_Piece_04_Mesh.obj",
	path + "Mesh/Bwl_C_Piece_05_Mesh.obj",
	path + "Mesh/Bwl_C_Piece_06_Mesh.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Bwl_C_Piece_01_Axis.xyz",
	path + "Axes/Bwl_C_Piece_02_Axis.xyz",
	path + "Axes/Bwl_C_Piece_03_Axis.xyz",
	path + "Axes/Bwl_C_Piece_04_Axis.xyz",
	path + "Axes/Bwl_C_Piece_05_Axis.xyz",
	path + "Axes/Bwl_C_Piece_06_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Bwl_C_Piece_01_Surface_0.xyz",
	path + "Surfaces/Bwl_C_Piece_02_Surface_0.xyz",
	path + "Surfaces/Bwl_C_Piece_03_Surface_0.xyz",
	path + "Surfaces/Bwl_C_Piece_04_Surface_0.xyz",
	path + "Surfaces/Bwl_C_Piece_05_Surface_0.xyz",
	path + "Surfaces/Bwl_C_Piece_06_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Bwl_C_Piece_01_Surface_1.xyz",
	path + "Surfaces/Bwl_C_Piece_02_Surface_1.xyz",
	path + "Surfaces/Bwl_C_Piece_03_Surface_1.xyz",
	path + "Surfaces/Bwl_C_Piece_04_Surface_1.xyz",
	path + "Surfaces/Bwl_C_Piece_05_Surface_1.xyz",
	path + "Surfaces/Bwl_C_Piece_06_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Bwl_C_Piece_01_Surface_F.xyz",
	path + "Surfaces/Bwl_C_Piece_02_Surface_F.xyz",
	path + "Surfaces/Bwl_C_Piece_03_Surface_F.xyz",
	path + "Surfaces/Bwl_C_Piece_04_Surface_F.xyz",
	path + "Surfaces/Bwl_C_Piece_05_Surface_F.xyz",
	path + "Surfaces/Bwl_C_Piece_06_Surface_F.xyz"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Bwl_C_Piece_1_T.txt",
	path + "Ground Truth/Bwl_C_Piece_2_T.txt",
	path + "Ground Truth/Bwl_C_Piece_3_T.txt",
	path + "Ground Truth/Bwl_C_Piece_4_T.txt",
	path + "Ground Truth/Bwl_C_Piece_5_T.txt",
	path + "Ground Truth/Bwl_C_Piece_6_T.txt"
};

string gt_graph_path[1] = {
	path + "Ground Truth/Bwl_C_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1 
	true,   // 2 
	true,	// 3 
	true,   // 4 
	true,   // 5 
	true    // 6
};
#endif

//############################################ Breakingbad Vase_1 ############################################//
#ifdef BB_Vse_1
#define SHARD_NUMBER 8
#define NUM_MIXED_SHERD 1

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Vse_A_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Vse_A_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Vse_A_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Vse_A_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Vse_A_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Vse_A_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Vse_A_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Vse_A_Piece_08_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Vse_A_Piece_01_Mesh.obj",
	path + "Mesh/Vse_A_Piece_02_Mesh.obj",
	path + "Mesh/Vse_A_Piece_03_Mesh.obj",
	path + "Mesh/Vse_A_Piece_04_Mesh.obj",
	path + "Mesh/Vse_A_Piece_05_Mesh.obj",
	path + "Mesh/Vse_A_Piece_06_Mesh.obj",
	path + "Mesh/Vse_A_Piece_07_Mesh.obj",
	path + "Mesh/Vse_A_Piece_08_Mesh.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Vse_A_Piece_01_Axis.xyz",
	path + "Axes/Vse_A_Piece_02_Axis.xyz",
	path + "Axes/Vse_A_Piece_03_Axis.xyz",
	path + "Axes/Vse_A_Piece_04_Axis.xyz",
	path + "Axes/Vse_A_Piece_05_Axis.xyz",
	path + "Axes/Vse_A_Piece_06_Axis.xyz",
	path + "Axes/Vse_A_Piece_07_Axis.xyz",
	path + "Axes/Vse_A_Piece_08_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Vse_A_Piece_01_Surface_0.xyz",
	path + "Surfaces/Vse_A_Piece_02_Surface_0.xyz",
	path + "Surfaces/Vse_A_Piece_03_Surface_0.xyz",
	path + "Surfaces/Vse_A_Piece_04_Surface_0.xyz",
	path + "Surfaces/Vse_A_Piece_05_Surface_0.xyz",
	path + "Surfaces/Vse_A_Piece_06_Surface_0.xyz",
	path + "Surfaces/Vse_A_Piece_07_Surface_0.xyz",
	path + "Surfaces/Vse_A_Piece_08_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Vse_A_Piece_01_Surface_1.xyz",
	path + "Surfaces/Vse_A_Piece_02_Surface_1.xyz",
	path + "Surfaces/Vse_A_Piece_03_Surface_1.xyz",
	path + "Surfaces/Vse_A_Piece_04_Surface_1.xyz",
	path + "Surfaces/Vse_A_Piece_05_Surface_1.xyz",
	path + "Surfaces/Vse_A_Piece_06_Surface_1.xyz",
	path + "Surfaces/Vse_A_Piece_07_Surface_1.xyz",
	path + "Surfaces/Vse_A_Piece_08_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Vse_A_Piece_01_Surface_F.xyz",
	path + "Surfaces/Vse_A_Piece_02_Surface_F.xyz",
	path + "Surfaces/Vse_A_Piece_03_Surface_F.xyz",
	path + "Surfaces/Vse_A_Piece_04_Surface_F.xyz",
	path + "Surfaces/Vse_A_Piece_05_Surface_F.xyz",
	path + "Surfaces/Vse_A_Piece_06_Surface_F.xyz",
	path + "Surfaces/Vse_A_Piece_07_Surface_F.xyz",
	path + "Surfaces/Vse_A_Piece_08_Surface_F.xyz"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Vse_A_Piece_1_T.txt",
	path + "Ground Truth/Vse_A_Piece_2_T.txt",
	path + "Ground Truth/Vse_A_Piece_3_T.txt",
	path + "Ground Truth/Vse_A_Piece_4_T.txt",
	path + "Ground Truth/Vse_A_Piece_5_T.txt",
	path + "Ground Truth/Vse_A_Piece_6_T.txt",
	path + "Ground Truth/Vse_A_Piece_7_T.txt",
	path + "Ground Truth/Vse_A_Piece_8_T.txt"
};

string gt_graph_path[1] = {
	path + "Ground Truth/Vse_A_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,   // 1
	true,   // 2
	true,   // 3
	true,   // 4
	true,   // 5
	true,   // 6
	true,   // 7
	true    // 8
};
#endif

//############################################ Breakingbad Vase_2 ############################################//
#ifdef BB_Vse_2
#define SHARD_NUMBER 9
#define NUM_MIXED_SHERD 1

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Vse_B_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Vse_B_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Vse_B_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Vse_B_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Vse_B_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Vse_B_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Vse_B_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Vse_B_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Vse_B_Piece_09_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Vse_B_Piece_01_Mesh.obj",
	path + "Mesh/Vse_B_Piece_02_Mesh.obj",
	path + "Mesh/Vse_B_Piece_03_Mesh.obj",
	path + "Mesh/Vse_B_Piece_04_Mesh.obj",
	path + "Mesh/Vse_B_Piece_05_Mesh.obj",
	path + "Mesh/Vse_B_Piece_06_Mesh.obj",
	path + "Mesh/Vse_B_Piece_07_Mesh.obj",
	path + "Mesh/Vse_B_Piece_08_Mesh.obj",
	path + "Mesh/Vse_B_Piece_09_Mesh.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Vse_B_Piece_01_Axis.xyz",
	path + "Axes/Vse_B_Piece_02_Axis.xyz",
	path + "Axes/Vse_B_Piece_03_Axis.xyz",
	path + "Axes/Vse_B_Piece_04_Axis.xyz",
	path + "Axes/Vse_B_Piece_05_Axis.xyz",
	path + "Axes/Vse_B_Piece_06_Axis.xyz",
	path + "Axes/Vse_B_Piece_07_Axis.xyz",
	path + "Axes/Vse_B_Piece_08_Axis.xyz",
	path + "Axes/Vse_B_Piece_09_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Vse_B_Piece_01_Surface_0.xyz",
	path + "Surfaces/Vse_B_Piece_02_Surface_0.xyz",
	path + "Surfaces/Vse_B_Piece_03_Surface_0.xyz",
	path + "Surfaces/Vse_B_Piece_04_Surface_0.xyz",
	path + "Surfaces/Vse_B_Piece_05_Surface_0.xyz",
	path + "Surfaces/Vse_B_Piece_06_Surface_0.xyz",
	path + "Surfaces/Vse_B_Piece_07_Surface_0.xyz",
	path + "Surfaces/Vse_B_Piece_08_Surface_0.xyz",
	path + "Surfaces/Vse_B_Piece_09_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Vse_B_Piece_01_Surface_1.xyz",
	path + "Surfaces/Vse_B_Piece_02_Surface_1.xyz",
	path + "Surfaces/Vse_B_Piece_03_Surface_1.xyz",
	path + "Surfaces/Vse_B_Piece_04_Surface_1.xyz",
	path + "Surfaces/Vse_B_Piece_05_Surface_1.xyz",
	path + "Surfaces/Vse_B_Piece_06_Surface_1.xyz",
	path + "Surfaces/Vse_B_Piece_07_Surface_1.xyz",
	path + "Surfaces/Vse_B_Piece_08_Surface_1.xyz",
	path + "Surfaces/Vse_B_Piece_09_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Vse_B_Piece_01_Surface_F.xyz",
	path + "Surfaces/Vse_B_Piece_02_Surface_F.xyz",
	path + "Surfaces/Vse_B_Piece_03_Surface_F.xyz",
	path + "Surfaces/Vse_B_Piece_04_Surface_F.xyz",
	path + "Surfaces/Vse_B_Piece_05_Surface_F.xyz",
	path + "Surfaces/Vse_B_Piece_06_Surface_F.xyz",
	path + "Surfaces/Vse_B_Piece_07_Surface_F.xyz",
	path + "Surfaces/Vse_B_Piece_08_Surface_F.xyz",
	path + "Surfaces/Vse_B_Piece_09_Surface_F.xyz"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Vse_B_Piece_1_T.txt",
	path + "Ground Truth/Vse_B_Piece_2_T.txt",
	path + "Ground Truth/Vse_B_Piece_3_T.txt",
	path + "Ground Truth/Vse_B_Piece_4_T.txt",
	path + "Ground Truth/Vse_B_Piece_5_T.txt",
	path + "Ground Truth/Vse_B_Piece_6_T.txt",
	path + "Ground Truth/Vse_B_Piece_7_T.txt",
	path + "Ground Truth/Vse_B_Piece_8_T.txt",
	path + "Ground Truth/Vse_B_Piece_9_T.txt"
};

string gt_graph_path[1] = {
	path + "Ground Truth/Vse_B_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,   // 1
	true,   // 2
	true,   // 3
	true,   // 4
	true,   // 5
	true,   // 6
	true,   // 7
	true,   // 8
	true    // 9
};
#endif

//############################################ Breakingbad Vase_3 ############################################//
#ifdef BB_Vse_3
#define SHARD_NUMBER 9
#define NUM_MIXED_SHERD 1

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Vse_C_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Vse_C_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Vse_C_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Vse_C_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Vse_C_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Vse_C_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Vse_C_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Vse_C_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Vse_C_Piece_09_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Vse_C_Piece_01_Mesh.obj",
	path + "Mesh/Vse_C_Piece_02_Mesh.obj",
	path + "Mesh/Vse_C_Piece_03_Mesh.obj",
	path + "Mesh/Vse_C_Piece_04_Mesh.obj",
	path + "Mesh/Vse_C_Piece_05_Mesh.obj",
	path + "Mesh/Vse_C_Piece_06_Mesh.obj",
	path + "Mesh/Vse_C_Piece_07_Mesh.obj",
	path + "Mesh/Vse_C_Piece_08_Mesh.obj",
	path + "Mesh/Vse_C_Piece_09_Mesh.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Vse_C_Piece_01_Axis.xyz",
	path + "Axes/Vse_C_Piece_02_Axis.xyz",
	path + "Axes/Vse_C_Piece_03_Axis.xyz",
	path + "Axes/Vse_C_Piece_04_Axis.xyz",
	path + "Axes/Vse_C_Piece_05_Axis.xyz",
	path + "Axes/Vse_C_Piece_06_Axis.xyz",
	path + "Axes/Vse_C_Piece_07_Axis.xyz",
	path + "Axes/Vse_C_Piece_08_Axis.xyz",
	path + "Axes/Vse_C_Piece_09_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Vse_C_Piece_01_Surface_0.xyz",
	path + "Surfaces/Vse_C_Piece_02_Surface_0.xyz",
	path + "Surfaces/Vse_C_Piece_03_Surface_0.xyz",
	path + "Surfaces/Vse_C_Piece_04_Surface_0.xyz",
	path + "Surfaces/Vse_C_Piece_05_Surface_0.xyz",
	path + "Surfaces/Vse_C_Piece_06_Surface_0.xyz",
	path + "Surfaces/Vse_C_Piece_07_Surface_0.xyz",
	path + "Surfaces/Vse_C_Piece_08_Surface_0.xyz",
	path + "Surfaces/Vse_C_Piece_09_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Vse_C_Piece_01_Surface_1.xyz",
	path + "Surfaces/Vse_C_Piece_02_Surface_1.xyz",
	path + "Surfaces/Vse_C_Piece_03_Surface_1.xyz",
	path + "Surfaces/Vse_C_Piece_04_Surface_1.xyz",
	path + "Surfaces/Vse_C_Piece_05_Surface_1.xyz",
	path + "Surfaces/Vse_C_Piece_06_Surface_1.xyz",
	path + "Surfaces/Vse_C_Piece_07_Surface_1.xyz",
	path + "Surfaces/Vse_C_Piece_08_Surface_1.xyz",
	path + "Surfaces/Vse_C_Piece_09_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Vse_C_Piece_01_Surface_F.xyz",
	path + "Surfaces/Vse_C_Piece_02_Surface_F.xyz",
	path + "Surfaces/Vse_C_Piece_03_Surface_F.xyz",
	path + "Surfaces/Vse_C_Piece_04_Surface_F.xyz",
	path + "Surfaces/Vse_C_Piece_05_Surface_F.xyz",
	path + "Surfaces/Vse_C_Piece_06_Surface_F.xyz",
	path + "Surfaces/Vse_C_Piece_07_Surface_F.xyz",
	path + "Surfaces/Vse_C_Piece_08_Surface_F.xyz",
	path + "Surfaces/Vse_C_Piece_09_Surface_F.xyz"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Vse_C_Piece_1_T.txt",
	path + "Ground Truth/Vse_C_Piece_2_T.txt",
	path + "Ground Truth/Vse_C_Piece_3_T.txt",
	path + "Ground Truth/Vse_C_Piece_4_T.txt",
	path + "Ground Truth/Vse_C_Piece_5_T.txt",
	path + "Ground Truth/Vse_C_Piece_6_T.txt",
	path + "Ground Truth/Vse_C_Piece_7_T.txt",
	path + "Ground Truth/Vse_C_Piece_8_T.txt",
	path + "Ground Truth/Vse_C_Piece_9_T.txt"
};

string gt_graph_path[1] = {
	path + "Ground Truth/Vse_C_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,   // 1
	true,   // 2
	true,   // 3
	true,   // 4
	true,   // 5
	true,   // 6
	true,   // 7
	true,   // 8
	true    // 9
};
#endif

//############################################ Breakingbad Vase_Mix (1 + 3) ############################################//
#ifdef BB_Vse_Mix
#define SHARD_NUMBER 17
#define NUM_MIXED_SHERD 2

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Vse_A_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Vse_A_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Vse_A_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Vse_A_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Vse_A_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Vse_A_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Vse_A_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Vse_A_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Vse_C_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Vse_C_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Vse_C_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Vse_C_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Vse_C_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Vse_C_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Vse_C_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Vse_C_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Vse_C_Piece_09_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Vse_A_Piece_01_Mesh.obj",
	path + "Mesh/Vse_A_Piece_02_Mesh.obj",
	path + "Mesh/Vse_A_Piece_03_Mesh.obj",
	path + "Mesh/Vse_A_Piece_04_Mesh.obj",
	path + "Mesh/Vse_A_Piece_05_Mesh.obj",
	path + "Mesh/Vse_A_Piece_06_Mesh.obj",
	path + "Mesh/Vse_A_Piece_07_Mesh.obj",
	path + "Mesh/Vse_A_Piece_08_Mesh.obj",
	path + "Mesh/Vse_C_Piece_01_Mesh.obj",
	path + "Mesh/Vse_C_Piece_02_Mesh.obj",
	path + "Mesh/Vse_C_Piece_03_Mesh.obj",
	path + "Mesh/Vse_C_Piece_04_Mesh.obj",
	path + "Mesh/Vse_C_Piece_05_Mesh.obj",
	path + "Mesh/Vse_C_Piece_06_Mesh.obj",
	path + "Mesh/Vse_C_Piece_07_Mesh.obj",
	path + "Mesh/Vse_C_Piece_08_Mesh.obj",
	path + "Mesh/Vse_C_Piece_09_Mesh.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Vse_A_Piece_01_Axis.xyz",
	path + "Axes/Vse_A_Piece_02_Axis.xyz",
	path + "Axes/Vse_A_Piece_03_Axis.xyz",
	path + "Axes/Vse_A_Piece_04_Axis.xyz",
	path + "Axes/Vse_A_Piece_05_Axis.xyz",
	path + "Axes/Vse_A_Piece_06_Axis.xyz",
	path + "Axes/Vse_A_Piece_07_Axis.xyz",
	path + "Axes/Vse_A_Piece_08_Axis.xyz",
	path + "Axes/Vse_C_Piece_01_Axis.xyz",
	path + "Axes/Vse_C_Piece_02_Axis.xyz",
	path + "Axes/Vse_C_Piece_03_Axis.xyz",
	path + "Axes/Vse_C_Piece_04_Axis.xyz",
	path + "Axes/Vse_C_Piece_05_Axis.xyz",
	path + "Axes/Vse_C_Piece_06_Axis.xyz",
	path + "Axes/Vse_C_Piece_07_Axis.xyz",
	path + "Axes/Vse_C_Piece_08_Axis.xyz",
	path + "Axes/Vse_C_Piece_09_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Vse_A_Piece_01_Surface_0.xyz",
	path + "Surfaces/Vse_A_Piece_02_Surface_0.xyz",
	path + "Surfaces/Vse_A_Piece_03_Surface_0.xyz",
	path + "Surfaces/Vse_A_Piece_04_Surface_0.xyz",
	path + "Surfaces/Vse_A_Piece_05_Surface_0.xyz",
	path + "Surfaces/Vse_A_Piece_06_Surface_0.xyz",
	path + "Surfaces/Vse_A_Piece_07_Surface_0.xyz",
	path + "Surfaces/Vse_A_Piece_08_Surface_0.xyz",
	path + "Surfaces/Vse_C_Piece_01_Surface_0.xyz",
	path + "Surfaces/Vse_C_Piece_02_Surface_0.xyz",
	path + "Surfaces/Vse_C_Piece_03_Surface_0.xyz",
	path + "Surfaces/Vse_C_Piece_04_Surface_0.xyz",
	path + "Surfaces/Vse_C_Piece_05_Surface_0.xyz",
	path + "Surfaces/Vse_C_Piece_06_Surface_0.xyz",
	path + "Surfaces/Vse_C_Piece_07_Surface_0.xyz",
	path + "Surfaces/Vse_C_Piece_08_Surface_0.xyz",
	path + "Surfaces/Vse_C_Piece_09_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Vse_A_Piece_01_Surface_1.xyz",
	path + "Surfaces/Vse_A_Piece_02_Surface_1.xyz",
	path + "Surfaces/Vse_A_Piece_03_Surface_1.xyz",
	path + "Surfaces/Vse_A_Piece_04_Surface_1.xyz",
	path + "Surfaces/Vse_A_Piece_05_Surface_1.xyz",
	path + "Surfaces/Vse_A_Piece_06_Surface_1.xyz",
	path + "Surfaces/Vse_A_Piece_07_Surface_1.xyz",
	path + "Surfaces/Vse_A_Piece_08_Surface_1.xyz",
	path + "Surfaces/Vse_C_Piece_01_Surface_1.xyz",
	path + "Surfaces/Vse_C_Piece_02_Surface_1.xyz",
	path + "Surfaces/Vse_C_Piece_03_Surface_1.xyz",
	path + "Surfaces/Vse_C_Piece_04_Surface_1.xyz",
	path + "Surfaces/Vse_C_Piece_05_Surface_1.xyz",
	path + "Surfaces/Vse_C_Piece_06_Surface_1.xyz",
	path + "Surfaces/Vse_C_Piece_07_Surface_1.xyz",
	path + "Surfaces/Vse_C_Piece_08_Surface_1.xyz",
	path + "Surfaces/Vse_C_Piece_09_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Vse_A_Piece_01_Surface_F.xyz",
	path + "Surfaces/Vse_A_Piece_02_Surface_F.xyz",
	path + "Surfaces/Vse_A_Piece_03_Surface_F.xyz",
	path + "Surfaces/Vse_A_Piece_04_Surface_F.xyz",
	path + "Surfaces/Vse_A_Piece_05_Surface_F.xyz",
	path + "Surfaces/Vse_A_Piece_06_Surface_F.xyz",
	path + "Surfaces/Vse_A_Piece_07_Surface_F.xyz",
	path + "Surfaces/Vse_A_Piece_08_Surface_F.xyz",
	path + "Surfaces/Vse_C_Piece_01_Surface_F.xyz",
	path + "Surfaces/Vse_C_Piece_02_Surface_F.xyz",
	path + "Surfaces/Vse_C_Piece_03_Surface_F.xyz",
	path + "Surfaces/Vse_C_Piece_04_Surface_F.xyz",
	path + "Surfaces/Vse_C_Piece_05_Surface_F.xyz",
	path + "Surfaces/Vse_C_Piece_06_Surface_F.xyz",
	path + "Surfaces/Vse_C_Piece_07_Surface_F.xyz",
	path + "Surfaces/Vse_C_Piece_08_Surface_F.xyz",
	path + "Surfaces/Vse_C_Piece_09_Surface_F.xyz"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Vse_A_Piece_1_T.txt",
	path + "Ground Truth/Vse_A_Piece_2_T.txt",
	path + "Ground Truth/Vse_A_Piece_3_T.txt",
	path + "Ground Truth/Vse_A_Piece_4_T.txt",
	path + "Ground Truth/Vse_A_Piece_5_T.txt",
	path + "Ground Truth/Vse_A_Piece_6_T.txt",
	path + "Ground Truth/Vse_A_Piece_7_T.txt",
	path + "Ground Truth/Vse_A_Piece_8_T.txt",
	path + "Ground Truth/Vse_C_Piece_1_T.txt",
	path + "Ground Truth/Vse_C_Piece_2_T.txt",
	path + "Ground Truth/Vse_C_Piece_3_T.txt",
	path + "Ground Truth/Vse_C_Piece_4_T.txt",
	path + "Ground Truth/Vse_C_Piece_5_T.txt",
	path + "Ground Truth/Vse_C_Piece_6_T.txt",
	path + "Ground Truth/Vse_C_Piece_7_T.txt",
	path + "Ground Truth/Vse_C_Piece_8_T.txt",
	path + "Ground Truth/Vse_C_Piece_9_T.txt"
};

string gt_graph_path[2] = {
	path + "Ground Truth/Vse_A_simple_graph.txt",
	path + "Ground Truth/Vse_C_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,   // 1
	true,   // 2
	true,   // 3
	true,   // 4
	true,   // 5
	true,   // 6
	true,   // 7
	true,   // 8
	true,   // 1
	true,   // 2
	true,   // 3
	true,   // 4
	true,   // 5
	true,   // 6
	true,   // 7
	true,   // 8
	true    // 9
};
#endif

//############################################ Breakingbad Bowl_Mix (2 + 3) ############################################//
#ifdef BB_Bwl_Mix
#define SHARD_NUMBER 17
#define NUM_MIXED_SHERD 2

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Bwl_B_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Bwl_B_Piece_11_Breakline_0.pcd",
	path + "Breaklines/Bwl_C_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Bwl_C_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Bwl_C_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Bwl_C_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Bwl_C_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Bwl_C_Piece_06_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Bwl_B_Piece_01_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_02_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_03_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_04_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_05_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_06_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_07_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_08_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_09_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_10_Mesh.obj",
	path + "Mesh/Bwl_B_Piece_11_Mesh.obj",
	path + "Mesh/Bwl_C_Piece_01_Mesh.obj",
	path + "Mesh/Bwl_C_Piece_02_Mesh.obj",
	path + "Mesh/Bwl_C_Piece_03_Mesh.obj",
	path + "Mesh/Bwl_C_Piece_04_Mesh.obj",
	path + "Mesh/Bwl_C_Piece_05_Mesh.obj",
	path + "Mesh/Bwl_C_Piece_06_Mesh.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Bwl_B_Piece_01_Axis.xyz",
	path + "Axes/Bwl_B_Piece_02_Axis.xyz",
	path + "Axes/Bwl_B_Piece_03_Axis.xyz",
	path + "Axes/Bwl_B_Piece_04_Axis.xyz",
	path + "Axes/Bwl_B_Piece_05_Axis.xyz",
	path + "Axes/Bwl_B_Piece_06_Axis.xyz",
	path + "Axes/Bwl_B_Piece_07_Axis.xyz",
	path + "Axes/Bwl_B_Piece_08_Axis.xyz",
	path + "Axes/Bwl_B_Piece_09_Axis.xyz",
	path + "Axes/Bwl_B_Piece_10_Axis.xyz",
	path + "Axes/Bwl_B_Piece_11_Axis.xyz",
	path + "Axes/Bwl_C_Piece_01_Axis.xyz",
	path + "Axes/Bwl_C_Piece_02_Axis.xyz",
	path + "Axes/Bwl_C_Piece_03_Axis.xyz",
	path + "Axes/Bwl_C_Piece_04_Axis.xyz",
	path + "Axes/Bwl_C_Piece_05_Axis.xyz",
	path + "Axes/Bwl_C_Piece_06_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Bwl_B_Piece_01_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_02_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_03_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_04_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_05_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_06_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_07_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_08_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_09_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_10_Surface_0.xyz",
	path + "Surfaces/Bwl_B_Piece_11_Surface_0.xyz",
	path + "Surfaces/Bwl_C_Piece_01_Surface_0.xyz",
	path + "Surfaces/Bwl_C_Piece_02_Surface_0.xyz",
	path + "Surfaces/Bwl_C_Piece_03_Surface_0.xyz",
	path + "Surfaces/Bwl_C_Piece_04_Surface_0.xyz",
	path + "Surfaces/Bwl_C_Piece_05_Surface_0.xyz",
	path + "Surfaces/Bwl_C_Piece_06_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Bwl_B_Piece_01_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_02_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_03_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_04_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_05_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_06_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_07_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_08_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_09_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_10_Surface_1.xyz",
	path + "Surfaces/Bwl_B_Piece_11_Surface_1.xyz",
	path + "Surfaces/Bwl_C_Piece_01_Surface_1.xyz",
	path + "Surfaces/Bwl_C_Piece_02_Surface_1.xyz",
	path + "Surfaces/Bwl_C_Piece_03_Surface_1.xyz",
	path + "Surfaces/Bwl_C_Piece_04_Surface_1.xyz",
	path + "Surfaces/Bwl_C_Piece_05_Surface_1.xyz",
	path + "Surfaces/Bwl_C_Piece_06_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Bwl_B_Piece_01_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_02_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_03_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_04_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_05_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_06_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_07_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_08_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_09_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_10_Surface_F.xyz",
	path + "Surfaces/Bwl_B_Piece_11_Surface_F.xyz",
	path + "Surfaces/Bwl_C_Piece_01_Surface_F.xyz",
	path + "Surfaces/Bwl_C_Piece_02_Surface_F.xyz",
	path + "Surfaces/Bwl_C_Piece_03_Surface_F.xyz",
	path + "Surfaces/Bwl_C_Piece_04_Surface_F.xyz",
	path + "Surfaces/Bwl_C_Piece_05_Surface_F.xyz",
	path + "Surfaces/Bwl_C_Piece_06_Surface_F.xyz"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Bwl_B_Piece_1_T.txt",
	path + "Ground Truth/Bwl_B_Piece_2_T.txt",
	path + "Ground Truth/Bwl_B_Piece_3_T.txt",
	path + "Ground Truth/Bwl_B_Piece_4_T.txt",
	path + "Ground Truth/Bwl_B_Piece_5_T.txt",
	path + "Ground Truth/Bwl_B_Piece_6_T.txt",
	path + "Ground Truth/Bwl_B_Piece_7_T.txt",
	path + "Ground Truth/Bwl_B_Piece_8_T.txt",
	path + "Ground Truth/Bwl_B_Piece_9_T.txt",
	path + "Ground Truth/Bwl_B_Piece_10_T.txt",
	path + "Ground Truth/Bwl_B_Piece_11_T.txt",
	path + "Ground Truth/Bwl_C_Piece_1_T.txt",
	path + "Ground Truth/Bwl_C_Piece_2_T.txt",
	path + "Ground Truth/Bwl_C_Piece_3_T.txt",
	path + "Ground Truth/Bwl_C_Piece_4_T.txt",
	path + "Ground Truth/Bwl_C_Piece_5_T.txt",
	path + "Ground Truth/Bwl_C_Piece_6_T.txt"
};

string gt_graph_path[2] = {
	path + "Ground Truth/Bwl_B_simple_graph.txt",
	path + "Ground Truth/Bwl_C_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1 
	true,   // 2 
	true,	// 3 
	true,   // 4 
	true,   // 5 
	true,   // 6 
	true,   // 7 
	true,   // 8 
	true,   // 9 
	true,   // 10
	true,    // 11
	true,	// 1 
	true,   // 2 
	true,	// 3 
	true,   // 4 
	true,   // 5 
	true,   // 6
};
#endif


//############################################ ICCV Pottery A ############################################//
#ifdef POT_A
#define SHARD_NUMBER 8
#define NUM_MIXED_SHERD 1

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Pot_A_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_08_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Pot_A_Piece_01_Mesh.obj",
	path + "Mesh/Pot_A_Piece_02_Mesh.obj",
	path + "Mesh/Pot_A_Piece_03_Mesh.obj",
	path + "Mesh/Pot_A_Piece_04_Mesh.obj",
	path + "Mesh/Pot_A_Piece_05_Mesh.obj",
	path + "Mesh/Pot_A_Piece_06_Mesh.obj",
	path + "Mesh/Pot_A_Piece_07_Mesh.obj",
	path + "Mesh/Pot_A_Piece_08_Mesh.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Pot_A_Piece_01_Axis.xyz",
	path + "Axes/Pot_A_Piece_02_Axis.xyz",
	path + "Axes/Pot_A_Piece_03_Axis.xyz",
	path + "Axes/Pot_A_Piece_04_Axis.xyz",
	path + "Axes/Pot_A_Piece_05_Axis.xyz",
	path + "Axes/Pot_A_Piece_06_Axis.xyz",
	path + "Axes/Pot_A_Piece_07_Axis.xyz",
	path + "Axes/Pot_A_Piece_08_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Pot_A_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_08_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Pot_A_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_08_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Pot_A_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_08_Surface_F.pcd"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Pot_A_Piece_1_T.txt",
	path + "Ground Truth/Pot_A_Piece_2_T.txt",
	path + "Ground Truth/Pot_A_Piece_3_T.txt",
	path + "Ground Truth/Pot_A_Piece_4_T.txt",
	path + "Ground Truth/Pot_A_Piece_5_T.txt",
	path + "Ground Truth/Pot_A_Piece_6_T.txt",
	path + "Ground Truth/Pot_A_Piece_7_T.txt",
	path + "Ground Truth/Pot_A_Piece_8_T.txt"
};

string gt_graph_path[1] = {
	path + "Ground Truth/Pot_A_simple_graph.txt"
};


bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1 
	true,   // 2 
	true,	// 3 
	true,   // 4 
	true,   // 5 
	true,   // 6 
	true,   // 7 
	true,   // 8 
};
#endif

//############################################ ICCV Pottery B ############################################//
#ifdef POT_B
#define SHARD_NUMBER 9
#define NUM_MIXED_SHERD 1

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Pot_B_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_09_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Pot_B_Piece_01_Mesh.obj",
	path + "Mesh/Pot_B_Piece_02_Mesh.obj",
	path + "Mesh/Pot_B_Piece_03_Mesh.obj",
	path + "Mesh/Pot_B_Piece_04_Mesh.obj",
	path + "Mesh/Pot_B_Piece_05_Mesh.obj",
	path + "Mesh/Pot_B_Piece_06_Mesh.obj",
	path + "Mesh/Pot_B_Piece_07_Mesh.obj",
	path + "Mesh/Pot_B_Piece_08_Mesh.obj",
	path + "Mesh/Pot_B_Piece_09_Mesh.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Pot_B_Piece_01_Axis.xyz",
	path + "Axes/Pot_B_Piece_02_Axis.xyz",
	path + "Axes/Pot_B_Piece_03_Axis.xyz",
	path + "Axes/Pot_B_Piece_04_Axis.xyz",
	path + "Axes/Pot_B_Piece_05_Axis.xyz",
	path + "Axes/Pot_B_Piece_06_Axis.xyz",
	path + "Axes/Pot_B_Piece_07_Axis.xyz",
	path + "Axes/Pot_B_Piece_08_Axis.xyz",
	path + "Axes/Pot_B_Piece_09_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Pot_B_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_09_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Pot_B_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_09_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Pot_B_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_09_Surface_F.pcd"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Pot_B_Piece_1_T.txt",
	path + "Ground Truth/Pot_B_Piece_2_T.txt",
	path + "Ground Truth/Pot_B_Piece_3_T.txt",
	path + "Ground Truth/Pot_B_Piece_4_T.txt",
	path + "Ground Truth/Pot_B_Piece_5_T.txt",
	path + "Ground Truth/Pot_B_Piece_6_T.txt",
	path + "Ground Truth/Pot_B_Piece_7_T.txt",
	path + "Ground Truth/Pot_B_Piece_8_T.txt",
	path + "Ground Truth/Pot_B_Piece_9_T.txt"
};

string gt_graph_path[1] = {
	path + "Ground Truth/Pot_B_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1
	true,	// 2
	true,	// 3
	true,	// 4
	true,	// 5
	true,	// 6
	true,	// 7
	true,	// 8
	true	// 9
};
#endif

//############################################ ICCV Pottery C ############################################//
#ifdef POT_C
#define SHARD_NUMBER 4
#define NUM_MIXED_SHERD 1

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Pot_C_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_C_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_C_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_C_Piece_04_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Pot_C_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_C_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_C_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_C_Piece_04_Mesh_DS.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Pot_C_Piece_01_Axis.xyz",
	path + "Axes/Pot_C_Piece_02_Axis.xyz",
	path + "Axes/Pot_C_Piece_03_Axis.xyz",
	path + "Axes/Pot_C_Piece_04_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Pot_C_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_C_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_C_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_C_Piece_04_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Pot_C_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_C_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_C_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_C_Piece_04_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Pot_C_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_C_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_C_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_C_Piece_04_Surface_F.pcd"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Pot_C_Piece_1_T.txt",
	path + "Ground Truth/Pot_C_Piece_2_T.txt",
	path + "Ground Truth/Pot_C_Piece_3_T.txt",
	path + "Ground Truth/Pot_C_Piece_4_T.txt"
};

string gt_graph_path[1] = {
	path + "Ground Truth/Pot_C_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1	
	true,   // 2	
	true,	// 3		
	true	// 4		
};
#endif

//############################################ ICCV Pottery D ############################################//
#ifdef POT_D
#define SHARD_NUMBER 29
#define NUM_MIXED_SHERD 1

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Pot_D_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_11_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_12_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_13_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_14_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_15_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_16_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_17_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_18_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_19_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_20_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_21_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_22_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_23_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_24_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_25_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_26_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_27_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_28_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_29_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Pot_D_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_08_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_09_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_10_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_11_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_12_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_13_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_14_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_15_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_16_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_17_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_18_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_19_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_20_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_21_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_22_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_23_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_24_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_25_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_26_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_27_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_28_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_29_Mesh_DS.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Pot_D_Piece_01_Axis.xyz",
	path + "Axes/Pot_D_Piece_02_Axis.xyz",
	path + "Axes/Pot_D_Piece_03_Axis.xyz",
	path + "Axes/Pot_D_Piece_04_Axis.xyz",
	path + "Axes/Pot_D_Piece_05_Axis.xyz",
	path + "Axes/Pot_D_Piece_06_Axis.xyz",
	path + "Axes/Pot_D_Piece_07_Axis.xyz",
	path + "Axes/Pot_D_Piece_08_Axis.xyz",
	path + "Axes/Pot_D_Piece_09_Axis.xyz",
	path + "Axes/Pot_D_Piece_10_Axis.xyz",
	path + "Axes/Pot_D_Piece_11_Axis.xyz",
	path + "Axes/Pot_D_Piece_12_Axis.xyz",
	path + "Axes/Pot_D_Piece_13_Axis.xyz",
	path + "Axes/Pot_D_Piece_14_Axis.xyz",
	path + "Axes/Pot_D_Piece_15_Axis.xyz",
	path + "Axes/Pot_D_Piece_16_Axis.xyz",
	path + "Axes/Pot_D_Piece_17_Axis.xyz",
	path + "Axes/Pot_D_Piece_18_Axis.xyz",
	path + "Axes/Pot_D_Piece_19_Axis.xyz",
	path + "Axes/Pot_D_Piece_20_Axis.xyz",
	path + "Axes/Pot_D_Piece_21_Axis.xyz",
	path + "Axes/Pot_D_Piece_22_Axis.xyz",
	path + "Axes/Pot_D_Piece_23_Axis.xyz",
	path + "Axes/Pot_D_Piece_24_Axis.xyz",
	path + "Axes/Pot_D_Piece_25_Axis.xyz",
	path + "Axes/Pot_D_Piece_26_Axis.xyz",
	path + "Axes/Pot_D_Piece_27_Axis.xyz",
	path + "Axes/Pot_D_Piece_28_Axis.xyz",
	path + "Axes/Pot_D_Piece_29_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Pot_D_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_10_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_11_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_12_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_13_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_14_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_15_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_16_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_17_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_18_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_19_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_20_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_21_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_22_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_23_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_24_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_25_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_26_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_27_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_28_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_29_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Pot_D_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_10_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_11_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_12_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_13_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_14_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_15_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_16_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_17_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_18_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_19_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_20_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_21_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_22_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_23_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_24_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_25_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_26_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_27_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_28_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_29_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Pot_D_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_09_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_10_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_11_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_12_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_13_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_14_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_15_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_16_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_17_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_18_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_19_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_20_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_21_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_22_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_23_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_24_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_25_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_26_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_27_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_28_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_29_Surface_F.pcd"
};


string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Pot_D_Piece_1_T.txt",
	path + "Ground Truth/Pot_D_Piece_2_T.txt",
	path + "Ground Truth/Pot_D_Piece_3_T.txt",
	path + "Ground Truth/Pot_D_Piece_4_T.txt",
	path + "Ground Truth/Pot_D_Piece_5_T.txt",
	path + "Ground Truth/Pot_D_Piece_6_T.txt",
	path + "Ground Truth/Pot_D_Piece_7_T.txt",
	path + "Ground Truth/Pot_D_Piece_8_T.txt",
	path + "Ground Truth/Pot_D_Piece_9_T.txt",
	path + "Ground Truth/Pot_D_Piece_10_T.txt",
	path + "Ground Truth/Pot_D_Piece_11_T.txt",
	path + "Ground Truth/Pot_D_Piece_12_T.txt",
	path + "Ground Truth/Pot_D_Piece_13_T.txt",
	path + "Ground Truth/Pot_D_Piece_14_T.txt",
	path + "Ground Truth/Pot_D_Piece_15_T.txt",
	path + "Ground Truth/Pot_D_Piece_16_T.txt",
	path + "Ground Truth/Pot_D_Piece_17_T.txt",
	path + "Ground Truth/Pot_D_Piece_18_T.txt",
	path + "Ground Truth/Pot_D_Piece_19_T.txt",
	path + "Ground Truth/Pot_D_Piece_20_T.txt",
	path + "Ground Truth/Pot_D_Piece_21_T.txt",
	path + "Ground Truth/Pot_D_Piece_22_T.txt",
	path + "Ground Truth/Pot_D_Piece_23_T.txt",
	path + "Ground Truth/Pot_D_Piece_24_T.txt",
	path + "Ground Truth/Pot_D_Piece_25_T.txt",
	path + "Ground Truth/Pot_D_Piece_26_T.txt",
	path + "Ground Truth/Pot_D_Piece_27_T.txt",
	path + "Ground Truth/Pot_D_Piece_28_T.txt",
	path + "Ground Truth/Pot_D_Piece_29_T.txt"
};

string gt_graph_path[1] = {
	path + "Ground Truth/Pot_D_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1 
	true,   // 2 
	true,	// 3 
	true,   // 4 
	true,   // 5 
	true,   // 6 
	true,   // 7 
	true,   // 8 
	true,   // 9 
	true,   // 10
	true,   // 11
	true,	// 12 
	true,   // 13
	true,	// 14 
	true,   // 15
	true,   // 16
	true,   // 17
	true,   // 18
	true,   // 19
	true,   // 20
	true,   // 21
	true,   // 22
	true,   // 23
	true,   // 24
	true,   // 25
	true,   // 26
	true,   // 27
	true,   // 28
	true   // 29
};
#endif

//############################################ ICCV Pottery E ############################################//
#ifdef POT_E
#define SHARD_NUMBER 31
#define NUM_MIXED_SHERD 1

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Pot_E_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_11_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_12_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_13_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_14_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_15_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_16_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_17_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_18_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_19_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_20_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_21_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_22_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_23_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_24_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_25_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_26_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_27_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_28_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_29_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_30_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_31_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Pot_E_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_08_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_09_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_10_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_11_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_12_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_13_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_14_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_15_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_16_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_17_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_18_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_19_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_20_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_21_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_22_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_23_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_24_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_25_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_26_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_27_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_28_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_29_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_30_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_31_Mesh_DS.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Pot_E_Piece_01_Axis.xyz",
	path + "Axes/Pot_E_Piece_02_Axis.xyz",
	path + "Axes/Pot_E_Piece_03_Axis.xyz",
	path + "Axes/Pot_E_Piece_04_Axis.xyz",
	path + "Axes/Pot_E_Piece_05_Axis.xyz",
	path + "Axes/Pot_E_Piece_06_Axis.xyz",
	path + "Axes/Pot_E_Piece_07_Axis.xyz",
	path + "Axes/Pot_E_Piece_08_Axis.xyz",
	path + "Axes/Pot_E_Piece_09_Axis.xyz",
	path + "Axes/Pot_E_Piece_10_Axis.xyz",
	path + "Axes/Pot_E_Piece_11_Axis.xyz",
	path + "Axes/Pot_E_Piece_12_Axis.xyz",
	path + "Axes/Pot_E_Piece_13_Axis.xyz",
	path + "Axes/Pot_E_Piece_14_Axis.xyz",
	path + "Axes/Pot_E_Piece_15_Axis.xyz",
	path + "Axes/Pot_E_Piece_16_Axis.xyz",
	path + "Axes/Pot_E_Piece_17_Axis.xyz",
	path + "Axes/Pot_E_Piece_18_Axis.xyz",
	path + "Axes/Pot_E_Piece_19_Axis.xyz",
	path + "Axes/Pot_E_Piece_20_Axis.xyz",
	path + "Axes/Pot_E_Piece_21_Axis.xyz",
	path + "Axes/Pot_E_Piece_22_Axis.xyz",
	path + "Axes/Pot_E_Piece_23_Axis.xyz",
	path + "Axes/Pot_E_Piece_24_Axis.xyz",
	path + "Axes/Pot_E_Piece_25_Axis.xyz",
	path + "Axes/Pot_E_Piece_26_Axis.xyz",
	path + "Axes/Pot_E_Piece_27_Axis.xyz",
	path + "Axes/Pot_E_Piece_28_Axis.xyz",
	path + "Axes/Pot_E_Piece_29_Axis.xyz",
	path + "Axes/Pot_E_Piece_30_Axis.xyz",
	path + "Axes/Pot_E_Piece_31_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Pot_E_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_10_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_11_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_12_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_13_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_14_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_15_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_16_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_17_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_18_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_19_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_20_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_21_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_22_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_23_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_24_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_25_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_26_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_27_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_28_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_29_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_30_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_31_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Pot_E_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_10_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_11_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_12_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_13_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_14_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_15_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_16_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_17_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_18_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_19_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_20_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_21_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_22_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_23_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_24_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_25_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_26_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_27_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_28_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_29_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_30_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_31_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Pot_E_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_09_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_10_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_11_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_12_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_13_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_14_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_15_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_16_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_17_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_18_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_19_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_20_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_21_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_22_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_23_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_24_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_25_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_26_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_27_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_28_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_29_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_30_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_31_Surface_F.pcd"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Pot_E_Piece_1_T.txt",
	path + "Ground Truth/Pot_E_Piece_2_T.txt",
	path + "Ground Truth/Pot_E_Piece_3_T.txt",
	path + "Ground Truth/Pot_E_Piece_4_T.txt",
	path + "Ground Truth/Pot_E_Piece_5_T.txt",
	path + "Ground Truth/Pot_E_Piece_6_T.txt",
	path + "Ground Truth/Pot_E_Piece_7_T.txt",
	path + "Ground Truth/Pot_E_Piece_8_T.txt",
	path + "Ground Truth/Pot_E_Piece_9_T.txt",
	path + "Ground Truth/Pot_E_Piece_10_T.txt",
	path + "Ground Truth/Pot_E_Piece_11_T.txt",
	path + "Ground Truth/Pot_E_Piece_12_T.txt",
	path + "Ground Truth/Pot_E_Piece_13_T.txt",
	path + "Ground Truth/Pot_E_Piece_14_T.txt",
	path + "Ground Truth/Pot_E_Piece_15_T.txt",
	path + "Ground Truth/Pot_E_Piece_16_T.txt",
	path + "Ground Truth/Pot_E_Piece_17_T.txt",
	path + "Ground Truth/Pot_E_Piece_18_T.txt",
	path + "Ground Truth/Pot_E_Piece_19_T.txt",
	path + "Ground Truth/Pot_E_Piece_20_T.txt",
	path + "Ground Truth/Pot_E_Piece_21_T.txt",
	path + "Ground Truth/Pot_E_Piece_22_T.txt",
	path + "Ground Truth/Pot_E_Piece_23_T.txt",
	path + "Ground Truth/Pot_E_Piece_24_T.txt",
	path + "Ground Truth/Pot_E_Piece_25_T.txt",
	path + "Ground Truth/Pot_E_Piece_26_T.txt",
	path + "Ground Truth/Pot_E_Piece_27_T.txt",
	path + "Ground Truth/Pot_E_Piece_28_T.txt",
	path + "Ground Truth/Pot_E_Piece_29_T.txt",
	path + "Ground Truth/Pot_E_Piece_30_T.txt",
	path + "Ground Truth/Pot_E_Piece_31_T.txt"
};

string gt_graph_path[1] = {
	path + "Ground Truth/Pot_E_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1	Pot E		
	true,   // 2						
	true,	// 3				
	true,   // 4				
	true,   // 5				
	true,   // 6					
	true,   // 7				
	true,   // 8				
	true,   // 9				
	true,   // 10				
	true,   // 11				
	true,	// 12				
	true,   // 13				
	true,	// 14				
	true,   // 15				
	true,   // 16				
	true,   // 17				
	true,   // 18				
	true,   // 19				
	true,   // 20				
	true,   // 21				
	true,   // 22				
	true,   // 23				
	true,   // 24				
	true,   // 25				
	true,   // 26				
	true,   // 27				
	true,	// 28				
	true,	// 29
	true,	// 30				
	true	// 31				
};

#endif


//############################################ Pottery Pot F ############################################//
#ifdef POT_F
#define SHARD_NUMBER 7
#define NUM_MIXED_SHERD 1

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Pot_F_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_07_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Pot_F_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_F_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_F_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_F_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_F_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_F_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_F_Piece_07_Mesh_DS.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Pot_F_Piece_01_Axis.xyz",
	path + "Axes/Pot_F_Piece_02_Axis.xyz",
	path + "Axes/Pot_F_Piece_03_Axis.xyz",
	path + "Axes/Pot_F_Piece_04_Axis.xyz",
	path + "Axes/Pot_F_Piece_05_Axis.xyz",
	path + "Axes/Pot_F_Piece_06_Axis.xyz",
	path + "Axes/Pot_F_Piece_07_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Pot_F_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_07_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Pot_F_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_07_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Pot_F_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_07_Surface_F.pcd"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Pot_F_Piece_1_T.txt",
	path + "Ground Truth/Pot_F_Piece_2_T.txt",
	path + "Ground Truth/Pot_F_Piece_3_T.txt",
	path + "Ground Truth/Pot_F_Piece_4_T.txt",
	path + "Ground Truth/Pot_F_Piece_5_T.txt",
	path + "Ground Truth/Pot_F_Piece_6_T.txt",
	path + "Ground Truth/Pot_F_Piece_7_T.txt"
};

string gt_graph_path[1] = {
	path + "Ground Truth/Pot_F_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1 
	true,   // 2 
	true,	// 3 -
	true,   // 4 
	true,   // 5 
	true,   // 6 
	true    // 7 
};
#endif


//############################################ Pottery Pot G ############################################//
#ifdef POT_G
#define SHARD_NUMBER 7
#define NUM_MIXED_SHERD 1

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Pot_G_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_07_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Pot_G_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_07_Mesh_DS.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Pot_G_Piece_01_Axis.xyz",
	path + "Axes/Pot_G_Piece_02_Axis.xyz",
	path + "Axes/Pot_G_Piece_03_Axis.xyz",
	path + "Axes/Pot_G_Piece_04_Axis.xyz",
	path + "Axes/Pot_G_Piece_05_Axis.xyz",
	path + "Axes/Pot_G_Piece_06_Axis.xyz",
	path + "Axes/Pot_G_Piece_07_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Pot_G_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_07_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Pot_G_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_07_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Pot_G_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_07_Surface_F.pcd"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Pot_G_Piece_1_T.txt",
	path + "Ground Truth/Pot_G_Piece_2_T.txt",
	path + "Ground Truth/Pot_G_Piece_3_T.txt",
	path + "Ground Truth/Pot_G_Piece_4_T.txt",
	path + "Ground Truth/Pot_G_Piece_5_T.txt",
	path + "Ground Truth/Pot_G_Piece_6_T.txt",
	path + "Ground Truth/Pot_G_Piece_7_T.txt"
};

string gt_graph_path[1] = {
	path + "Ground Truth/Pot_G_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1 
	true,   // 2 
	true,	// 3 -
	true,   // 4 
	true,   // 5 
	true,   // 6 
	true    // 7 
};
#endif

//############################################ Pottery Pot H ############################################//
#ifdef POT_H
#define SHARD_NUMBER 11
#define NUM_MIXED_SHERD 1

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Pot_H_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_11_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Pot_H_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_08_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_09_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_10_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_11_Mesh_DS.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Pot_H_Piece_01_Axis.xyz",
	path + "Axes/Pot_H_Piece_02_Axis.xyz",
	path + "Axes/Pot_H_Piece_03_Axis.xyz",
	path + "Axes/Pot_H_Piece_04_Axis.xyz",
	path + "Axes/Pot_H_Piece_05_Axis.xyz",
	path + "Axes/Pot_H_Piece_06_Axis.xyz",
	path + "Axes/Pot_H_Piece_07_Axis.xyz",
	path + "Axes/Pot_H_Piece_08_Axis.xyz",
	path + "Axes/Pot_H_Piece_09_Axis.xyz",
	path + "Axes/Pot_H_Piece_10_Axis.xyz",
	path + "Axes/Pot_H_Piece_11_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Pot_H_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_10_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_11_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Pot_H_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_10_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_11_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Pot_H_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_09_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_10_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_11_Surface_F.pcd"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Pot_H_Piece_1_T.txt",
	path + "Ground Truth/Pot_H_Piece_2_T.txt",
	path + "Ground Truth/Pot_H_Piece_3_T.txt",
	path + "Ground Truth/Pot_H_Piece_4_T.txt",
	path + "Ground Truth/Pot_H_Piece_5_T.txt",
	path + "Ground Truth/Pot_H_Piece_6_T.txt",
	path + "Ground Truth/Pot_H_Piece_7_T.txt",
	path + "Ground Truth/Pot_H_Piece_8_T.txt",
	path + "Ground Truth/Pot_H_Piece_9_T.txt",
	path + "Ground Truth/Pot_H_Piece_10_T.txt",
	path + "Ground Truth/Pot_H_Piece_11_T.txt"
};

string gt_graph_path[1] = {
	path + "Ground Truth/Pot_H_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1 
	true,   // 2 
	true,	// 3 
	true,   // 4 
	true,   // 5 
	true,   // 6 
	true,   // 7 
	true,   // 8
	true,	// 9 
	true,   // 10 
	true	// 11
};
#endif

//############################################ Pottery Pot I ############################################//
#ifdef POT_I
#define SHARD_NUMBER 30
#define NUM_MIXED_SHERD 1

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Pot_I_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_11_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_12_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_13_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_14_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_15_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_16_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_17_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_18_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_19_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_20_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_21_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_22_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_23_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_24_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_25_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_26_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_27_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_28_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_29_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_30_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Pot_I_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_08_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_09_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_10_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_11_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_12_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_13_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_14_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_15_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_16_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_17_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_18_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_19_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_20_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_21_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_22_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_23_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_24_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_25_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_26_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_27_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_28_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_29_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_30_Mesh_DS.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Pot_I_Piece_01_Axis.xyz",
	path + "Axes/Pot_I_Piece_02_Axis.xyz",
	path + "Axes/Pot_I_Piece_03_Axis.xyz",
	path + "Axes/Pot_I_Piece_04_Axis.xyz",
	path + "Axes/Pot_I_Piece_05_Axis.xyz",
	path + "Axes/Pot_I_Piece_06_Axis.xyz",
	path + "Axes/Pot_I_Piece_07_Axis.xyz",
	path + "Axes/Pot_I_Piece_08_Axis.xyz",
	path + "Axes/Pot_I_Piece_09_Axis.xyz",
	path + "Axes/Pot_I_Piece_10_Axis.xyz",
	path + "Axes/Pot_I_Piece_11_Axis.xyz",
	path + "Axes/Pot_I_Piece_12_Axis.xyz",
	path + "Axes/Pot_I_Piece_13_Axis.xyz",
	path + "Axes/Pot_I_Piece_14_Axis.xyz",
	path + "Axes/Pot_I_Piece_15_Axis.xyz",
	path + "Axes/Pot_I_Piece_16_Axis.xyz",
	path + "Axes/Pot_I_Piece_17_Axis.xyz",
	path + "Axes/Pot_I_Piece_18_Axis.xyz",
	path + "Axes/Pot_I_Piece_19_Axis.xyz",
	path + "Axes/Pot_I_Piece_20_Axis.xyz",
	path + "Axes/Pot_I_Piece_21_Axis.xyz",
	path + "Axes/Pot_I_Piece_22_Axis.xyz",
	path + "Axes/Pot_I_Piece_23_Axis.xyz",
	path + "Axes/Pot_I_Piece_24_Axis.xyz",
	path + "Axes/Pot_I_Piece_25_Axis.xyz",
	path + "Axes/Pot_I_Piece_26_Axis.xyz", 
	path + "Axes/Pot_I_Piece_27_Axis.xyz",
	path + "Axes/Pot_I_Piece_28_Axis.xyz",
	path + "Axes/Pot_I_Piece_29_Axis.xyz",
	path + "Axes/Pot_I_Piece_30_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Pot_I_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_10_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_11_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_12_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_13_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_14_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_15_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_16_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_17_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_18_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_19_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_20_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_21_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_22_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_23_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_24_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_25_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_26_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_27_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_28_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_29_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_30_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Pot_I_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_10_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_11_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_12_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_13_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_14_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_15_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_16_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_17_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_18_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_19_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_20_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_21_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_22_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_23_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_24_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_25_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_26_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_27_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_28_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_29_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_30_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Pot_I_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_09_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_10_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_11_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_12_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_13_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_14_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_15_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_16_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_17_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_18_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_19_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_20_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_21_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_22_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_23_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_24_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_25_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_26_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_27_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_28_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_29_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_30_Surface_F.pcd"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Pot_I_Piece_1_T.txt",
	path + "Ground Truth/Pot_I_Piece_2_T.txt",
	path + "Ground Truth/Pot_I_Piece_3_T.txt",
	path + "Ground Truth/Pot_I_Piece_4_T.txt",
	path + "Ground Truth/Pot_I_Piece_5_T.txt",
	path + "Ground Truth/Pot_I_Piece_6_T.txt",
	path + "Ground Truth/Pot_I_Piece_7_T.txt",
	path + "Ground Truth/Pot_I_Piece_8_T.txt",
	path + "Ground Truth/Pot_I_Piece_9_T.txt",
	path + "Ground Truth/Pot_I_Piece_10_T.txt",
	path + "Ground Truth/Pot_I_Piece_11_T.txt",
	path + "Ground Truth/Pot_I_Piece_12_T.txt",
	path + "Ground Truth/Pot_I_Piece_13_T.txt",
	path + "Ground Truth/Pot_I_Piece_14_T.txt",
	path + "Ground Truth/Pot_I_Piece_15_T.txt",
	path + "Ground Truth/Pot_I_Piece_16_T.txt",
	path + "Ground Truth/Pot_I_Piece_17_T.txt",
	path + "Ground Truth/Pot_I_Piece_18_T.txt",
	path + "Ground Truth/Pot_I_Piece_19_T.txt",
	path + "Ground Truth/Pot_I_Piece_20_T.txt",
	path + "Ground Truth/Pot_I_Piece_21_T.txt",
	path + "Ground Truth/Pot_I_Piece_22_T.txt",
	path + "Ground Truth/Pot_I_Piece_23_T.txt",
	path + "Ground Truth/Pot_I_Piece_24_T.txt",
	path + "Ground Truth/Pot_I_Piece_25_T.txt",
	path + "Ground Truth/Pot_I_Piece_26_T.txt",
	path + "Ground Truth/Pot_I_Piece_27_T.txt",
	path + "Ground Truth/Pot_I_Piece_28_T.txt",
	path + "Ground Truth/Pot_I_Piece_29_T.txt",
	path + "Ground Truth/Pot_I_Piece_30_T.txt"
};

string gt_graph_path[1] = {
	path + "Ground Truth/Pot_I_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1 
	true,   // 2 
	true,	// 3 -
	true,   // 4 
	true,   // 5 
	true,   // 6 
	true,   // 7 
	true,   // 8
	true,	// 9 -
	true,   // 10 
	true,   // 11
	true,   // 12
	true,   // 13
	true,	// 14 
	true,   // 15
	true,	// 16-
	true,   // 17
	true,   // 18
	true,   // 19
	true,   // 20
	true,   // 21
	true,	// 22
	true,   // 23 
	true,   // 24
	true,   // 25
	true,   // 26
	true,	// 27
	true,   // 28 
	true,   // 29
	true    // 30
};
#endif


//############################################ Pottery Pot J ############################################//
#ifdef POT_J
#define SHARD_NUMBER 19
#define NUM_MIXED_SHERD 1

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Pot_J_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_11_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_12_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Pot_J_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_08_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_09_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_10_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_11_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_12_Mesh_DS.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Pot_J_Piece_01_Axis.xyz",
	path + "Axes/Pot_J_Piece_02_Axis.xyz",
	path + "Axes/Pot_J_Piece_03_Axis.xyz",
	path + "Axes/Pot_J_Piece_04_Axis.xyz",
	path + "Axes/Pot_J_Piece_05_Axis.xyz",
	path + "Axes/Pot_J_Piece_06_Axis.xyz",
	path + "Axes/Pot_J_Piece_07_Axis.xyz",
	path + "Axes/Pot_J_Piece_08_Axis.xyz",
	path + "Axes/Pot_J_Piece_09_Axis.xyz",
	path + "Axes/Pot_J_Piece_10_Axis.xyz",
	path + "Axes/Pot_J_Piece_11_Axis.xyz",
	path + "Axes/Pot_J_Piece_12_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Pot_J_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_10_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_11_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_12_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Pot_J_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_10_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_11_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_12_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Pot_J_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_09_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_10_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_11_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_12_Surface_F.pcd"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Pot_J_Piece_1_T.txt",
	path + "Ground Truth/Pot_J_Piece_2_T.txt",
	path + "Ground Truth/Pot_J_Piece_3_T.txt",
	path + "Ground Truth/Pot_J_Piece_4_T.txt",
	path + "Ground Truth/Pot_J_Piece_5_T.txt",
	path + "Ground Truth/Pot_J_Piece_6_T.txt",
	path + "Ground Truth/Pot_J_Piece_7_T.txt",
	path + "Ground Truth/Pot_J_Piece_8_T.txt",
	path + "Ground Truth/Pot_J_Piece_9_T.txt",
	path + "Ground Truth/Pot_J_Piece_10_T.txt",
	path + "Ground Truth/Pot_J_Piece_11_T.txt",
	path + "Ground Truth/Pot_J_Piece_12_T.txt"
};

string gt_graph_path[1] = {
	path + "Ground Truth/Pot_J_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1 
	true,   // 2 
	true,	// 3 -
	true,   // 4 
	true,   // 5 
	true,   // 6 
	true,   // 7 
	true,   // 8
	false,	// 9 -
	true,   // 10 
	true,   // 11
	true    // 12
};
#endif


//############################################ Pot A + B + F + G + H ############################################//
#ifdef POT_A_B_F_G_H
#define SHARD_NUMBER 42
#define NUM_MIXED_SHERD 5

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Pot_A_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_07_Breakline_0.pcd",	
	path + "Breaklines/Pot_H_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_11_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Pot_A_Piece_01_Mesh.obj",
	path + "Mesh/Pot_A_Piece_02_Mesh.obj",
	path + "Mesh/Pot_A_Piece_03_Mesh.obj",
	path + "Mesh/Pot_A_Piece_04_Mesh.obj",
	path + "Mesh/Pot_A_Piece_05_Mesh.obj",
	path + "Mesh/Pot_A_Piece_06_Mesh.obj",
	path + "Mesh/Pot_A_Piece_07_Mesh.obj",
	path + "Mesh/Pot_A_Piece_08_Mesh.obj",
	path + "Mesh/Pot_B_Piece_01_Mesh.obj",
	path + "Mesh/Pot_B_Piece_02_Mesh.obj",
	path + "Mesh/Pot_B_Piece_03_Mesh.obj",
	path + "Mesh/Pot_B_Piece_04_Mesh.obj",
	path + "Mesh/Pot_B_Piece_05_Mesh.obj",
	path + "Mesh/Pot_B_Piece_06_Mesh.obj",
	path + "Mesh/Pot_B_Piece_07_Mesh.obj",
	path + "Mesh/Pot_B_Piece_08_Mesh.obj",
	path + "Mesh/Pot_B_Piece_09_Mesh.obj",
	path + "Mesh/Pot_F_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_F_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_F_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_F_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_F_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_F_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_F_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_08_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_09_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_10_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_11_Mesh_DS.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Pot_A_Piece_01_Axis.xyz",
	path + "Axes/Pot_A_Piece_02_Axis.xyz",
	path + "Axes/Pot_A_Piece_03_Axis.xyz",
	path + "Axes/Pot_A_Piece_04_Axis.xyz",
	path + "Axes/Pot_A_Piece_05_Axis.xyz",
	path + "Axes/Pot_A_Piece_06_Axis.xyz",
	path + "Axes/Pot_A_Piece_07_Axis.xyz",
	path + "Axes/Pot_A_Piece_08_Axis.xyz",
	path + "Axes/Pot_B_Piece_01_Axis.xyz",
	path + "Axes/Pot_B_Piece_02_Axis.xyz",
	path + "Axes/Pot_B_Piece_03_Axis.xyz",
	path + "Axes/Pot_B_Piece_04_Axis.xyz",
	path + "Axes/Pot_B_Piece_05_Axis.xyz",
	path + "Axes/Pot_B_Piece_06_Axis.xyz",
	path + "Axes/Pot_B_Piece_07_Axis.xyz",
	path + "Axes/Pot_B_Piece_08_Axis.xyz",
	path + "Axes/Pot_B_Piece_09_Axis.xyz",
	path + "Axes/Pot_F_Piece_01_Axis.xyz",
	path + "Axes/Pot_F_Piece_02_Axis.xyz",
	path + "Axes/Pot_F_Piece_03_Axis.xyz",
	path + "Axes/Pot_F_Piece_04_Axis.xyz",
	path + "Axes/Pot_F_Piece_05_Axis.xyz",
	path + "Axes/Pot_F_Piece_06_Axis.xyz",
	path + "Axes/Pot_F_Piece_07_Axis.xyz",
	path + "Axes/Pot_G_Piece_01_Axis.xyz",
	path + "Axes/Pot_G_Piece_02_Axis.xyz",
	path + "Axes/Pot_G_Piece_03_Axis.xyz",
	path + "Axes/Pot_G_Piece_04_Axis.xyz",
	path + "Axes/Pot_G_Piece_05_Axis.xyz",
	path + "Axes/Pot_G_Piece_06_Axis.xyz",
	path + "Axes/Pot_G_Piece_07_Axis.xyz",
	path + "Axes/Pot_H_Piece_01_Axis.xyz",
	path + "Axes/Pot_H_Piece_02_Axis.xyz",
	path + "Axes/Pot_H_Piece_03_Axis.xyz",
	path + "Axes/Pot_H_Piece_04_Axis.xyz",
	path + "Axes/Pot_H_Piece_05_Axis.xyz",
	path + "Axes/Pot_H_Piece_06_Axis.xyz",
	path + "Axes/Pot_H_Piece_07_Axis.xyz",
	path + "Axes/Pot_H_Piece_08_Axis.xyz",
	path + "Axes/Pot_H_Piece_09_Axis.xyz",
	path + "Axes/Pot_H_Piece_10_Axis.xyz",
	path + "Axes/Pot_H_Piece_11_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Pot_A_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_10_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_11_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Pot_A_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_10_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_11_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Pot_A_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_09_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_09_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_10_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_11_Surface_F.pcd"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Pot_A_Piece_1_T.txt",
	path + "Ground Truth/Pot_A_Piece_2_T.txt",
	path + "Ground Truth/Pot_A_Piece_3_T.txt",
	path + "Ground Truth/Pot_A_Piece_4_T.txt",
	path + "Ground Truth/Pot_A_Piece_5_T.txt",
	path + "Ground Truth/Pot_A_Piece_6_T.txt",
	path + "Ground Truth/Pot_A_Piece_7_T.txt",
	path + "Ground Truth/Pot_A_Piece_8_T.txt",
	path + "Ground Truth/Pot_B_Piece_1_T.txt",
	path + "Ground Truth/Pot_B_Piece_2_T.txt",
	path + "Ground Truth/Pot_B_Piece_3_T.txt",
	path + "Ground Truth/Pot_B_Piece_4_T.txt",
	path + "Ground Truth/Pot_B_Piece_5_T.txt",
	path + "Ground Truth/Pot_B_Piece_6_T.txt",
	path + "Ground Truth/Pot_B_Piece_7_T.txt",
	path + "Ground Truth/Pot_B_Piece_8_T.txt",
	path + "Ground Truth/Pot_B_Piece_9_T.txt",
	path + "Ground Truth/Pot_F_Piece_1_T.txt",
	path + "Ground Truth/Pot_F_Piece_2_T.txt",
	path + "Ground Truth/Pot_F_Piece_3_T.txt",
	path + "Ground Truth/Pot_F_Piece_4_T.txt",
	path + "Ground Truth/Pot_F_Piece_5_T.txt",
	path + "Ground Truth/Pot_F_Piece_6_T.txt",
	path + "Ground Truth/Pot_F_Piece_7_T.txt",
	path + "Ground Truth/Pot_G_Piece_1_T.txt",
	path + "Ground Truth/Pot_G_Piece_2_T.txt",
	path + "Ground Truth/Pot_G_Piece_3_T.txt",
	path + "Ground Truth/Pot_G_Piece_4_T.txt",
	path + "Ground Truth/Pot_G_Piece_5_T.txt",
	path + "Ground Truth/Pot_G_Piece_6_T.txt",
	path + "Ground Truth/Pot_G_Piece_7_T.txt",
	path + "Ground Truth/Pot_H_Piece_1_T.txt",
	path + "Ground Truth/Pot_H_Piece_2_T.txt",
	path + "Ground Truth/Pot_H_Piece_3_T.txt",
	path + "Ground Truth/Pot_H_Piece_4_T.txt",
	path + "Ground Truth/Pot_H_Piece_5_T.txt",
	path + "Ground Truth/Pot_H_Piece_6_T.txt",
	path + "Ground Truth/Pot_H_Piece_7_T.txt",
	path + "Ground Truth/Pot_H_Piece_8_T.txt",
	path + "Ground Truth/Pot_H_Piece_9_T.txt",
	path + "Ground Truth/Pot_H_Piece_10_T.txt",
	path + "Ground Truth/Pot_H_Piece_11_T.txt"
};

string gt_graph_path[5] = {
	path + "Ground Truth/Pot_A_simple_graph.txt",
	path + "Ground Truth/Pot_B_simple_graph.txt",
	path + "Ground Truth/Pot_F_simple_graph.txt",
	path + "Ground Truth/Pot_G_simple_graph.txt",
	path + "Ground Truth/Pot_H_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1  Pot A
	true,   // 2 
	true,	// 3 
	true,   // 4 
	true,   // 5 
	true,   // 6 
	true,   // 7 
	true,   // 8 
	true,	// 1  Pot B
	true,	// 2
	true,	// 3
	true,	// 4
	true,	// 5
	true,	// 6
	true,	// 7
	true,	// 8
	true,	// 9
	true,	// 1  Pot F
	true,   // 2 
	true,	// 3 -
	true,   // 4 
	true,   // 5 
	true,   // 6 
	true,   // 7 
	true,	// 1  Pot G
	true,   // 2 
	true,	// 3 -
	true,   // 4 
	true,   // 5 
	true,   // 6 
	true,   // 7  Pot H
	true,	// 1 
	true,   // 2 
	true,	// 3 
	true,   // 4 
	true,   // 5 
	true,   // 6 
	true,   // 7 
	true,   // 8
	true,	// 9 
	true,   // 10 
	true	// 11
};
#endif

//############################################ ICCV Pottery D + E ############################################//
#ifdef POT_D_E
#define SHARD_NUMBER 60
#define NUM_MIXED_SHERD 2

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Pot_D_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_11_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_12_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_13_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_14_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_15_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_16_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_17_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_18_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_19_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_20_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_21_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_22_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_23_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_24_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_25_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_26_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_27_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_28_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_29_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_11_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_12_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_13_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_14_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_15_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_16_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_17_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_18_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_19_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_20_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_21_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_22_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_23_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_24_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_25_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_26_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_27_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_28_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_29_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_30_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_31_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Pot_D_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_08_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_09_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_10_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_11_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_12_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_13_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_14_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_15_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_16_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_17_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_18_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_19_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_20_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_21_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_22_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_23_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_24_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_25_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_26_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_27_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_28_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_29_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_08_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_09_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_10_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_11_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_12_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_13_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_14_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_15_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_16_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_17_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_18_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_19_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_20_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_21_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_22_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_23_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_24_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_25_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_26_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_27_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_28_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_29_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_30_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_31_Mesh_DS.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Pot_D_Piece_01_Axis.xyz",
	path + "Axes/Pot_D_Piece_02_Axis.xyz",
	path + "Axes/Pot_D_Piece_03_Axis.xyz",
	path + "Axes/Pot_D_Piece_04_Axis.xyz",
	path + "Axes/Pot_D_Piece_05_Axis.xyz",
	path + "Axes/Pot_D_Piece_06_Axis.xyz",
	path + "Axes/Pot_D_Piece_07_Axis.xyz",
	path + "Axes/Pot_D_Piece_08_Axis.xyz",
	path + "Axes/Pot_D_Piece_09_Axis.xyz",
	path + "Axes/Pot_D_Piece_10_Axis.xyz",
	path + "Axes/Pot_D_Piece_11_Axis.xyz",
	path + "Axes/Pot_D_Piece_12_Axis.xyz",
	path + "Axes/Pot_D_Piece_13_Axis.xyz",
	path + "Axes/Pot_D_Piece_14_Axis.xyz",
	path + "Axes/Pot_D_Piece_15_Axis.xyz",
	path + "Axes/Pot_D_Piece_16_Axis.xyz",
	path + "Axes/Pot_D_Piece_17_Axis.xyz",
	path + "Axes/Pot_D_Piece_18_Axis.xyz",
	path + "Axes/Pot_D_Piece_19_Axis.xyz",
	path + "Axes/Pot_D_Piece_20_Axis.xyz",
	path + "Axes/Pot_D_Piece_21_Axis.xyz",
	path + "Axes/Pot_D_Piece_22_Axis.xyz",
	path + "Axes/Pot_D_Piece_23_Axis.xyz",
	path + "Axes/Pot_D_Piece_24_Axis.xyz",
	path + "Axes/Pot_D_Piece_25_Axis.xyz",
	path + "Axes/Pot_D_Piece_26_Axis.xyz",
	path + "Axes/Pot_D_Piece_27_Axis.xyz",
	path + "Axes/Pot_D_Piece_28_Axis.xyz",
	path + "Axes/Pot_D_Piece_29_Axis.xyz",
	path + "Axes/Pot_E_Piece_01_Axis.xyz",
	path + "Axes/Pot_E_Piece_02_Axis.xyz",
	path + "Axes/Pot_E_Piece_03_Axis.xyz",
	path + "Axes/Pot_E_Piece_04_Axis.xyz",
	path + "Axes/Pot_E_Piece_05_Axis.xyz",
	path + "Axes/Pot_E_Piece_06_Axis.xyz",
	path + "Axes/Pot_E_Piece_07_Axis.xyz",
	path + "Axes/Pot_E_Piece_08_Axis.xyz",
	path + "Axes/Pot_E_Piece_09_Axis.xyz",
	path + "Axes/Pot_E_Piece_10_Axis.xyz",
	path + "Axes/Pot_E_Piece_11_Axis.xyz",
	path + "Axes/Pot_E_Piece_12_Axis.xyz",
	path + "Axes/Pot_E_Piece_13_Axis.xyz",
	path + "Axes/Pot_E_Piece_14_Axis.xyz",
	path + "Axes/Pot_E_Piece_15_Axis.xyz",
	path + "Axes/Pot_E_Piece_16_Axis.xyz",
	path + "Axes/Pot_E_Piece_17_Axis.xyz",
	path + "Axes/Pot_E_Piece_18_Axis.xyz",
	path + "Axes/Pot_E_Piece_19_Axis.xyz",
	path + "Axes/Pot_E_Piece_20_Axis.xyz",
	path + "Axes/Pot_E_Piece_21_Axis.xyz",
	path + "Axes/Pot_E_Piece_22_Axis.xyz",
	path + "Axes/Pot_E_Piece_23_Axis.xyz",
	path + "Axes/Pot_E_Piece_24_Axis.xyz",
	path + "Axes/Pot_E_Piece_25_Axis.xyz",
	path + "Axes/Pot_E_Piece_26_Axis.xyz",
	path + "Axes/Pot_E_Piece_27_Axis.xyz",
	path + "Axes/Pot_E_Piece_28_Axis.xyz",
	path + "Axes/Pot_E_Piece_29_Axis.xyz",
	path + "Axes/Pot_E_Piece_30_Axis.xyz",
	path + "Axes/Pot_E_Piece_31_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Pot_D_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_10_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_11_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_12_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_13_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_14_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_15_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_16_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_17_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_18_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_19_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_20_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_21_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_22_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_23_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_24_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_25_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_26_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_27_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_28_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_29_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_10_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_11_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_12_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_13_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_14_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_15_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_16_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_17_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_18_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_19_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_20_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_21_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_22_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_23_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_24_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_25_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_26_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_27_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_28_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_29_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_30_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_31_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Pot_D_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_10_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_11_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_12_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_13_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_14_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_15_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_16_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_17_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_18_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_19_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_20_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_21_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_22_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_23_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_24_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_25_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_26_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_27_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_28_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_29_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_10_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_11_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_12_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_13_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_14_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_15_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_16_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_17_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_18_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_19_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_20_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_21_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_22_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_23_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_24_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_25_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_26_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_27_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_28_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_29_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_30_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_31_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Pot_D_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_09_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_10_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_11_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_12_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_13_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_14_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_15_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_16_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_17_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_18_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_19_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_20_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_21_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_22_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_23_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_24_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_25_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_26_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_27_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_28_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_29_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_09_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_10_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_11_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_12_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_13_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_14_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_15_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_16_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_17_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_18_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_19_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_20_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_21_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_22_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_23_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_24_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_25_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_26_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_27_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_28_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_29_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_30_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_31_Surface_F.pcd"
};


string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Pot_D_Piece_1_T.txt",
	path + "Ground Truth/Pot_D_Piece_2_T.txt",
	path + "Ground Truth/Pot_D_Piece_3_T.txt",
	path + "Ground Truth/Pot_D_Piece_4_T.txt",
	path + "Ground Truth/Pot_D_Piece_5_T.txt",
	path + "Ground Truth/Pot_D_Piece_6_T.txt",
	path + "Ground Truth/Pot_D_Piece_7_T.txt",
	path + "Ground Truth/Pot_D_Piece_8_T.txt",
	path + "Ground Truth/Pot_D_Piece_9_T.txt",
	path + "Ground Truth/Pot_D_Piece_10_T.txt",
	path + "Ground Truth/Pot_D_Piece_11_T.txt",
	path + "Ground Truth/Pot_D_Piece_12_T.txt",
	path + "Ground Truth/Pot_D_Piece_13_T.txt",
	path + "Ground Truth/Pot_D_Piece_14_T.txt",
	path + "Ground Truth/Pot_D_Piece_15_T.txt",
	path + "Ground Truth/Pot_D_Piece_16_T.txt",
	path + "Ground Truth/Pot_D_Piece_17_T.txt",
	path + "Ground Truth/Pot_D_Piece_18_T.txt",
	path + "Ground Truth/Pot_D_Piece_19_T.txt",
	path + "Ground Truth/Pot_D_Piece_20_T.txt",
	path + "Ground Truth/Pot_D_Piece_21_T.txt",
	path + "Ground Truth/Pot_D_Piece_22_T.txt",
	path + "Ground Truth/Pot_D_Piece_23_T.txt",
	path + "Ground Truth/Pot_D_Piece_24_T.txt",
	path + "Ground Truth/Pot_D_Piece_25_T.txt",
	path + "Ground Truth/Pot_D_Piece_26_T.txt",
	path + "Ground Truth/Pot_D_Piece_27_T.txt",
	path + "Ground Truth/Pot_D_Piece_28_T.txt",
	path + "Ground Truth/Pot_D_Piece_29_T.txt",
	path + "Ground Truth/Pot_E_Piece_1_T.txt",
	path + "Ground Truth/Pot_E_Piece_2_T.txt",
	path + "Ground Truth/Pot_E_Piece_3_T.txt",
	path + "Ground Truth/Pot_E_Piece_4_T.txt",
	path + "Ground Truth/Pot_E_Piece_5_T.txt",
	path + "Ground Truth/Pot_E_Piece_6_T.txt",
	path + "Ground Truth/Pot_E_Piece_7_T.txt",
	path + "Ground Truth/Pot_E_Piece_8_T.txt",
	path + "Ground Truth/Pot_E_Piece_9_T.txt",
	path + "Ground Truth/Pot_E_Piece_10_T.txt",
	path + "Ground Truth/Pot_E_Piece_11_T.txt",
	path + "Ground Truth/Pot_E_Piece_12_T.txt",
	path + "Ground Truth/Pot_E_Piece_13_T.txt",
	path + "Ground Truth/Pot_E_Piece_14_T.txt",
	path + "Ground Truth/Pot_E_Piece_15_T.txt",
	path + "Ground Truth/Pot_E_Piece_16_T.txt",
	path + "Ground Truth/Pot_E_Piece_17_T.txt",
	path + "Ground Truth/Pot_E_Piece_18_T.txt",
	path + "Ground Truth/Pot_E_Piece_19_T.txt",
	path + "Ground Truth/Pot_E_Piece_20_T.txt",
	path + "Ground Truth/Pot_E_Piece_21_T.txt",
	path + "Ground Truth/Pot_E_Piece_22_T.txt",
	path + "Ground Truth/Pot_E_Piece_23_T.txt",
	path + "Ground Truth/Pot_E_Piece_24_T.txt",
	path + "Ground Truth/Pot_E_Piece_25_T.txt",
	path + "Ground Truth/Pot_E_Piece_26_T.txt",
	path + "Ground Truth/Pot_E_Piece_27_T.txt",
	path + "Ground Truth/Pot_E_Piece_28_T.txt",
	path + "Ground Truth/Pot_E_Piece_29_T.txt",
	path + "Ground Truth/Pot_E_Piece_30_T.txt",
	path + "Ground Truth/Pot_E_Piece_31_T.txt"
};

string gt_graph_path[2] = {
	path + "Ground Truth/Pot_D_simple_graph.txt",
	path + "Ground Truth/Pot_E_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1 Pot D
	true,   // 2 
	true,	// 3 			
	true,   // 4	
	true,   // 5 
	true,   // 6 
	true,   // 7 	
	true,   // 8 
	true,   // 9	
	true,   // 10 
	true,   // 11 	
	true,	// 12 	
	true,   // 13 
	true,	// 14 		
	true,   // 15
	true,   // 16
	true,   // 17	
	true,   // 18 	
	true,   // 19 
	true,   // 20 		
	true,   // 21 		
	true,   // 22 		
	true,   // 23 
	true,   // 24
	true,   // 25 
	true,   // 26 
	true,   // 27
	true,   // 28 	
	true,   // 29				
	true,	// 1	Pot E	30	
	true,   // 2			31	
	true,	// 3			32	
	true,   // 4			33	
	true,   // 5			34	
	true,   // 6			35	
	true,   // 7			36	
	true,   // 8			37	
	true,   // 9			38	
	true,   // 10			39	
	true,   // 11			40		
	true,	// 12			41	
	true,   // 13			42	
	true,	// 14			43	
	true,   // 15			44	
	true,   // 16			45	
	true,   // 17			46	
	true,   // 18			47	
	true,   // 19			48	
	true,   // 20			49	
	true,   // 21			50	
	true,   // 22			51	
	true,   // 23			52	
	true,   // 24			53	
	true,   // 25			54	
	true,   // 26			55	
	true,   // 27			56	
	true,	// 28			57	
	true,   // 29			58	
	true,	// 30			59	
	true   // 31			60		
};

#endif

//############################################ ICCV Pottery A + B + C ############################################//
#ifdef POT_A_B_C
#define SHARD_NUMBER 21
#define NUM_MIXED_SHERD 3

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Pot_A_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_C_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_C_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_C_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_C_Piece_04_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Pot_A_Piece_01_Mesh.obj",
	path + "Mesh/Pot_A_Piece_02_Mesh.obj",
	path + "Mesh/Pot_A_Piece_03_Mesh.obj",
	path + "Mesh/Pot_A_Piece_04_Mesh.obj",
	path + "Mesh/Pot_A_Piece_05_Mesh.obj",
	path + "Mesh/Pot_A_Piece_06_Mesh.obj",
	path + "Mesh/Pot_A_Piece_07_Mesh.obj",
	path + "Mesh/Pot_A_Piece_08_Mesh.obj",
	path + "Mesh/Pot_B_Piece_01_Mesh.obj",
	path + "Mesh/Pot_B_Piece_02_Mesh.obj",
	path + "Mesh/Pot_B_Piece_03_Mesh.obj",
	path + "Mesh/Pot_B_Piece_04_Mesh.obj",
	path + "Mesh/Pot_B_Piece_05_Mesh.obj",
	path + "Mesh/Pot_B_Piece_06_Mesh.obj",
	path + "Mesh/Pot_B_Piece_07_Mesh.obj",
	path + "Mesh/Pot_B_Piece_08_Mesh.obj",
	path + "Mesh/Pot_B_Piece_09_Mesh.obj",
	path + "Mesh/Pot_C_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_C_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_C_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_C_Piece_04_Mesh_DS.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Pot_A_Piece_01_Axis.xyz",
	path + "Axes/Pot_A_Piece_02_Axis.xyz",
	path + "Axes/Pot_A_Piece_03_Axis.xyz",
	path + "Axes/Pot_A_Piece_04_Axis.xyz",
	path + "Axes/Pot_A_Piece_05_Axis.xyz",
	path + "Axes/Pot_A_Piece_06_Axis.xyz",
	path + "Axes/Pot_A_Piece_07_Axis.xyz",
	path + "Axes/Pot_A_Piece_08_Axis.xyz",
	path + "Axes/Pot_B_Piece_01_Axis.xyz",
	path + "Axes/Pot_B_Piece_02_Axis.xyz",
	path + "Axes/Pot_B_Piece_03_Axis.xyz",
	path + "Axes/Pot_B_Piece_04_Axis.xyz",
	path + "Axes/Pot_B_Piece_05_Axis.xyz",
	path + "Axes/Pot_B_Piece_06_Axis.xyz",
	path + "Axes/Pot_B_Piece_07_Axis.xyz",
	path + "Axes/Pot_B_Piece_08_Axis.xyz",
	path + "Axes/Pot_B_Piece_09_Axis.xyz",
	path + "Axes/Pot_C_Piece_01_Axis.xyz",
	path + "Axes/Pot_C_Piece_02_Axis.xyz",
	path + "Axes/Pot_C_Piece_03_Axis.xyz",
	path + "Axes/Pot_C_Piece_04_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Pot_A_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_C_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_C_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_C_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_C_Piece_04_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Pot_A_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_C_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_C_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_C_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_C_Piece_04_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Pot_A_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_09_Surface_F.pcd",
	path + "Surfaces/Pot_C_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_C_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_C_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_C_Piece_04_Surface_F.pcd"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Pot_A_Piece_1_T.txt",
	path + "Ground Truth/Pot_A_Piece_2_T.txt",
	path + "Ground Truth/Pot_A_Piece_3_T.txt",
	path + "Ground Truth/Pot_A_Piece_4_T.txt",
	path + "Ground Truth/Pot_A_Piece_5_T.txt",
	path + "Ground Truth/Pot_A_Piece_6_T.txt",
	path + "Ground Truth/Pot_A_Piece_7_T.txt",
	path + "Ground Truth/Pot_A_Piece_8_T.txt",
	path + "Ground Truth/Pot_B_Piece_1_T.txt",
	path + "Ground Truth/Pot_B_Piece_2_T.txt",
	path + "Ground Truth/Pot_B_Piece_3_T.txt",
	path + "Ground Truth/Pot_B_Piece_4_T.txt",
	path + "Ground Truth/Pot_B_Piece_5_T.txt",
	path + "Ground Truth/Pot_B_Piece_6_T.txt",
	path + "Ground Truth/Pot_B_Piece_7_T.txt",
	path + "Ground Truth/Pot_B_Piece_8_T.txt",
	path + "Ground Truth/Pot_B_Piece_9_T.txt",
	path + "Ground Truth/Pot_C_Piece_1_T.txt",
	path + "Ground Truth/Pot_C_Piece_2_T.txt",
	path + "Ground Truth/Pot_C_Piece_3_T.txt",
	path + "Ground Truth/Pot_C_Piece_4_T.txt",
};

string gt_graph_path[3] = {
	path + "Ground Truth/Pot_A_simple_graph.txt",
	path + "Ground Truth/Pot_B_simple_graph.txt",
	path + "Ground Truth/Pot_C_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1	PotA
	true,   // 2 
	true,	// 3 
	true,   // 4 
	true,   // 5 
	true,   // 6 
	true,   // 7	
	true,   // 8	
	true,	// 1	PotB
	true,	// 2
	true,	// 3
	true,	// 4
	true,	// 5
	true,	// 6
	true,	// 7
	true,	// 8
	true,	// 9
	true,	// 1	PotC		
	true,   // 2					
	true,	// 3					
	true	// 4					
};
#endif

//############################################ ICCV Pottery D I ############################################//
#ifdef POT_E_I
#define SHARD_NUMBER 61
#define NUM_MIXED_SHERD 2

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Pot_E_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_11_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_12_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_13_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_14_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_15_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_16_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_17_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_18_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_19_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_20_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_21_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_22_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_23_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_24_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_25_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_26_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_27_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_28_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_29_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_30_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_31_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_11_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_12_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_13_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_14_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_15_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_16_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_17_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_18_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_19_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_20_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_21_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_22_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_23_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_24_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_25_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_26_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_27_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_28_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_29_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_30_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Pot_E_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_08_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_09_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_10_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_11_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_12_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_13_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_14_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_15_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_16_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_17_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_18_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_19_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_20_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_21_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_22_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_23_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_24_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_25_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_26_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_27_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_28_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_29_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_30_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_31_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_08_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_09_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_10_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_11_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_12_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_13_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_14_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_15_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_16_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_17_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_18_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_19_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_20_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_21_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_22_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_23_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_24_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_25_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_26_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_27_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_28_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_29_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_30_Mesh_DS.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Pot_E_Piece_01_Axis.xyz",
	path + "Axes/Pot_E_Piece_02_Axis.xyz",
	path + "Axes/Pot_E_Piece_03_Axis.xyz",
	path + "Axes/Pot_E_Piece_04_Axis.xyz",
	path + "Axes/Pot_E_Piece_05_Axis.xyz",
	path + "Axes/Pot_E_Piece_06_Axis.xyz",
	path + "Axes/Pot_E_Piece_07_Axis.xyz",
	path + "Axes/Pot_E_Piece_08_Axis.xyz",
	path + "Axes/Pot_E_Piece_09_Axis.xyz",
	path + "Axes/Pot_E_Piece_10_Axis.xyz",
	path + "Axes/Pot_E_Piece_11_Axis.xyz",
	path + "Axes/Pot_E_Piece_12_Axis.xyz",
	path + "Axes/Pot_E_Piece_13_Axis.xyz",
	path + "Axes/Pot_E_Piece_14_Axis.xyz",
	path + "Axes/Pot_E_Piece_15_Axis.xyz",
	path + "Axes/Pot_E_Piece_16_Axis.xyz",
	path + "Axes/Pot_E_Piece_17_Axis.xyz",
	path + "Axes/Pot_E_Piece_18_Axis.xyz",
	path + "Axes/Pot_E_Piece_19_Axis.xyz",
	path + "Axes/Pot_E_Piece_20_Axis.xyz",
	path + "Axes/Pot_E_Piece_21_Axis.xyz",
	path + "Axes/Pot_E_Piece_22_Axis.xyz",
	path + "Axes/Pot_E_Piece_23_Axis.xyz",
	path + "Axes/Pot_E_Piece_24_Axis.xyz",
	path + "Axes/Pot_E_Piece_25_Axis.xyz",
	path + "Axes/Pot_E_Piece_26_Axis.xyz",
	path + "Axes/Pot_E_Piece_27_Axis.xyz",
	path + "Axes/Pot_E_Piece_28_Axis.xyz",
	path + "Axes/Pot_E_Piece_29_Axis.xyz",
	path + "Axes/Pot_E_Piece_30_Axis.xyz",
	path + "Axes/Pot_E_Piece_31_Axis.xyz",
	path + "Axes/Pot_I_Piece_01_Axis.xyz",
	path + "Axes/Pot_I_Piece_02_Axis.xyz",
	path + "Axes/Pot_I_Piece_03_Axis.xyz",
	path + "Axes/Pot_I_Piece_04_Axis.xyz",
	path + "Axes/Pot_I_Piece_05_Axis.xyz",
	path + "Axes/Pot_I_Piece_06_Axis.xyz",
	path + "Axes/Pot_I_Piece_07_Axis.xyz",
	path + "Axes/Pot_I_Piece_08_Axis.xyz",
	path + "Axes/Pot_I_Piece_09_Axis.xyz",
	path + "Axes/Pot_I_Piece_10_Axis.xyz",
	path + "Axes/Pot_I_Piece_11_Axis.xyz",
	path + "Axes/Pot_I_Piece_12_Axis.xyz",
	path + "Axes/Pot_I_Piece_13_Axis.xyz",
	path + "Axes/Pot_I_Piece_14_Axis.xyz",
	path + "Axes/Pot_I_Piece_15_Axis.xyz",
	path + "Axes/Pot_I_Piece_16_Axis.xyz",
	path + "Axes/Pot_I_Piece_17_Axis.xyz",
	path + "Axes/Pot_I_Piece_18_Axis.xyz",
	path + "Axes/Pot_I_Piece_19_Axis.xyz",
	path + "Axes/Pot_I_Piece_20_Axis.xyz",
	path + "Axes/Pot_I_Piece_21_Axis.xyz",
	path + "Axes/Pot_I_Piece_22_Axis.xyz",
	path + "Axes/Pot_I_Piece_23_Axis.xyz",
	path + "Axes/Pot_I_Piece_24_Axis.xyz",
	path + "Axes/Pot_I_Piece_25_Axis.xyz",
	path + "Axes/Pot_I_Piece_26_Axis.xyz",
	path + "Axes/Pot_I_Piece_27_Axis.xyz",
	path + "Axes/Pot_I_Piece_28_Axis.xyz",
	path + "Axes/Pot_I_Piece_29_Axis.xyz",
	path + "Axes/Pot_I_Piece_30_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Pot_E_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_10_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_11_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_12_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_13_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_14_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_15_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_16_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_17_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_18_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_19_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_20_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_21_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_22_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_23_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_24_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_25_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_26_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_27_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_28_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_29_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_30_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_31_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_10_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_11_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_12_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_13_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_14_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_15_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_16_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_17_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_18_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_19_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_20_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_21_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_22_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_23_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_24_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_25_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_26_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_27_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_28_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_29_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_30_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Pot_E_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_10_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_11_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_12_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_13_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_14_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_15_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_16_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_17_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_18_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_19_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_20_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_21_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_22_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_23_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_24_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_25_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_26_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_27_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_28_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_29_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_30_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_31_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_10_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_11_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_12_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_13_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_14_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_15_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_16_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_17_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_18_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_19_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_20_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_21_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_22_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_23_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_24_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_25_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_26_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_27_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_28_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_29_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_30_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Pot_E_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_09_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_10_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_11_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_12_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_13_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_14_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_15_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_16_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_17_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_18_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_19_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_20_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_21_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_22_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_23_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_24_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_25_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_26_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_27_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_28_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_29_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_30_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_31_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_09_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_10_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_11_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_12_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_13_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_14_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_15_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_16_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_17_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_18_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_19_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_20_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_21_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_22_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_23_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_24_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_25_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_26_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_27_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_28_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_29_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_30_Surface_F.pcd"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Pot_E_Piece_1_T.txt",
	path + "Ground Truth/Pot_E_Piece_2_T.txt",
	path + "Ground Truth/Pot_E_Piece_3_T.txt",
	path + "Ground Truth/Pot_E_Piece_4_T.txt",
	path + "Ground Truth/Pot_E_Piece_5_T.txt",
	path + "Ground Truth/Pot_E_Piece_6_T.txt",
	path + "Ground Truth/Pot_E_Piece_7_T.txt",
	path + "Ground Truth/Pot_E_Piece_8_T.txt",
	path + "Ground Truth/Pot_E_Piece_9_T.txt",
	path + "Ground Truth/Pot_E_Piece_10_T.txt",
	path + "Ground Truth/Pot_E_Piece_11_T.txt",
	path + "Ground Truth/Pot_E_Piece_12_T.txt",
	path + "Ground Truth/Pot_E_Piece_13_T.txt",
	path + "Ground Truth/Pot_E_Piece_14_T.txt",
	path + "Ground Truth/Pot_E_Piece_15_T.txt",
	path + "Ground Truth/Pot_E_Piece_16_T.txt",
	path + "Ground Truth/Pot_E_Piece_17_T.txt",
	path + "Ground Truth/Pot_E_Piece_18_T.txt",
	path + "Ground Truth/Pot_E_Piece_19_T.txt",
	path + "Ground Truth/Pot_E_Piece_20_T.txt",
	path + "Ground Truth/Pot_E_Piece_21_T.txt",
	path + "Ground Truth/Pot_E_Piece_22_T.txt",
	path + "Ground Truth/Pot_E_Piece_23_T.txt",
	path + "Ground Truth/Pot_E_Piece_24_T.txt",
	path + "Ground Truth/Pot_E_Piece_25_T.txt",
	path + "Ground Truth/Pot_E_Piece_26_T.txt",
	path + "Ground Truth/Pot_E_Piece_27_T.txt",
	path + "Ground Truth/Pot_E_Piece_28_T.txt",
	path + "Ground Truth/Pot_E_Piece_29_T.txt",
	path + "Ground Truth/Pot_E_Piece_30_T.txt",
	path + "Ground Truth/Pot_E_Piece_31_T.txt",
	path + "Ground Truth/Pot_I_Piece_1_T.txt",
	path + "Ground Truth/Pot_I_Piece_2_T.txt",
	path + "Ground Truth/Pot_I_Piece_3_T.txt",
	path + "Ground Truth/Pot_I_Piece_4_T.txt",
	path + "Ground Truth/Pot_I_Piece_5_T.txt",
	path + "Ground Truth/Pot_I_Piece_6_T.txt",
	path + "Ground Truth/Pot_I_Piece_7_T.txt",
	path + "Ground Truth/Pot_I_Piece_8_T.txt",
	path + "Ground Truth/Pot_I_Piece_9_T.txt",
	path + "Ground Truth/Pot_I_Piece_10_T.txt",
	path + "Ground Truth/Pot_I_Piece_11_T.txt",
	path + "Ground Truth/Pot_I_Piece_12_T.txt",
	path + "Ground Truth/Pot_I_Piece_13_T.txt",
	path + "Ground Truth/Pot_I_Piece_14_T.txt",
	path + "Ground Truth/Pot_I_Piece_15_T.txt",
	path + "Ground Truth/Pot_I_Piece_16_T.txt",
	path + "Ground Truth/Pot_I_Piece_17_T.txt",
	path + "Ground Truth/Pot_I_Piece_18_T.txt",
	path + "Ground Truth/Pot_I_Piece_19_T.txt",
	path + "Ground Truth/Pot_I_Piece_20_T.txt",
	path + "Ground Truth/Pot_I_Piece_21_T.txt",
	path + "Ground Truth/Pot_I_Piece_22_T.txt",
	path + "Ground Truth/Pot_I_Piece_23_T.txt",
	path + "Ground Truth/Pot_I_Piece_24_T.txt",
	path + "Ground Truth/Pot_I_Piece_25_T.txt",
	path + "Ground Truth/Pot_I_Piece_26_T.txt",
	path + "Ground Truth/Pot_I_Piece_27_T.txt",
	path + "Ground Truth/Pot_I_Piece_28_T.txt",
	path + "Ground Truth/Pot_I_Piece_29_T.txt",
	path + "Ground Truth/Pot_I_Piece_30_T.txt"
};

string gt_graph_path[NUM_MIXED_SHERD] = {
	path + "Ground Truth/Pot_E_simple_graph.txt",
	path + "Ground Truth/Pot_I_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1	Pot E		1	
	true,   // 2				2	
	true,	// 3				3	
	true,   // 4				4	
	true,   // 5				5	
	true,   // 6				6	
	true,   // 7				7	
	true,   // 8				8	
	true,   // 9				9	
	true,   // 10				10	
	true,   // 11				11		
	true,	// 12				12	
	true,   // 13				13	
	true,	// 14				14	
	true,   // 15				15	
	true,   // 16				16	
	true,   // 17				17	
	true,   // 18				18	
	true,   // 19				19	
	true,   // 20				20	
	true,   // 21				21	
	true,   // 22				22	
	true,   // 23				23	
	true,   // 24				24	
	true,   // 25				25	
	true,   // 26				26	
	true,   // 27				27	
	true,	// 28				28	
	true,   // 29				29	
	true,	// 30				30	
	true,   // 31				31	
	true,	// 1	Pot I		32
	true,   // 2				33
	true,	// 3 -				34
	true,   // 4				35
	true,   // 5				36
	true,   // 6				37
	true,   // 7				38
	true,   // 8				39
	true,	// 9 -				40
	true,   // 10				41
	true,   // 11				42
	true,   // 12				43
	true,   // 13				44
	true,	// 14				45
	true,   // 15				46
	true,	// 16-				47
	true,   // 17				48
	true,   // 18				49
	true,   // 19				50
	true,   // 20				51
	true,   // 21				52
	true,	// 22				53
	true,   // 23				54
	true,   // 24				55
	true,   // 25				56
	true,   // 26				57
	true,	// 27				58
	true,   // 28				59
	true,   // 29				60
	true    // 30				61
};

#endif


//############################################ Pottery CJ ############################################//
#ifdef POT_C_J
#define SHARD_NUMBER 23
#define NUM_MIXED_SHERD 2

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Pot_C_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_C_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_C_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_C_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_11_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_12_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Pot_C_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_C_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_C_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_C_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_08_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_09_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_10_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_11_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_12_Mesh_DS.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Pot_C_Piece_01_Axis.xyz",
	path + "Axes/Pot_C_Piece_02_Axis.xyz",
	path + "Axes/Pot_C_Piece_03_Axis.xyz",
	path + "Axes/Pot_C_Piece_04_Axis.xyz",
	path + "Axes/Pot_J_Piece_01_Axis.xyz",
	path + "Axes/Pot_J_Piece_02_Axis.xyz",
	path + "Axes/Pot_J_Piece_03_Axis.xyz",
	path + "Axes/Pot_J_Piece_04_Axis.xyz",
	path + "Axes/Pot_J_Piece_05_Axis.xyz",
	path + "Axes/Pot_J_Piece_06_Axis.xyz",
	path + "Axes/Pot_J_Piece_07_Axis.xyz",
	path + "Axes/Pot_J_Piece_08_Axis.xyz",
	path + "Axes/Pot_J_Piece_09_Axis.xyz",
	path + "Axes/Pot_J_Piece_10_Axis.xyz",
	path + "Axes/Pot_J_Piece_11_Axis.xyz",
	path + "Axes/Pot_J_Piece_12_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Pot_C_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_C_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_C_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_C_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_10_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_11_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_12_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Pot_C_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_C_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_C_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_C_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_10_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_11_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_12_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Pot_C_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_C_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_C_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_C_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_09_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_10_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_11_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_12_Surface_F.pcd"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Pot_C_Piece_1_T.txt",
	path + "Ground Truth/Pot_C_Piece_2_T.txt",
	path + "Ground Truth/Pot_C_Piece_3_T.txt",
	path + "Ground Truth/Pot_C_Piece_4_T.txt",
	path + "Ground Truth/Pot_J_Piece_1_T.txt",
	path + "Ground Truth/Pot_J_Piece_2_T.txt",
	path + "Ground Truth/Pot_J_Piece_3_T.txt",
	path + "Ground Truth/Pot_J_Piece_4_T.txt",
	path + "Ground Truth/Pot_J_Piece_5_T.txt",
	path + "Ground Truth/Pot_J_Piece_6_T.txt",
	path + "Ground Truth/Pot_J_Piece_7_T.txt",
	path + "Ground Truth/Pot_J_Piece_8_T.txt",
	path + "Ground Truth/Pot_J_Piece_9_T.txt",
	path + "Ground Truth/Pot_J_Piece_10_T.txt",
	path + "Ground Truth/Pot_J_Piece_11_T.txt",
	path + "Ground Truth/Pot_J_Piece_12_T.txt"
};

string gt_graph_path[2] = {
	path + "Ground Truth/Pot_C_simple_graph.txt",
	path + "Ground Truth/Pot_J_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1	
	true,   // 2	
	true,	// 3		
	true,	// 4		
	true,	// 1 
	true,   // 2 
	true,	// 3 -
	true,   // 4 
	true,   // 5 
	true,   // 6 
	true,   // 7 
	true,   // 8
	false,	// 9 -
	true,   // 10 
	true,   // 11
	true    // 12
};
#endif

//############################################  Pottery ABCDE ############################################//
#ifdef POT_A_B_C_D_E
#define SHARD_NUMBER 81
#define NUM_MIXED_SHERD 5

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Pot_A_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_11_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_12_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_13_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_14_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_15_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_16_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_17_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_18_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_19_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_20_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_21_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_22_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_23_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_24_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_25_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_26_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_27_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_28_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_29_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_11_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_12_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_13_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_14_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_15_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_16_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_17_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_18_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_19_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_20_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_21_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_22_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_23_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_24_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_25_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_26_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_27_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_28_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_29_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_30_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_31_Breakline_0.pcd",
	path + "Breaklines/Pot_C_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_C_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_C_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_C_Piece_04_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Pot_A_Piece_01_Mesh.obj",
	path + "Mesh/Pot_A_Piece_02_Mesh.obj",
	path + "Mesh/Pot_A_Piece_03_Mesh.obj",
	path + "Mesh/Pot_A_Piece_04_Mesh.obj",
	path + "Mesh/Pot_A_Piece_05_Mesh.obj",
	path + "Mesh/Pot_A_Piece_06_Mesh.obj",
	path + "Mesh/Pot_A_Piece_07_Mesh.obj",
	path + "Mesh/Pot_A_Piece_08_Mesh.obj",
	path + "Mesh/Pot_B_Piece_01_Mesh.obj",
	path + "Mesh/Pot_B_Piece_02_Mesh.obj",
	path + "Mesh/Pot_B_Piece_03_Mesh.obj",
	path + "Mesh/Pot_B_Piece_04_Mesh.obj",
	path + "Mesh/Pot_B_Piece_05_Mesh.obj",
	path + "Mesh/Pot_B_Piece_06_Mesh.obj",
	path + "Mesh/Pot_B_Piece_07_Mesh.obj",
	path + "Mesh/Pot_B_Piece_08_Mesh.obj",
	path + "Mesh/Pot_B_Piece_09_Mesh.obj",
	path + "Mesh/Pot_D_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_08_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_09_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_10_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_11_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_12_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_13_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_14_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_15_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_16_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_17_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_18_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_19_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_20_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_21_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_22_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_23_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_24_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_25_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_26_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_27_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_28_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_29_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_08_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_09_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_10_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_11_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_12_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_13_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_14_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_15_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_16_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_17_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_18_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_19_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_20_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_21_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_22_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_23_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_24_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_25_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_26_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_27_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_28_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_29_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_30_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_31_Mesh_DS.obj",
	path + "Mesh/Pot_C_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_C_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_C_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_C_Piece_04_Mesh_DS.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Pot_A_Piece_01_Axis.xyz",
	path + "Axes/Pot_A_Piece_02_Axis.xyz",
	path + "Axes/Pot_A_Piece_03_Axis.xyz",
	path + "Axes/Pot_A_Piece_04_Axis.xyz",
	path + "Axes/Pot_A_Piece_05_Axis.xyz",
	path + "Axes/Pot_A_Piece_06_Axis.xyz",
	path + "Axes/Pot_A_Piece_07_Axis.xyz",
	path + "Axes/Pot_A_Piece_08_Axis.xyz",
	path + "Axes/Pot_B_Piece_01_Axis.xyz",
	path + "Axes/Pot_B_Piece_02_Axis.xyz",
	path + "Axes/Pot_B_Piece_03_Axis.xyz",
	path + "Axes/Pot_B_Piece_04_Axis.xyz",
	path + "Axes/Pot_B_Piece_05_Axis.xyz",
	path + "Axes/Pot_B_Piece_06_Axis.xyz",
	path + "Axes/Pot_B_Piece_07_Axis.xyz",
	path + "Axes/Pot_B_Piece_08_Axis.xyz",
	path + "Axes/Pot_B_Piece_09_Axis.xyz",
	path + "Axes/Pot_D_Piece_01_Axis.xyz",
	path + "Axes/Pot_D_Piece_02_Axis.xyz",
	path + "Axes/Pot_D_Piece_03_Axis.xyz",
	path + "Axes/Pot_D_Piece_04_Axis.xyz",
	path + "Axes/Pot_D_Piece_05_Axis.xyz",
	path + "Axes/Pot_D_Piece_06_Axis.xyz",
	path + "Axes/Pot_D_Piece_07_Axis.xyz",
	path + "Axes/Pot_D_Piece_08_Axis.xyz",
	path + "Axes/Pot_D_Piece_09_Axis.xyz",
	path + "Axes/Pot_D_Piece_10_Axis.xyz",
	path + "Axes/Pot_D_Piece_11_Axis.xyz",
	path + "Axes/Pot_D_Piece_12_Axis.xyz",
	path + "Axes/Pot_D_Piece_13_Axis.xyz",
	path + "Axes/Pot_D_Piece_14_Axis.xyz",
	path + "Axes/Pot_D_Piece_15_Axis.xyz",
	path + "Axes/Pot_D_Piece_16_Axis.xyz",
	path + "Axes/Pot_D_Piece_17_Axis.xyz",
	path + "Axes/Pot_D_Piece_18_Axis.xyz",
	path + "Axes/Pot_D_Piece_19_Axis.xyz",
	path + "Axes/Pot_D_Piece_20_Axis.xyz",
	path + "Axes/Pot_D_Piece_21_Axis.xyz",
	path + "Axes/Pot_D_Piece_22_Axis.xyz",
	path + "Axes/Pot_D_Piece_23_Axis.xyz",
	path + "Axes/Pot_D_Piece_24_Axis.xyz",
	path + "Axes/Pot_D_Piece_25_Axis.xyz",
	path + "Axes/Pot_D_Piece_26_Axis.xyz",
	path + "Axes/Pot_D_Piece_27_Axis.xyz",
	path + "Axes/Pot_D_Piece_28_Axis.xyz",
	path + "Axes/Pot_D_Piece_29_Axis.xyz",
	path + "Axes/Pot_E_Piece_01_Axis.xyz",
	path + "Axes/Pot_E_Piece_02_Axis.xyz",
	path + "Axes/Pot_E_Piece_03_Axis.xyz",
	path + "Axes/Pot_E_Piece_04_Axis.xyz",
	path + "Axes/Pot_E_Piece_05_Axis.xyz",
	path + "Axes/Pot_E_Piece_06_Axis.xyz",
	path + "Axes/Pot_E_Piece_07_Axis.xyz",
	path + "Axes/Pot_E_Piece_08_Axis.xyz",
	path + "Axes/Pot_E_Piece_09_Axis.xyz",
	path + "Axes/Pot_E_Piece_10_Axis.xyz",
	path + "Axes/Pot_E_Piece_11_Axis.xyz",
	path + "Axes/Pot_E_Piece_12_Axis.xyz",
	path + "Axes/Pot_E_Piece_13_Axis.xyz",
	path + "Axes/Pot_E_Piece_14_Axis.xyz",
	path + "Axes/Pot_E_Piece_15_Axis.xyz",
	path + "Axes/Pot_E_Piece_16_Axis.xyz",
	path + "Axes/Pot_E_Piece_17_Axis.xyz",
	path + "Axes/Pot_E_Piece_18_Axis.xyz",
	path + "Axes/Pot_E_Piece_19_Axis.xyz",
	path + "Axes/Pot_E_Piece_20_Axis.xyz",
	path + "Axes/Pot_E_Piece_21_Axis.xyz",
	path + "Axes/Pot_E_Piece_22_Axis.xyz",
	path + "Axes/Pot_E_Piece_23_Axis.xyz",
	path + "Axes/Pot_E_Piece_24_Axis.xyz",
	path + "Axes/Pot_E_Piece_25_Axis.xyz",
	path + "Axes/Pot_E_Piece_26_Axis.xyz",
	path + "Axes/Pot_E_Piece_27_Axis.xyz",
	path + "Axes/Pot_E_Piece_28_Axis.xyz",
	path + "Axes/Pot_E_Piece_29_Axis.xyz",
	path + "Axes/Pot_E_Piece_30_Axis.xyz",
	path + "Axes/Pot_E_Piece_31_Axis.xyz",
	path + "Axes/Pot_C_Piece_01_Axis.xyz",
	path + "Axes/Pot_C_Piece_02_Axis.xyz",
	path + "Axes/Pot_C_Piece_03_Axis.xyz",
	path + "Axes/Pot_C_Piece_04_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Pot_A_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_10_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_11_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_12_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_13_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_14_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_15_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_16_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_17_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_18_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_19_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_20_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_21_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_22_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_23_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_24_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_25_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_26_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_27_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_28_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_29_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_10_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_11_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_12_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_13_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_14_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_15_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_16_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_17_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_18_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_19_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_20_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_21_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_22_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_23_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_24_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_25_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_26_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_27_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_28_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_29_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_30_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_31_Surface_0.xyz",
	path + "Surfaces/Pot_C_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_C_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_C_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_C_Piece_04_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Pot_A_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_10_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_11_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_12_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_13_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_14_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_15_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_16_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_17_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_18_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_19_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_20_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_21_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_22_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_23_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_24_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_25_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_26_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_27_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_28_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_29_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_10_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_11_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_12_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_13_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_14_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_15_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_16_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_17_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_18_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_19_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_20_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_21_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_22_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_23_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_24_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_25_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_26_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_27_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_28_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_29_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_30_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_31_Surface_1.xyz",
	path + "Surfaces/Pot_C_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_C_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_C_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_C_Piece_04_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Pot_A_Piece_01_Surface_2.pcd",
	path + "Surfaces/Pot_A_Piece_02_Surface_2.pcd",
	path + "Surfaces/Pot_A_Piece_03_Surface_2.pcd",
	path + "Surfaces/Pot_A_Piece_04_Surface_2.pcd",
	path + "Surfaces/Pot_A_Piece_05_Surface_2.pcd",
	path + "Surfaces/Pot_A_Piece_06_Surface_2.pcd",
	path + "Surfaces/Pot_A_Piece_07_Surface_2.pcd",
	path + "Surfaces/Pot_A_Piece_08_Surface_2.pcd",
	path + "Surfaces/Pot_B_Piece_01_Surface_2.pcd",
	path + "Surfaces/Pot_B_Piece_02_Surface_2.pcd",
	path + "Surfaces/Pot_B_Piece_03_Surface_2.pcd",
	path + "Surfaces/Pot_B_Piece_04_Surface_2.pcd",
	path + "Surfaces/Pot_B_Piece_05_Surface_2.pcd",
	path + "Surfaces/Pot_B_Piece_06_Surface_2.pcd",
	path + "Surfaces/Pot_B_Piece_07_Surface_2.pcd",
	path + "Surfaces/Pot_B_Piece_08_Surface_2.pcd",
	path + "Surfaces/Pot_B_Piece_09_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_01_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_02_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_03_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_04_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_05_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_06_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_07_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_08_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_09_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_10_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_11_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_12_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_13_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_14_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_15_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_16_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_17_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_18_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_19_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_20_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_21_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_22_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_23_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_24_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_25_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_26_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_27_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_28_Surface_2.pcd",
	path + "Surfaces/Pot_D_Piece_29_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_01_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_02_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_03_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_04_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_05_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_06_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_07_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_08_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_09_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_10_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_11_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_12_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_13_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_14_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_15_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_16_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_17_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_18_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_19_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_20_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_21_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_22_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_23_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_24_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_25_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_26_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_27_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_28_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_29_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_30_Surface_2.pcd",
	path + "Surfaces/Pot_E_Piece_31_Surface_2.pcd",
	path + "Surfaces/Pot_C_Piece_01_Surface_2.pcd",
	path + "Surfaces/Pot_C_Piece_02_Surface_2.pcd",
	path + "Surfaces/Pot_C_Piece_03_Surface_2.pcd",
	path + "Surfaces/Pot_C_Piece_04_Surface_2.pcd"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Pot_A_Piece_1_T.txt",
	path + "Ground Truth/Pot_A_Piece_2_T.txt",
	path + "Ground Truth/Pot_A_Piece_3_T.txt",
	path + "Ground Truth/Pot_A_Piece_4_T.txt",
	path + "Ground Truth/Pot_A_Piece_5_T.txt",
	path + "Ground Truth/Pot_A_Piece_6_T.txt",
	path + "Ground Truth/Pot_A_Piece_7_T.txt",
	path + "Ground Truth/Pot_A_Piece_8_T.txt",
	path + "Ground Truth/Pot_B_Piece_1_T.txt",
	path + "Ground Truth/Pot_B_Piece_2_T.txt",
	path + "Ground Truth/Pot_B_Piece_3_T.txt",
	path + "Ground Truth/Pot_B_Piece_4_T.txt",
	path + "Ground Truth/Pot_B_Piece_5_T.txt",
	path + "Ground Truth/Pot_B_Piece_6_T.txt",
	path + "Ground Truth/Pot_B_Piece_7_T.txt",
	path + "Ground Truth/Pot_B_Piece_8_T.txt",
	path + "Ground Truth/Pot_B_Piece_9_T.txt",
	path + "Ground Truth/Pot_D_Piece_1_T.txt",
	path + "Ground Truth/Pot_D_Piece_2_T.txt",
	path + "Ground Truth/Pot_D_Piece_3_T.txt",
	path + "Ground Truth/Pot_D_Piece_4_T.txt",
	path + "Ground Truth/Pot_D_Piece_5_T.txt",
	path + "Ground Truth/Pot_D_Piece_6_T.txt",
	path + "Ground Truth/Pot_D_Piece_7_T.txt",
	path + "Ground Truth/Pot_D_Piece_8_T.txt",
	path + "Ground Truth/Pot_D_Piece_9_T.txt",
	path + "Ground Truth/Pot_D_Piece_10_T.txt",
	path + "Ground Truth/Pot_D_Piece_11_T.txt",
	path + "Ground Truth/Pot_D_Piece_12_T.txt",
	path + "Ground Truth/Pot_D_Piece_13_T.txt",
	path + "Ground Truth/Pot_D_Piece_14_T.txt",
	path + "Ground Truth/Pot_D_Piece_15_T.txt",
	path + "Ground Truth/Pot_D_Piece_16_T.txt",
	path + "Ground Truth/Pot_D_Piece_17_T.txt",
	path + "Ground Truth/Pot_D_Piece_18_T.txt",
	path + "Ground Truth/Pot_D_Piece_19_T.txt",
	path + "Ground Truth/Pot_D_Piece_20_T.txt",
	path + "Ground Truth/Pot_D_Piece_21_T.txt",
	path + "Ground Truth/Pot_D_Piece_22_T.txt",
	path + "Ground Truth/Pot_D_Piece_23_T.txt",
	path + "Ground Truth/Pot_D_Piece_24_T.txt",
	path + "Ground Truth/Pot_D_Piece_25_T.txt",
	path + "Ground Truth/Pot_D_Piece_26_T.txt",
	path + "Ground Truth/Pot_D_Piece_27_T.txt",
	path + "Ground Truth/Pot_D_Piece_28_T.txt",
	path + "Ground Truth/Pot_D_Piece_29_T.txt",
	path + "Ground Truth/Pot_E_Piece_1_T.txt",
	path + "Ground Truth/Pot_E_Piece_2_T.txt",
	path + "Ground Truth/Pot_E_Piece_3_T.txt",
	path + "Ground Truth/Pot_E_Piece_4_T.txt",
	path + "Ground Truth/Pot_E_Piece_5_T.txt",
	path + "Ground Truth/Pot_E_Piece_6_T.txt",
	path + "Ground Truth/Pot_E_Piece_7_T.txt",
	path + "Ground Truth/Pot_E_Piece_8_T.txt",
	path + "Ground Truth/Pot_E_Piece_9_T.txt",
	path + "Ground Truth/Pot_E_Piece_10_T.txt",
	path + "Ground Truth/Pot_E_Piece_11_T.txt",
	path + "Ground Truth/Pot_E_Piece_12_T.txt",
	path + "Ground Truth/Pot_E_Piece_13_T.txt",
	path + "Ground Truth/Pot_E_Piece_14_T.txt",
	path + "Ground Truth/Pot_E_Piece_15_T.txt",
	path + "Ground Truth/Pot_E_Piece_16_T.txt",
	path + "Ground Truth/Pot_E_Piece_17_T.txt",
	path + "Ground Truth/Pot_E_Piece_18_T.txt",
	path + "Ground Truth/Pot_E_Piece_19_T.txt",
	path + "Ground Truth/Pot_E_Piece_20_T.txt",
	path + "Ground Truth/Pot_E_Piece_21_T.txt",
	path + "Ground Truth/Pot_E_Piece_22_T.txt",
	path + "Ground Truth/Pot_E_Piece_23_T.txt",
	path + "Ground Truth/Pot_E_Piece_24_T.txt",
	path + "Ground Truth/Pot_E_Piece_25_T.txt",
	path + "Ground Truth/Pot_E_Piece_26_T.txt",
	path + "Ground Truth/Pot_E_Piece_27_T.txt",
	path + "Ground Truth/Pot_E_Piece_28_T.txt",
	path + "Ground Truth/Pot_E_Piece_29_T.txt",
	path + "Ground Truth/Pot_E_Piece_30_T.txt",
	path + "Ground Truth/Pot_E_Piece_31_T.txt",
	path + "Ground Truth/Pot_C_Piece_1_T.txt",
	path + "Ground Truth/Pot_C_Piece_2_T.txt",
	path + "Ground Truth/Pot_C_Piece_3_T.txt",
	path + "Ground Truth/Pot_C_Piece_4_T.txt",
};

string gt_graph_path[5] = {
	path + "Ground Truth/Pot_A_simple_graph.txt",
	path + "Ground Truth/Pot_B_simple_graph.txt",
	path + "Ground Truth/Pot_D_simple_graph.txt",
	path + "Ground Truth/Pot_E_simple_graph.txt",
	path + "Ground Truth/Pot_C_simple_graph.txt",
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1	PotA		1
	true,   // 2				2
	true,	// 3 				3
	true,   // 4				4
	true,   // 5				5
	true,   // 6				6
	true,   // 7 				7
	true,   // 8				8
	true,	// 1	PotB		9
	true,	// 2				10
	true,	// 3				11
	true,	// 4				12
	true,	// 5				13
	true,	// 6				14		
	true,	// 7				15
	true,	// 8				16
	true,	// 9				17
	true,	// 1	PotD		18
	true,   // 2				19
	true,	// 3				20
	true,   // 4				21
	true,   // 5				22
	true,   // 6				23
	true,   // 7				24
	true,   // 8				25
	true,   // 9				26
	true,   // 10				27
	true,   // 11				28
	true,	// 12				29
	true,   // 13				30
	true,	// 14				31
	true,   // 15				32
	true,   // 16				33
	true,   // 17 				34
	true,   // 18				35
	true,   // 19				36
	true,   // 20				37	
	true,   // 21				38
	true,   // 22				39
	true,   // 23				40
	true,   // 24				41
	true,   // 25				42
	true,   // 26				43
	true,   // 27				44
	true,   // 28				45
	true,   // 29				46
	true,	// 1	PotE		47
	true,   // 2				48		
	true,	// 3				49
	true,   // 4				50
	true,   // 5				51
	true,   // 6				52	
	true,   // 7				53
	true,   // 8				54
	true,   // 9				55
	true,   // 10				56
	true,   // 11				57
	true,	// 12				58
	true,   // 13				59
	true,	// 14				60
	true,   // 15				61
	true,   // 16				62
	true,   // 17				63
	true,   // 18				64
	true,   // 19				65
	true,   // 20				66
	true,   // 21				67
	true,   // 22				68
	true,   // 23				69
	true,   // 24				70
	true,   // 25				71
	true,   // 26				72
	true,   // 27				73
	true,	// 28				74
	true,   // 29				75
	true,	// 30				76
	true,   // 31				77
	true,	// 1	PotC		78
	true,   // 2				79	
	true,	// 3				80
	true,   // 4				81
};

#endif

//############################################  Pottery All ############################################//
#ifdef POT_All
#define SHARD_NUMBER 148
#define NUM_MIXED_SHERD 10

string file_path[SHARD_NUMBER] = {
	path + "Breaklines/Pot_A_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_A_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_B_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_11_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_12_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_13_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_14_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_15_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_16_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_17_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_18_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_19_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_20_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_21_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_22_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_23_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_24_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_25_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_26_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_27_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_28_Breakline_0.pcd",
	path + "Breaklines/Pot_D_Piece_29_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_11_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_12_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_13_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_14_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_15_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_16_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_17_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_18_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_19_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_20_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_21_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_22_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_23_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_24_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_25_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_26_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_27_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_28_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_29_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_30_Breakline_0.pcd",
	path + "Breaklines/Pot_E_Piece_31_Breakline_0.pcd",
	path + "Breaklines/Pot_C_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_C_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_C_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_C_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_F_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_G_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Pot_H_Piece_11_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_11_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_12_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_13_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_14_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_15_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_16_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_17_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_18_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_19_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_20_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_21_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_22_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_23_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_24_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_25_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_26_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_27_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_28_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_29_Breakline_0.pcd",
	path + "Breaklines/Pot_I_Piece_30_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_01_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_02_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_03_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_04_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_05_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_06_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_07_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_08_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_09_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_10_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_11_Breakline_0.pcd",
	path + "Breaklines/Pot_J_Piece_12_Breakline_0.pcd"
};

string obj_path[SHARD_NUMBER] = {
	path + "Mesh/Pot_A_Piece_01_Mesh.obj",
	path + "Mesh/Pot_A_Piece_02_Mesh.obj",
	path + "Mesh/Pot_A_Piece_03_Mesh.obj",
	path + "Mesh/Pot_A_Piece_04_Mesh.obj",
	path + "Mesh/Pot_A_Piece_05_Mesh.obj",
	path + "Mesh/Pot_A_Piece_06_Mesh.obj",
	path + "Mesh/Pot_A_Piece_07_Mesh.obj",
	path + "Mesh/Pot_A_Piece_08_Mesh.obj",
	path + "Mesh/Pot_B_Piece_01_Mesh.obj",
	path + "Mesh/Pot_B_Piece_02_Mesh.obj",
	path + "Mesh/Pot_B_Piece_03_Mesh.obj",
	path + "Mesh/Pot_B_Piece_04_Mesh.obj",
	path + "Mesh/Pot_B_Piece_05_Mesh.obj",
	path + "Mesh/Pot_B_Piece_06_Mesh.obj",
	path + "Mesh/Pot_B_Piece_07_Mesh.obj",
	path + "Mesh/Pot_B_Piece_08_Mesh.obj",
	path + "Mesh/Pot_B_Piece_09_Mesh.obj",
	path + "Mesh/Pot_D_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_08_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_09_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_10_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_11_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_12_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_13_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_14_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_15_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_16_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_17_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_18_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_19_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_20_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_21_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_22_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_23_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_24_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_25_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_26_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_27_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_28_Mesh_DS.obj",
	path + "Mesh/Pot_D_Piece_29_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_08_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_09_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_10_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_11_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_12_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_13_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_14_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_15_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_16_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_17_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_18_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_19_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_20_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_21_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_22_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_23_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_24_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_25_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_26_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_27_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_28_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_29_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_30_Mesh_DS.obj",
	path + "Mesh/Pot_E_Piece_31_Mesh_DS.obj",
	path + "Mesh/Pot_C_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_C_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_C_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_C_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_F_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_F_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_F_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_F_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_F_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_F_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_F_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_G_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_08_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_09_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_10_Mesh_DS.obj",
	path + "Mesh/Pot_H_Piece_11_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_08_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_09_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_10_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_11_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_12_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_13_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_14_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_15_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_16_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_17_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_18_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_19_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_20_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_21_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_22_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_23_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_24_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_25_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_26_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_27_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_28_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_29_Mesh_DS.obj",
	path + "Mesh/Pot_I_Piece_30_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_01_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_02_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_03_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_04_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_05_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_06_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_07_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_08_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_09_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_10_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_11_Mesh_DS.obj",
	path + "Mesh/Pot_J_Piece_12_Mesh_DS.obj"
};

string axis_path[SHARD_NUMBER] = {
	path + "Axes/Pot_A_Piece_01_Axis.xyz",
	path + "Axes/Pot_A_Piece_02_Axis.xyz",
	path + "Axes/Pot_A_Piece_03_Axis.xyz",
	path + "Axes/Pot_A_Piece_04_Axis.xyz",
	path + "Axes/Pot_A_Piece_05_Axis.xyz",
	path + "Axes/Pot_A_Piece_06_Axis.xyz",
	path + "Axes/Pot_A_Piece_07_Axis.xyz",
	path + "Axes/Pot_A_Piece_08_Axis.xyz",
	path + "Axes/Pot_B_Piece_01_Axis.xyz",
	path + "Axes/Pot_B_Piece_02_Axis.xyz",
	path + "Axes/Pot_B_Piece_03_Axis.xyz",
	path + "Axes/Pot_B_Piece_04_Axis.xyz",
	path + "Axes/Pot_B_Piece_05_Axis.xyz",
	path + "Axes/Pot_B_Piece_06_Axis.xyz",
	path + "Axes/Pot_B_Piece_07_Axis.xyz",
	path + "Axes/Pot_B_Piece_08_Axis.xyz",
	path + "Axes/Pot_B_Piece_09_Axis.xyz",
	path + "Axes/Pot_D_Piece_01_Axis.xyz",
	path + "Axes/Pot_D_Piece_02_Axis.xyz",
	path + "Axes/Pot_D_Piece_03_Axis.xyz",
	path + "Axes/Pot_D_Piece_04_Axis.xyz",
	path + "Axes/Pot_D_Piece_05_Axis.xyz",
	path + "Axes/Pot_D_Piece_06_Axis.xyz",
	path + "Axes/Pot_D_Piece_07_Axis.xyz",
	path + "Axes/Pot_D_Piece_08_Axis.xyz",
	path + "Axes/Pot_D_Piece_09_Axis.xyz",
	path + "Axes/Pot_D_Piece_10_Axis.xyz",
	path + "Axes/Pot_D_Piece_11_Axis.xyz",
	path + "Axes/Pot_D_Piece_12_Axis.xyz",
	path + "Axes/Pot_D_Piece_13_Axis.xyz",
	path + "Axes/Pot_D_Piece_14_Axis.xyz",
	path + "Axes/Pot_D_Piece_15_Axis.xyz",
	path + "Axes/Pot_D_Piece_16_Axis.xyz",
	path + "Axes/Pot_D_Piece_17_Axis.xyz",
	path + "Axes/Pot_D_Piece_18_Axis.xyz",
	path + "Axes/Pot_D_Piece_19_Axis.xyz",
	path + "Axes/Pot_D_Piece_20_Axis.xyz",
	path + "Axes/Pot_D_Piece_21_Axis.xyz",
	path + "Axes/Pot_D_Piece_22_Axis.xyz",
	path + "Axes/Pot_D_Piece_23_Axis.xyz",
	path + "Axes/Pot_D_Piece_24_Axis.xyz",
	path + "Axes/Pot_D_Piece_25_Axis.xyz",
	path + "Axes/Pot_D_Piece_26_Axis.xyz",
	path + "Axes/Pot_D_Piece_27_Axis.xyz",
	path + "Axes/Pot_D_Piece_28_Axis.xyz",
	path + "Axes/Pot_D_Piece_29_Axis.xyz",
	path + "Axes/Pot_E_Piece_01_Axis.xyz",
	path + "Axes/Pot_E_Piece_02_Axis.xyz",
	path + "Axes/Pot_E_Piece_03_Axis.xyz",
	path + "Axes/Pot_E_Piece_04_Axis.xyz",
	path + "Axes/Pot_E_Piece_05_Axis.xyz",
	path + "Axes/Pot_E_Piece_06_Axis.xyz",
	path + "Axes/Pot_E_Piece_07_Axis.xyz",
	path + "Axes/Pot_E_Piece_08_Axis.xyz",
	path + "Axes/Pot_E_Piece_09_Axis.xyz",
	path + "Axes/Pot_E_Piece_10_Axis.xyz",
	path + "Axes/Pot_E_Piece_11_Axis.xyz",
	path + "Axes/Pot_E_Piece_12_Axis.xyz",
	path + "Axes/Pot_E_Piece_13_Axis.xyz",
	path + "Axes/Pot_E_Piece_14_Axis.xyz",
	path + "Axes/Pot_E_Piece_15_Axis.xyz",
	path + "Axes/Pot_E_Piece_16_Axis.xyz",
	path + "Axes/Pot_E_Piece_17_Axis.xyz",
	path + "Axes/Pot_E_Piece_18_Axis.xyz",
	path + "Axes/Pot_E_Piece_19_Axis.xyz",
	path + "Axes/Pot_E_Piece_20_Axis.xyz",
	path + "Axes/Pot_E_Piece_21_Axis.xyz",
	path + "Axes/Pot_E_Piece_22_Axis.xyz",
	path + "Axes/Pot_E_Piece_23_Axis.xyz",
	path + "Axes/Pot_E_Piece_24_Axis.xyz",
	path + "Axes/Pot_E_Piece_25_Axis.xyz",
	path + "Axes/Pot_E_Piece_26_Axis.xyz",
	path + "Axes/Pot_E_Piece_27_Axis.xyz",
	path + "Axes/Pot_E_Piece_28_Axis.xyz",
	path + "Axes/Pot_E_Piece_29_Axis.xyz",
	path + "Axes/Pot_E_Piece_30_Axis.xyz",
	path + "Axes/Pot_E_Piece_31_Axis.xyz",
	path + "Axes/Pot_C_Piece_01_Axis.xyz",
	path + "Axes/Pot_C_Piece_02_Axis.xyz",
	path + "Axes/Pot_C_Piece_03_Axis.xyz",
	path + "Axes/Pot_C_Piece_04_Axis.xyz",
	path + "Axes/Pot_F_Piece_01_Axis.xyz",
	path + "Axes/Pot_F_Piece_02_Axis.xyz",
	path + "Axes/Pot_F_Piece_03_Axis.xyz",
	path + "Axes/Pot_F_Piece_04_Axis.xyz",
	path + "Axes/Pot_F_Piece_05_Axis.xyz",
	path + "Axes/Pot_F_Piece_06_Axis.xyz",
	path + "Axes/Pot_F_Piece_07_Axis.xyz",
	path + "Axes/Pot_G_Piece_01_Axis.xyz",
	path + "Axes/Pot_G_Piece_02_Axis.xyz",
	path + "Axes/Pot_G_Piece_03_Axis.xyz",
	path + "Axes/Pot_G_Piece_04_Axis.xyz",
	path + "Axes/Pot_G_Piece_05_Axis.xyz",
	path + "Axes/Pot_G_Piece_06_Axis.xyz",
	path + "Axes/Pot_G_Piece_07_Axis.xyz",
	path + "Axes/Pot_H_Piece_01_Axis.xyz",
	path + "Axes/Pot_H_Piece_02_Axis.xyz",
	path + "Axes/Pot_H_Piece_03_Axis.xyz",
	path + "Axes/Pot_H_Piece_04_Axis.xyz",
	path + "Axes/Pot_H_Piece_05_Axis.xyz",
	path + "Axes/Pot_H_Piece_06_Axis.xyz",
	path + "Axes/Pot_H_Piece_07_Axis.xyz",
	path + "Axes/Pot_H_Piece_08_Axis.xyz",
	path + "Axes/Pot_H_Piece_09_Axis.xyz",
	path + "Axes/Pot_H_Piece_10_Axis.xyz",
	path + "Axes/Pot_H_Piece_11_Axis.xyz",
	path + "Axes/Pot_I_Piece_01_Axis.xyz",
	path + "Axes/Pot_I_Piece_02_Axis.xyz",
	path + "Axes/Pot_I_Piece_03_Axis.xyz",
	path + "Axes/Pot_I_Piece_04_Axis.xyz",
	path + "Axes/Pot_I_Piece_05_Axis.xyz",
	path + "Axes/Pot_I_Piece_06_Axis.xyz",
	path + "Axes/Pot_I_Piece_07_Axis.xyz",
	path + "Axes/Pot_I_Piece_08_Axis.xyz",
	path + "Axes/Pot_I_Piece_09_Axis.xyz",
	path + "Axes/Pot_I_Piece_10_Axis.xyz",
	path + "Axes/Pot_I_Piece_11_Axis.xyz",
	path + "Axes/Pot_I_Piece_12_Axis.xyz",
	path + "Axes/Pot_I_Piece_13_Axis.xyz",
	path + "Axes/Pot_I_Piece_14_Axis.xyz",
	path + "Axes/Pot_I_Piece_15_Axis.xyz",
	path + "Axes/Pot_I_Piece_16_Axis.xyz",
	path + "Axes/Pot_I_Piece_17_Axis.xyz",
	path + "Axes/Pot_I_Piece_18_Axis.xyz",
	path + "Axes/Pot_I_Piece_19_Axis.xyz",
	path + "Axes/Pot_I_Piece_20_Axis.xyz",
	path + "Axes/Pot_I_Piece_21_Axis.xyz",
	path + "Axes/Pot_I_Piece_22_Axis.xyz",
	path + "Axes/Pot_I_Piece_23_Axis.xyz",
	path + "Axes/Pot_I_Piece_24_Axis.xyz",
	path + "Axes/Pot_I_Piece_25_Axis.xyz",
	path + "Axes/Pot_I_Piece_26_Axis.xyz",
	path + "Axes/Pot_I_Piece_27_Axis.xyz",
	path + "Axes/Pot_I_Piece_28_Axis.xyz",
	path + "Axes/Pot_I_Piece_29_Axis.xyz",
	path + "Axes/Pot_I_Piece_30_Axis.xyz",
	path + "Axes/Pot_J_Piece_01_Axis.xyz",
	path + "Axes/Pot_J_Piece_02_Axis.xyz",
	path + "Axes/Pot_J_Piece_03_Axis.xyz",
	path + "Axes/Pot_J_Piece_04_Axis.xyz",
	path + "Axes/Pot_J_Piece_05_Axis.xyz",
	path + "Axes/Pot_J_Piece_06_Axis.xyz",
	path + "Axes/Pot_J_Piece_07_Axis.xyz",
	path + "Axes/Pot_J_Piece_08_Axis.xyz",
	path + "Axes/Pot_J_Piece_09_Axis.xyz",
	path + "Axes/Pot_J_Piece_10_Axis.xyz",
	path + "Axes/Pot_J_Piece_11_Axis.xyz",
	path + "Axes/Pot_J_Piece_12_Axis.xyz"
};

string surface_in[SHARD_NUMBER] = {
	path + "Surfaces/Pot_A_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_A_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_B_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_10_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_11_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_12_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_13_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_14_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_15_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_16_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_17_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_18_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_19_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_20_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_21_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_22_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_23_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_24_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_25_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_26_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_27_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_28_Surface_0.xyz",
	path + "Surfaces/Pot_D_Piece_29_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_10_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_11_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_12_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_13_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_14_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_15_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_16_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_17_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_18_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_19_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_20_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_21_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_22_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_23_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_24_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_25_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_26_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_27_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_28_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_29_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_30_Surface_0.xyz",
	path + "Surfaces/Pot_E_Piece_31_Surface_0.xyz",
	path + "Surfaces/Pot_C_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_C_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_C_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_C_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_F_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_G_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_10_Surface_0.xyz",
	path + "Surfaces/Pot_H_Piece_11_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_10_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_11_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_12_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_13_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_14_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_15_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_16_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_17_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_18_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_19_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_20_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_21_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_22_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_23_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_24_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_25_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_26_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_27_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_28_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_29_Surface_0.xyz",
	path + "Surfaces/Pot_I_Piece_30_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_01_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_02_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_03_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_04_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_05_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_06_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_07_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_08_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_09_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_10_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_11_Surface_0.xyz",
	path + "Surfaces/Pot_J_Piece_12_Surface_0.xyz"
};

string surface_out[SHARD_NUMBER] = {
	path + "Surfaces/Pot_A_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_A_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_B_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_10_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_11_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_12_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_13_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_14_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_15_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_16_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_17_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_18_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_19_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_20_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_21_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_22_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_23_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_24_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_25_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_26_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_27_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_28_Surface_1.xyz",
	path + "Surfaces/Pot_D_Piece_29_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_10_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_11_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_12_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_13_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_14_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_15_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_16_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_17_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_18_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_19_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_20_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_21_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_22_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_23_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_24_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_25_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_26_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_27_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_28_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_29_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_30_Surface_1.xyz",
	path + "Surfaces/Pot_E_Piece_31_Surface_1.xyz",
	path + "Surfaces/Pot_C_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_C_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_C_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_C_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_F_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_G_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_10_Surface_1.xyz",
	path + "Surfaces/Pot_H_Piece_11_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_10_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_11_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_12_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_13_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_14_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_15_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_16_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_17_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_18_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_19_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_20_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_21_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_22_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_23_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_24_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_25_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_26_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_27_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_28_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_29_Surface_1.xyz",
	path + "Surfaces/Pot_I_Piece_30_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_01_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_02_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_03_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_04_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_05_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_06_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_07_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_08_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_09_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_10_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_11_Surface_1.xyz",
	path + "Surfaces/Pot_J_Piece_12_Surface_1.xyz"
};

string surface_fr[SHARD_NUMBER] = {
	path + "Surfaces/Pot_A_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_A_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_B_Piece_09_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_09_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_10_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_11_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_12_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_13_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_14_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_15_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_16_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_17_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_18_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_19_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_20_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_21_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_22_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_23_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_24_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_25_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_26_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_27_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_28_Surface_F.pcd",
	path + "Surfaces/Pot_D_Piece_29_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_09_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_10_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_11_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_12_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_13_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_14_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_15_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_16_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_17_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_18_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_19_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_20_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_21_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_22_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_23_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_24_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_25_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_26_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_27_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_28_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_29_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_30_Surface_F.pcd",
	path + "Surfaces/Pot_E_Piece_31_Surface_F.pcd",
	path + "Surfaces/Pot_C_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_C_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_C_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_C_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_F_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_G_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_09_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_10_Surface_F.pcd",
	path + "Surfaces/Pot_H_Piece_11_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_09_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_10_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_11_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_12_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_13_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_14_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_15_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_16_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_17_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_18_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_19_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_20_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_21_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_22_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_23_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_24_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_25_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_26_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_27_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_28_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_29_Surface_F.pcd",
	path + "Surfaces/Pot_I_Piece_30_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_01_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_02_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_03_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_04_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_05_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_06_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_07_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_08_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_09_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_10_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_11_Surface_F.pcd",
	path + "Surfaces/Pot_J_Piece_12_Surface_F.pcd"
};

string gt_T_path[SHARD_NUMBER] = {
	path + "Ground Truth/Pot_A_Piece_1_T.txt",
	path + "Ground Truth/Pot_A_Piece_2_T.txt",
	path + "Ground Truth/Pot_A_Piece_3_T.txt",
	path + "Ground Truth/Pot_A_Piece_4_T.txt",
	path + "Ground Truth/Pot_A_Piece_5_T.txt",
	path + "Ground Truth/Pot_A_Piece_6_T.txt",
	path + "Ground Truth/Pot_A_Piece_7_T.txt",
	path + "Ground Truth/Pot_A_Piece_8_T.txt",
	path + "Ground Truth/Pot_B_Piece_1_T.txt",
	path + "Ground Truth/Pot_B_Piece_2_T.txt",
	path + "Ground Truth/Pot_B_Piece_3_T.txt",
	path + "Ground Truth/Pot_B_Piece_4_T.txt",
	path + "Ground Truth/Pot_B_Piece_5_T.txt",
	path + "Ground Truth/Pot_B_Piece_6_T.txt",
	path + "Ground Truth/Pot_B_Piece_7_T.txt",
	path + "Ground Truth/Pot_B_Piece_8_T.txt",
	path + "Ground Truth/Pot_B_Piece_9_T.txt",
	path + "Ground Truth/Pot_D_Piece_1_T.txt",
	path + "Ground Truth/Pot_D_Piece_2_T.txt",
	path + "Ground Truth/Pot_D_Piece_3_T.txt",
	path + "Ground Truth/Pot_D_Piece_4_T.txt",
	path + "Ground Truth/Pot_D_Piece_5_T.txt",
	path + "Ground Truth/Pot_D_Piece_6_T.txt",
	path + "Ground Truth/Pot_D_Piece_7_T.txt",
	path + "Ground Truth/Pot_D_Piece_8_T.txt",
	path + "Ground Truth/Pot_D_Piece_9_T.txt",
	path + "Ground Truth/Pot_D_Piece_10_T.txt",
	path + "Ground Truth/Pot_D_Piece_11_T.txt",
	path + "Ground Truth/Pot_D_Piece_12_T.txt",
	path + "Ground Truth/Pot_D_Piece_13_T.txt",
	path + "Ground Truth/Pot_D_Piece_14_T.txt",
	path + "Ground Truth/Pot_D_Piece_15_T.txt",
	path + "Ground Truth/Pot_D_Piece_16_T.txt",
	path + "Ground Truth/Pot_D_Piece_17_T.txt",
	path + "Ground Truth/Pot_D_Piece_18_T.txt",
	path + "Ground Truth/Pot_D_Piece_19_T.txt",
	path + "Ground Truth/Pot_D_Piece_20_T.txt",
	path + "Ground Truth/Pot_D_Piece_21_T.txt",
	path + "Ground Truth/Pot_D_Piece_22_T.txt",
	path + "Ground Truth/Pot_D_Piece_23_T.txt",
	path + "Ground Truth/Pot_D_Piece_24_T.txt",
	path + "Ground Truth/Pot_D_Piece_25_T.txt",
	path + "Ground Truth/Pot_D_Piece_26_T.txt",
	path + "Ground Truth/Pot_D_Piece_27_T.txt",
	path + "Ground Truth/Pot_D_Piece_28_T.txt",
	path + "Ground Truth/Pot_D_Piece_29_T.txt",
	path + "Ground Truth/Pot_E_Piece_1_T.txt",
	path + "Ground Truth/Pot_E_Piece_2_T.txt",
	path + "Ground Truth/Pot_E_Piece_3_T.txt",
	path + "Ground Truth/Pot_E_Piece_4_T.txt",
	path + "Ground Truth/Pot_E_Piece_5_T.txt",
	path + "Ground Truth/Pot_E_Piece_6_T.txt",
	path + "Ground Truth/Pot_E_Piece_7_T.txt",
	path + "Ground Truth/Pot_E_Piece_8_T.txt",
	path + "Ground Truth/Pot_E_Piece_9_T.txt",
	path + "Ground Truth/Pot_E_Piece_10_T.txt",
	path + "Ground Truth/Pot_E_Piece_11_T.txt",
	path + "Ground Truth/Pot_E_Piece_12_T.txt",
	path + "Ground Truth/Pot_E_Piece_13_T.txt",
	path + "Ground Truth/Pot_E_Piece_14_T.txt",
	path + "Ground Truth/Pot_E_Piece_15_T.txt",
	path + "Ground Truth/Pot_E_Piece_16_T.txt",
	path + "Ground Truth/Pot_E_Piece_17_T.txt",
	path + "Ground Truth/Pot_E_Piece_18_T.txt",
	path + "Ground Truth/Pot_E_Piece_19_T.txt",
	path + "Ground Truth/Pot_E_Piece_20_T.txt",
	path + "Ground Truth/Pot_E_Piece_21_T.txt",
	path + "Ground Truth/Pot_E_Piece_22_T.txt",
	path + "Ground Truth/Pot_E_Piece_23_T.txt",
	path + "Ground Truth/Pot_E_Piece_24_T.txt",
	path + "Ground Truth/Pot_E_Piece_25_T.txt",
	path + "Ground Truth/Pot_E_Piece_26_T.txt",
	path + "Ground Truth/Pot_E_Piece_27_T.txt",
	path + "Ground Truth/Pot_E_Piece_28_T.txt",
	path + "Ground Truth/Pot_E_Piece_29_T.txt",
	path + "Ground Truth/Pot_E_Piece_30_T.txt",
	path + "Ground Truth/Pot_E_Piece_31_T.txt",
	path + "Ground Truth/Pot_C_Piece_1_T.txt",
	path + "Ground Truth/Pot_C_Piece_2_T.txt",
	path + "Ground Truth/Pot_C_Piece_3_T.txt",
	path + "Ground Truth/Pot_C_Piece_4_T.txt",
	path + "Ground Truth/Pot_F_Piece_1_T.txt",
	path + "Ground Truth/Pot_F_Piece_2_T.txt",
	path + "Ground Truth/Pot_F_Piece_3_T.txt",
	path + "Ground Truth/Pot_F_Piece_4_T.txt",
	path + "Ground Truth/Pot_F_Piece_5_T.txt",
	path + "Ground Truth/Pot_F_Piece_6_T.txt",
	path + "Ground Truth/Pot_F_Piece_7_T.txt",
	path + "Ground Truth/Pot_G_Piece_1_T.txt",
	path + "Ground Truth/Pot_G_Piece_2_T.txt",
	path + "Ground Truth/Pot_G_Piece_3_T.txt",
	path + "Ground Truth/Pot_G_Piece_4_T.txt",
	path + "Ground Truth/Pot_G_Piece_5_T.txt",
	path + "Ground Truth/Pot_G_Piece_6_T.txt",
	path + "Ground Truth/Pot_G_Piece_7_T.txt",
	path + "Ground Truth/Pot_H_Piece_1_T.txt",
	path + "Ground Truth/Pot_H_Piece_2_T.txt",
	path + "Ground Truth/Pot_H_Piece_3_T.txt",
	path + "Ground Truth/Pot_H_Piece_4_T.txt",
	path + "Ground Truth/Pot_H_Piece_5_T.txt",
	path + "Ground Truth/Pot_H_Piece_6_T.txt",
	path + "Ground Truth/Pot_H_Piece_7_T.txt",
	path + "Ground Truth/Pot_H_Piece_8_T.txt",
	path + "Ground Truth/Pot_H_Piece_9_T.txt",
	path + "Ground Truth/Pot_H_Piece_10_T.txt",
	path + "Ground Truth/Pot_H_Piece_11_T.txt",
	path + "Ground Truth/Pot_I_Piece_1_T.txt",
	path + "Ground Truth/Pot_I_Piece_2_T.txt",
	path + "Ground Truth/Pot_I_Piece_3_T.txt",
	path + "Ground Truth/Pot_I_Piece_4_T.txt",
	path + "Ground Truth/Pot_I_Piece_5_T.txt",
	path + "Ground Truth/Pot_I_Piece_6_T.txt",
	path + "Ground Truth/Pot_I_Piece_7_T.txt",
	path + "Ground Truth/Pot_I_Piece_8_T.txt",
	path + "Ground Truth/Pot_I_Piece_9_T.txt",
	path + "Ground Truth/Pot_I_Piece_10_T.txt",
	path + "Ground Truth/Pot_I_Piece_11_T.txt",
	path + "Ground Truth/Pot_I_Piece_12_T.txt",
	path + "Ground Truth/Pot_I_Piece_13_T.txt",
	path + "Ground Truth/Pot_I_Piece_14_T.txt",
	path + "Ground Truth/Pot_I_Piece_15_T.txt",
	path + "Ground Truth/Pot_I_Piece_16_T.txt",
	path + "Ground Truth/Pot_I_Piece_17_T.txt",
	path + "Ground Truth/Pot_I_Piece_18_T.txt",
	path + "Ground Truth/Pot_I_Piece_19_T.txt",
	path + "Ground Truth/Pot_I_Piece_20_T.txt",
	path + "Ground Truth/Pot_I_Piece_21_T.txt",
	path + "Ground Truth/Pot_I_Piece_22_T.txt",
	path + "Ground Truth/Pot_I_Piece_23_T.txt",
	path + "Ground Truth/Pot_I_Piece_24_T.txt",
	path + "Ground Truth/Pot_I_Piece_25_T.txt",
	path + "Ground Truth/Pot_I_Piece_26_T.txt",
	path + "Ground Truth/Pot_I_Piece_27_T.txt",
	path + "Ground Truth/Pot_I_Piece_28_T.txt",
	path + "Ground Truth/Pot_I_Piece_29_T.txt",
	path + "Ground Truth/Pot_I_Piece_30_T.txt",
	path + "Ground Truth/Pot_J_Piece_1_T.txt",
	path + "Ground Truth/Pot_J_Piece_2_T.txt",
	path + "Ground Truth/Pot_J_Piece_3_T.txt",
	path + "Ground Truth/Pot_J_Piece_4_T.txt",
	path + "Ground Truth/Pot_J_Piece_5_T.txt",
	path + "Ground Truth/Pot_J_Piece_6_T.txt",
	path + "Ground Truth/Pot_J_Piece_7_T.txt",
	path + "Ground Truth/Pot_J_Piece_8_T.txt",
	path + "Ground Truth/Pot_J_Piece_9_T.txt",
	path + "Ground Truth/Pot_J_Piece_10_T.txt",
	path + "Ground Truth/Pot_J_Piece_11_T.txt",
	path + "Ground Truth/Pot_J_Piece_12_T.txt"
};

string gt_graph_path[NUM_MIXED_SHERD] = {
	path + "Ground Truth/Pot_A_simple_graph.txt",
	path + "Ground Truth/Pot_B_simple_graph.txt",
	path + "Ground Truth/Pot_D_simple_graph.txt",
	path + "Ground Truth/Pot_E_simple_graph.txt",
	path + "Ground Truth/Pot_C_simple_graph.txt",
	path + "Ground Truth/Pot_F_simple_graph.txt",
	path + "Ground Truth/Pot_G_simple_graph.txt",
	path + "Ground Truth/Pot_H_simple_graph.txt",
	path + "Ground Truth/Pot_I_simple_graph.txt",
	path + "Ground Truth/Pot_J_simple_graph.txt"
};

bool shard_on_off[SHARD_NUMBER] = {
	true,	// 1	PotA		1
	true,   // 2				2
	true,	// 3 				3
	true,   // 4				4
	true,   // 5				5
	true,   // 6				6
	true,   // 7 				7
	true,   // 8				8
	true,	// 1	PotB		9
	true,	// 2				10
	true,	// 3				11
	true,	// 4				12
	true,	// 5				13
	true,	// 6				14		
	true,	// 7				15
	true,	// 8				16
	true,	// 9				17
	true,	// 1	PotD		18
	true,   // 2				19
	true,	// 3				20
	true,   // 4				21
	true,   // 5				22
	true,   // 6				23
	true,   // 7				24
	true,   // 8				25
	true,   // 9				26
	true,   // 10				27
	true,   // 11				28
	true,	// 12				29
	true,   // 13				30
	true,	// 14				31
	true,   // 15				32
	true,   // 16				33
	true,   // 17 				34
	true,   // 18				35
	true,   // 19				36
	true,   // 20				37	
	true,   // 21				38
	true,   // 22				39
	true,   // 23				40
	true,   // 24				41
	true,   // 25				42
	true,   // 26				43
	true,   // 27				44
	true,   // 28				45
	true,   // 29				46
	true,	// 1	PotE		47
	true,   // 2				48		
	true,	// 3				49
	true,   // 4				50
	true,   // 5				51
	true,   // 6				52	
	true,   // 7				53
	true,   // 8				54
	true,   // 9				55
	true,   // 10				56
	true,   // 11				57
	true,	// 12				58
	true,   // 13				59
	true,	// 14				60
	true,   // 15				61
	true,   // 16				62
	true,   // 17				63
	true,   // 18				64
	true,   // 19				65
	true,   // 20				66
	true,   // 21				67
	true,   // 22				68
	true,   // 23				69
	true,   // 24				70
	true,   // 25				71
	true,   // 26				72
	true,   // 27				73
	true,	// 28				74
	true,   // 29				75
	true,	// 30				76
	true,   // 31				77
	true,	// 1	PotC		78
	true,   // 2				79	
	true,	// 3				80
	true,   // 4				81
	true,	// 1    Pot F		82
	true,   // 2				83
	true,	// 3 -				84
	true,   // 4				85
	true,   // 5				86
	true,   // 6				87
	true,   // 7				88
	true,	// 1	Pot G		89
	true,   // 2				90
	true,	// 3 -				91
	true,   // 4				92
	true,   // 5				93
	true,   // 6				94
	true,   // 7				95
	true,	// 1	Pot H		96
	true,   // 2				97
	true,	// 3				98
	true,   // 4				99
	true,   // 5				100
	true,   // 6				101
	true,   // 7				102
	true,   // 8				103
	true,	// 9				104
	true,   // 10				105
	true,	// 11				106
	true,	// 1	Pot I		107
	true,   // 2				108
	true,	// 3 -				109
	true,   // 4				110
	true,   // 5				111
	true,   // 6				112
	true,   // 7				113
	true,   // 8				114
	true,	// 9 -				115
	true,   // 10				116
	true,   // 11				117
	true,   // 12				118
	true,   // 13				119
	true,	// 14				120
	true,   // 15				121
	true,	// 16-				122
	true,   // 17				123
	true,   // 18				124
	true,   // 19				125
	true,   // 20				126
	true,   // 21				127
	true,	// 22				128
	true,   // 23				129
	true,   // 24				130
	true,   // 25				131
	true,   // 26				132
	true,	// 27				133
	true,   // 28				134
	true,   // 29				135
	true,   // 30				136
	true,	// 1	Pot J		137
	true,   // 2				138
	true,	// 3 -				139
	true,   // 4				140
	true,   // 5				141
	true,   // 6				142
	true,   // 7				143
	true,   // 8				144
	false,	// 9 -				145
	true,   // 10				146
	true,   // 11				147
	true    // 12				148
};

#endif

#endif
