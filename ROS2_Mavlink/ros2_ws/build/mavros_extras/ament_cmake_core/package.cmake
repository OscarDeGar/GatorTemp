set(_AMENT_PACKAGE_NAME "mavros_extras")
set(mavros_extras_VERSION "2.3.0")
set(mavros_extras_MAINTAINER "Vladimir Ermakov <vooon341@gmail.com>")
set(mavros_extras_BUILD_DEPENDS "eigen" "mavlink" "geographiclib" "geographiclib-tools" "angles" "diagnostic_updater" "message_filters" "eigen_stl_containers" "mavros" "libmavconn" "pluginlib" "tf2_ros" "tf2_eigen" "rclcpp" "rclcpp_components" "rcpputils" "urdf" "yaml-cpp" "yaml_cpp_vendor" "diagnostic_msgs" "geometry_msgs" "mavros_msgs" "nav_msgs" "sensor_msgs" "geographic_msgs" "trajectory_msgs" "std_msgs" "std_srvs" "visualization_msgs")
set(mavros_extras_BUILDTOOL_DEPENDS "ament_cmake" "ament_cmake_python" "eigen3_cmake_module")
set(mavros_extras_BUILD_EXPORT_DEPENDS "eigen" "mavlink" "geographiclib" "geographiclib-tools" "diagnostic_updater" "message_filters" "eigen_stl_containers" "mavros" "libmavconn" "pluginlib" "tf2_ros" "tf2_eigen" "rclcpp" "rclcpp_components" "rcpputils" "urdf" "yaml-cpp" "yaml_cpp_vendor" "diagnostic_msgs" "geometry_msgs" "mavros_msgs" "nav_msgs" "sensor_msgs" "geographic_msgs" "trajectory_msgs" "std_msgs" "std_srvs" "visualization_msgs")
set(mavros_extras_BUILDTOOL_EXPORT_DEPENDS "eigen3_cmake_module")
set(mavros_extras_EXEC_DEPENDS "rosidl_default_runtime" "diagnostic_updater" "message_filters" "eigen_stl_containers" "mavros" "libmavconn" "pluginlib" "tf2_ros" "tf2_eigen" "rclcpp" "rclcpp_components" "rcpputils" "urdf" "yaml-cpp" "yaml_cpp_vendor" "diagnostic_msgs" "geometry_msgs" "mavros_msgs" "nav_msgs" "sensor_msgs" "geographic_msgs" "trajectory_msgs" "std_msgs" "std_srvs" "visualization_msgs")
set(mavros_extras_TEST_DEPENDS "ament_cmake_gtest" "ament_cmake_gmock" "ament_lint_auto" "ament_lint_common" "gtest" "google-mock")
set(mavros_extras_GROUP_DEPENDS )
set(mavros_extras_MEMBER_OF_GROUPS )
set(mavros_extras_DEPRECATED "")
set(mavros_extras_EXPORT_TAGS)
list(APPEND mavros_extras_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
list(APPEND mavros_extras_EXPORT_TAGS "<mavros plugin=\"mavros_plugins.xml\"/>")
list(APPEND mavros_extras_EXPORT_TAGS "<rosdoc config=\"rosdoc.yaml\"/>")
list(APPEND mavros_extras_EXPORT_TAGS "<rosindex><!-- ROSIndex metadata. Wait until <include> will work -->
      <tags>
        <tag>uav</tag>
        <tag>mav</tag>
        <tag>mavlink</tag>
        <tag>plugin</tag>
        <tag>apm</tag>
        <tag>px4</tag>
      </tags></rosindex>")
