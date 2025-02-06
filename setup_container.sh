#!/bin/bash
setfacl -m user:1000:r ${HOME}/.Xauthority

# Get the current display number
DISPLAY_NUM=$(echo $DISPLAY | cut -d: -f2 | cut -d. -f1)

# Allow X server connections
# xhost +local:

# Run container
sudo docker run \
    -it \
    --rm \
    --user $(id -u):$(id -g) \
    --cpus="0.000" \
    --net=host \
    -e DISPALY \
    --volume="$HOME/.Xauthority:/home/user/.Xauthority" \
    --volume="$PWD:/SfS" \
    --volume="/Dataset:/Dataset" \
    sfs:latest

# # Cleanup
# xhost -local:
