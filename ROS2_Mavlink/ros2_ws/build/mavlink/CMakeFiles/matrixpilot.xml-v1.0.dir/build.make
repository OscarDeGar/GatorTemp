# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mitzi/ws_ros2/mavlink

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mitzi/ws_ros2/build/mavlink

# Utility rule file for matrixpilot.xml-v1.0.

# Include the progress variables for this target.
include CMakeFiles/matrixpilot.xml-v1.0.dir/progress.make

CMakeFiles/matrixpilot.xml-v1.0: include/v1.0/matrixpilot/matrixpilot.h


include/v1.0/matrixpilot/matrixpilot.h: /home/mitzi/ws_ros2/mavlink/message_definitions/v1.0/matrixpilot.xml
include/v1.0/matrixpilot/matrixpilot.h: /home/mitzi/ws_ros2/mavlink/message_definitions/v1.0/common.xml
include/v1.0/matrixpilot/matrixpilot.h: /home/mitzi/ws_ros2/mavlink/pymavlink/tools/mavgen.py
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/mitzi/ws_ros2/build/mavlink/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating include/v1.0/matrixpilot/matrixpilot.h"
	/usr/bin/env PYTHONPATH="/home/mitzi/ws_ros2/mavlink:/home/mitzi/ros2_ws/build/warmup_project:/home/mitzi/ros2_ws/install/warmup_project/lib/python3.8/site-packages:/home/mitzi/ros2_ws/build/visual_odometry:/home/mitzi/ros2_ws/install/visual_odometry/lib/python3.8/site-packages:/home/mitzi/ros2_ws/install/simple_filter/lib/python3.8/site-packages:/home/mitzi/ros2_ws/build/sample_node_architectures:/home/mitzi/ros2_ws/install/sample_node_architectures/lib/python3.8/site-packages:/home/mitzi/ros2_ws/install/robot_localization/lib/python3.8/site-packages:/home/mitzi/ros2_ws/build/py_pysub:/home/mitzi/ros2_ws/install/py_pysub/lib/python3.8/site-packages:/home/mitzi/ros2_ws/build/osrf_pycommon:/home/mitzi/ros2_ws/install/osrf_pycommon/lib/python3.8/site-packages:/home/mitzi/ros2_ws/build/neato_soccer:/home/mitzi/ros2_ws/install/neato_soccer/lib/python3.8/site-packages:/home/mitzi/ros2_ws/build/neato_node2:/home/mitzi/ros2_ws/install/neato_node2/lib/python3.8/site-packages:/home/mitzi/ros2_ws/build/in_class_day04_solutions:/home/mitzi/ros2_ws/install/in_class_day04_solutions/lib/python3.8/site-packages:/home/mitzi/ros2_ws/build/in_class_day03_solutions:/home/mitzi/ros2_ws/install/in_class_day03_solutions/lib/python3.8/site-packages:/home/mitzi/ros2_ws/build/in_class_day03:/home/mitzi/ros2_ws/install/in_class_day03/lib/python3.8/site-packages:/home/mitzi/ros2_ws/install/neato2_interfaces/lib/python3.8/site-packages:/home/mitzi/ros2_ws/build/in_class_day02_solutions:/home/mitzi/ros2_ws/install/in_class_day02_solutions/lib/python3.8/site-packages:/home/mitzi/ros2_ws/build/in_class_day02:/home/mitzi/ros2_ws/install/in_class_day02/lib/python3.8/site-packages:/home/mitzi/ros2_ws/install/apriltag_msgs/lib/python3.8/site-packages:/opt/ros/foxy/lib/python3.8/site-packages:/opt/ros/noetic/lib/python3/dist-packages" /usr/bin/python3.8 /home/mitzi/ws_ros2/mavlink/pymavlink/tools/mavgen.py --lang=C --wire-protocol=1.0 --output=include/v1.0 /home/mitzi/ws_ros2/mavlink/message_definitions/v1.0/matrixpilot.xml

matrixpilot.xml-v1.0: CMakeFiles/matrixpilot.xml-v1.0
matrixpilot.xml-v1.0: include/v1.0/matrixpilot/matrixpilot.h
matrixpilot.xml-v1.0: CMakeFiles/matrixpilot.xml-v1.0.dir/build.make

.PHONY : matrixpilot.xml-v1.0

# Rule to build all files generated by this target.
CMakeFiles/matrixpilot.xml-v1.0.dir/build: matrixpilot.xml-v1.0

.PHONY : CMakeFiles/matrixpilot.xml-v1.0.dir/build

CMakeFiles/matrixpilot.xml-v1.0.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/matrixpilot.xml-v1.0.dir/cmake_clean.cmake
.PHONY : CMakeFiles/matrixpilot.xml-v1.0.dir/clean

CMakeFiles/matrixpilot.xml-v1.0.dir/depend:
	cd /home/mitzi/ws_ros2/build/mavlink && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mitzi/ws_ros2/mavlink /home/mitzi/ws_ros2/mavlink /home/mitzi/ws_ros2/build/mavlink /home/mitzi/ws_ros2/build/mavlink /home/mitzi/ws_ros2/build/mavlink/CMakeFiles/matrixpilot.xml-v1.0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/matrixpilot.xml-v1.0.dir/depend

