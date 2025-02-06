FROM ubuntu:20.04

# Set environment variables
ENV DEBIAN_FRONTEND=noninteractive
ENV PCL_VERSION="1.9.1"
ENV CERES_VERSION="1.14.0"

# Combine RUN commands and clean up in the same layer
RUN apt-get update && apt-get install -y \
    g++ \
    cmake \
    git-core \
    build-essential \
    apt-utils \
    wget \
    unzip \
    sudo \
    vim \
    terminator \
    dbus \
    dbus-x11 \
    gdb \
    curl \
    rsync \
    zsh \
    openssh-server \
    clang \
    libgl1-mesa-dev \
    libglu1-mesa-dev \
    mesa-common-dev \
    libboost-all-dev \
    libomp-dev \
    libxt-dev \
    libflann-dev \
    libeigen3-dev \
    libsuitesparse-dev \
    libglu1-mesa-dev \
    freeglut3-dev \
    libusb-1.0-0-dev \
    libusb-dev \
    libopenni-dev \
    libopenni2-dev \
    libpcap-dev \
    libpng-dev \
    mpi-default-dev \
    openmpi-bin \
    openmpi-common \
    libqhull-dev \
    libgtest-dev \
    libpthread-stubs0-dev \
    libpthread-workqueue-dev \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*


# Start SSH service
RUN service ssh start

ENV DISPLAY=:0

# USER user
RUN apt-get update && apt-get install -y x11-apps
RUN rm -rf /tmp/* /usr/share/doc/* /usr/share/info/* /var/tmp/*
RUN useradd -ms /bin/bash user && \
    usermod -aG sudo user && \
    echo "user ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers
ENV DISPLAY :0
 
USER user

WORKDIR /tmp

# Install VTK
RUN wget https://www.vtk.org/files/release/8.2/VTK-8.2.0.tar.gz \
    && tar -xf VTK-8.2.0.tar.gz \
    && mkdir -p VTK-8.2.0/build \
    && cd VTK-8.2.0/build \
    && cmake .. \
        -DCMAKE_BUILD_TYPE=Release \
        -DVTK_MODULE_ENABLE_VTK_RenderingContextOpenGL2=YES \
    && make -j2 \
    && sudo make install \
    && cd /tmp \
    && sudo rm -rf VTK-8.2.0*

# Install Dependencies in parallel where possible
RUN mkdir -p /tmp/deps && cd /tmp/deps \
    && wget -q https://github.com/gflags/gflags/archive/v2.2.1.tar.gz \
    && wget -q https://github.com/google/glog/archive/v0.3.5.tar.gz \
    && wget -q https://github.com/Reference-LAPACK/lapack/archive/v3.10.1.tar.gz \
    && wget -q https://github.com/xianyi/OpenBLAS/archive/v0.3.17.tar.gz \
    && for f in *.tar.gz; do tar xzf $f; done \
    && sudo rm *.tar.gz

# Build and install gflags
RUN cd /tmp/deps/gflags-2.2.1 \
    && mkdir build && cd build \
    && cmake .. -DCMAKE_POSITION_INDEPENDENT_CODE=ON \
    && sudo make -j2 && sudo make install \
    && sudo ldconfig

# Build and install glog
RUN cd /tmp/deps/glog-0.3.5 \
    && ./configure \
    && sudo make -j2 && sudo make install \
    && sudo ldconfig

# Build and install LAPACK
RUN cd /tmp/deps/lapack-3.10.1 \
    && mkdir build && cd build \
    && cmake .. -DCMAKE_BUILD_TYPE=Release \
    && sudo make -j2 && sudo make install

# Build and install OpenBLAS
RUN cd /tmp/deps/OpenBLAS-0.3.17 \
    && sudo make TARGET=GENERIC -j2 \
    && sudo make install

# Install PCL
RUN wget https://github.com/PointCloudLibrary/pcl/archive/refs/tags/pcl-${PCL_VERSION}.tar.gz \
    && tar -xf pcl-${PCL_VERSION}.tar.gz \
    && mkdir -p pcl-pcl-${PCL_VERSION}/build \
    && cd pcl-pcl-${PCL_VERSION}/build \
    && cmake .. \
        -DCMAKE_BUILD_TYPE=Release \
        -DVTK_RENDERING_BACKEND=OpenGL2 \
    && sudo make -j2 \
    && sudo make install \
    && cd /tmp \
    && sudo rm -rf pcl-pcl-*

# Install Ceres Solver
WORKDIR /tmp
COPY ./ceres-solver-${CERES_VERSION}.tar.gz /tmp/
RUN mkdir -p ceres-solver-${CERES_VERSION} \
    && tar -xzf ceres-solver-${CERES_VERSION}.tar.gz -C ceres-solver-${CERES_VERSION} \
    && mkdir -p ceres-solver-${CERES_VERSION}/ceres-bin \
    && cd ceres-solver-${CERES_VERSION}/ceres-bin \
    && cmake .. \
        -DCXSPARSE=ON \
        -DEIGEN_PREFER_EXPORTED_EIGEN_CMAKE_CONFIGURATION=OFF \
    && sudo make -j2 \
    && sudo make install \
    && cd /tmp \
    && sudo rm -rf ceres-*

# Clean up
RUN sudo rm -rf /tmp/deps

WORKDIR /SfS

CMD /bin/bash
