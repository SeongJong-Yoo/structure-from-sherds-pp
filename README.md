# Structure-from-Sherds 
 <p align="center">
 <img src="https://github.com/SeongJong-Yoo/Pottery-Hierarchy-Clear/blob/wo_init/etc/dataset-1.png">
 </p>
 
 This repository contains code for restoring pottery of unordered and mixed fragments. The code is provided without any warranty. If using this code, please cite our work as shown below. For more information and results please visit our [project website](https://sj-yoo.info/sfs/)

	@inproceedings{YooandLiu2024SfS,
    	author    = {Yoo, Seong Jong and Liu, Sisung and Arshad, Muhammad Zeeshan and Kim, Jinhyeok and Kim, Young Min and Aloimonos, Yiannis and Fermüller, Cornelia and Joo, Kyungdon and Kim, Jinwook and Hong, Je Hyeong},
    	title     = {Structure-From-Sherds++: Robust Incremental 3D Reassembly of Axially Symmetric Pots from Unordered and Mixed Fragment Collections},
     	journal   = {arXiv},
    	year      = {2025},
	}

Also, check out our previously published paper from ICCV. 

	@inproceedings{Hong_2021_ICCV,
    	author    = {Hong, Je Hyeong and Yoo, Seong Jong and Zeeshan, Muhammad Arshad and Kim, Young Min and Kim, Jinwook},
    	title     = {Structure-From-Sherds: Incremental 3D Reassembly of Axially Symmetric Pots From Unordered and Mixed Fragment Collections},
    	journal   = {Proceedings of the IEEE/CVF International Conference on Computer Vision (ICCV)},
    	month     = {October},
    	year      = {2021},
    	pages     = {5443-5451}
	}
 

## News
- [2025/02/21] paper is released at [arXiv](https://arxiv.org/abs/2502.13986). 
- [2025/02/06] first release, dataset, main architecture.

## Preprocessing 
The preprocessing code is now available in a [separate repository](https://github.com/DominicoRyu/SfSpp_preprocessing/tree/main)

## How to run
### Docker
1. Build docker images
```
    docker build -t sfs:latest .
```
3. Download Dataset
```
./download.sh
```
4. Choose one of the experiments commented out at *data_path.h*. 
5. Run docker container
```
./setup_container.sh
```
- You might have to change `--volume="/Dataset:/Dataset" \` at line 20 according to your dataset path

6. Build with cmake file
```
## Command at container ##
mkdir build
cd build
cmake .. \
    -DCMAKE_BUILD_TYPE=Release 

make
```
7. Run and press *spacebar* to see the result

### Windows 
1. Install requirements using [VCPKG](https://vcpkg.io/en/).
	* Manifest mode
        - Create `vcpkg.json` in the same directory as `CMakeList.txt`
        ```
        {
            "$schema": "https://raw.githubusercontent.com/microsoft/vcpkg-tool/main/docs/vcpkg.schema.json",
            "name": "base-agnostic",
            "version": "0.1.0",
            "dependencies": [
                {"name": "ceres", "features":["cxsparse", "eigensparse", "lapack", "suitesparse", "tools"]},
                {"name": "pcl", "features": ["visualization", "vtk", "tools"]}
            ]
        }
        ```
2. Configure and build with CMAKE (for more detail check [here](https://learn.microsoft.com/en-us/vcpkg/consume/manifest-mode?tabs=cmake%2Cbuild-cmake))
```
cmake -B build -S . -DCMAKE_TOOLCHAIN_FILE=%VCPKG_ROOT%\scripts\buildsystems\vcpkg.cmake
```
- Change `VCPKG_ROOT` accordingly. (usually at C:\src\vcpkg or C:\dev\vcpkg)
- Build through CMAKE command (`cmake --build build`) or VS studio
3. Download Dataset
```
bash ./download.sh
```
4. Choose one of the experiments commented out at *data_path.h*. 
5. Run main.cpp and press *spacebar* to see the result

## Parameters
Data path : Path of the input data set  

	data_path.h
	string path = "/Dataset/"; 

Beam-search parameters : TOP_k indicates the *k*-top ranked beams being brought to the next iteration and BRANCHE_b indicates *b* branches expanding to search for more possible paths in each iteration. (Combinations of (k, b) as (5, 3), (10,5), and (20,10) are recommended)

	main.cpp
	TOP_k : 5
	BRANCH_b : 3

Number of CPU Thread : The number of CPU thread utilizing in *OpenMP* and *ceres solver*.
	
	data_structure.h
	NUMBER_OF_THREAD : 16

Ceres solver function tolerance : ceres hyper-parameter for convergence. We recommend to use the same or a lower value than 1.0e-6. For more details check [here](http://ceres-solver.org/nnls_solving.html). 

	reconstruction.h
	CERES_FUNC_TOL : 1.0e-3

MINIMUM_NUMBER : The minimum number of points on the edge line  to be considered in the calculation.

	reconstruction.h
	MINIMUM_NUMBER : 6

Counting inliers threshold : In order to evaluate ranking, we counted the number of inliers of that distance is less than this value. (Range 1-2 is recommended)

	reconstruction.h
	INLIER_THRESHOLD : 1.5

## Keyboard events
To visualize the results, several keyboard events are defined below. 

|Keyboard|Description|
|:---:|:---|
|'spacebar'| To show first ranked result|
|'->'| Move on lower ranked result|
|'<-'|Move on higer ranked result|
|'o' |Turn on/off OBJ|
|'s'|Save result|
|'g'| Save transformation matrix|
|'f'|Compute accuracy |


Pressing `s` button will save current state of data at `Dataset/Result/` including `edge-line` and `obj`. 

## Bug Report
Please raise an issue on Github for issues related to this code. If you have any questions related about the code feel free to send an email to here (yoosj@umd.edu). 
