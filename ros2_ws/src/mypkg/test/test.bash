#!/bin/bash

dir=~
[ "$1" != "" ] && dir="$1"

cd $dir/robosys2024-4/ros2_ws
colcon build
source $dir/.bashrc
timeout 10 ros2 launch mypkg talk_listen.launch.py > /tmp/mypkg.log

cat /tmp/mypkg.log |
	grep 'age'
