function sensorData = sense(objects)
%%% Top Sense function that collects data from all the sensors
    % OUTPUTS: sensorData(struct) - contains data from each sensor

    % Call individual sense functions
    sharpData = senseSharp(objects.nano, objects.sharp);
%     sonarData = senseSonar(objects.nano, objects.sonar);
    imuData = senseIMU(objects.imu);
    gpsData = gpsSense(objects.gps);
    lidarData = lidarSense(objects.lidar);
    camData = cameraSense(objects.camera);
    [motorJoystick, steerJoystick, maxSpeed] = joystickSense(objects.joystick);


    % package data into struct output
    sensorData = struct( ...
        "steer",steerJoystick, ...
        "motor",motorJoystick, ...
        "sharp",sharpData, ...
        "camera",camData, ...
        "lidar",lidarData, ...
        "imu",imuData,...
        "gps", gpsData, ...
        "maxSpeed",maxSpeed);
%     "sonar",sonarData, ...
end