# Mavlink to ROS 2 Setup
## Insalation
Source ROS2:<br>
``` source /opt/ros/foxy/setup.bash```<br>
Install Mavros for ROS2 Foxy:<br>
```sudo apt install ros-foxy-mavros```<br>
Install pymavlink:<br>
```sudo python -m pip install --upgrade pymavlink```<br>
Install GeographicLib datasets:<br>
```wget https://raw.githubusercontent.com/mavlink/mavros/ros2/mavros/scripts/install_geographiclib_datasets.sh```<br>
```chmod +x ./install_geographiclib_datasets.sh```<br>
```./install_geographiclib_datasets.sh```<br>
Create a ROS2 workspace: <br>
```mkdir ros2_ws ```<br>
Change directories:<br>
```cd ros2_ws```<br>
Clone Mavros and Mavlink repositories:<br>
```git clone https://github.com/mavlink/mavros.git```<br>
```git clone https://github.com/mavlink/mavlink.git```<br>

Install dependancies:<br>
```sudo rosdep init```<br>
```rosdep install --from-paths src --ignore-src -y```<br>
Build the ros2 nodes:<br>
```cd ros2_ws```
Create a YAML file called ```params.yaml``` in ros2_ws folder:<br>
```
# mavros_param.yaml
mavros:
  ros__parameters: {}

mavros_router:
  ros__parameters: {}

mavros_node:
  ros__parameters:
    fcu_url: /dev/ttyACM0:115200
    gcs_url: tcp-l://:5670
```
Where ```/dev/ttyACM0:115200``` is the path to the Pixhawk serial connection.

## How to Run:
Source ROS2:<br>
``` source /opt/ros/foxy/setup.bash```<br>
Run node:<br>
```ros2 run mavros mavros_node --ros-args --params-file YOUR_OWN_PATH_TO_params.yaml```<br>
Check topics:<br> dmesg | grep tty dmesg | g dmesg | grep tty dmesg | grep ttyrep tty
```ros2 topic list```<br>
You should see:
```/diagnostics
/mavros/actuator_control
/mavros/altitude
/mavros/battery
/mavros/estimator_status
/mavros/extended_state
/mavros/geofence/fences
/mavros/global_position/compass_hdg
/mavros/global_position/global
/mavros/global_position/gp_lp_offset
/mavros/global_position/gp_origin
/mavros/global_position/local
/mavros/global_position/raw/fix
/mavros/global_position/raw/gps_vel
/mavros/global_position/raw/satellites
/mavros/global_position/rel_alt
/mavros/global_position/set_gp_origin
/mavros/home_position/home
/mavros/home_position/set
/mavros/imu/data
/mavros/imu/data_raw
/mavros/imu/diff_pressure
/mavros/imu/mag
/mavros/imu/static_pressure
/mavros/imu/temperature_baro
/mavros/imu/temperature_imu
/mavros/local_position/accel
/mavros/local_position/odom
/mavros/local_position/pose
/mavros/local_position/pose_cov
/mavros/local_position/velocity_body
/mavros/local_position/velocity_body_cov
/mavros/local_position/velocity_local
/mavros/manual_control/control
/mavros/manual_control/send
/mavros/mission/reached
/mavros/mission/waypoints
/mavros/nav_controller_output/output
/mavros/param/event
/mavros/rallypoint/rallypoints
/mavros/rc/in
/mavros/rc/out
/mavros/rc/override
/mavros/setpoint_accel/accel
/mavros/setpoint_attitude/cmd_vel
/mavros/setpoint_attitude/thrust
/mavros/setpoint_position/global
/mavros/setpoint_position/global_to_local
/mavros/setpoint_position/local
/mavros/setpoint_raw/attitude
/mavros/setpoint_raw/global
/mavros/setpoint_raw/local
/mavros/setpoint_raw/target_attitude
/mavros/setpoint_raw/target_global
/mavros/setpoint_raw/target_local
/mavros/setpoint_trajectory/desired
/mavros/setpoint_trajectory/local
/mavros/setpoint_velocity/cmd_vel
/mavros/setpoint_velocity/cmd_vel_unstamped
/mavros/state
/mavros/statustext/recv
/mavros/statustext/send
/mavros/target_actuator_control
/mavros/time_reference
/mavros/timesync_status
/mavros/wind_estimation
/parameter_events
/rosout
/tf
/tf_static
/uas1/mavlink_sink
/uas1/mavlink_source
```
Echo ROS2 topics: <br>
```ros2 topic echo /mavros/imu/data```<br>
This should show you IMU data from the pixhawk


## Usefull Terms

- GCS — Ground Control Station
- FCU — Flight Control Unit (aka FC)
- OBC — OnBoard Computer (your odroid or raspberry)

## Useful links
- [ROS2 Mavlink Github](https://github.com/mavlink/mavros/tree/ros2/mavros)
- [ROS2 Mavlink installation help](https://github.com/mavlink/mavros/issues/1582)
