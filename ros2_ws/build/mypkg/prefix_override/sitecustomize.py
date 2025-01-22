import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/koara/robosys2024-4/ros2_ws/install/mypkg'
