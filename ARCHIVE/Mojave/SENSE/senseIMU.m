function imuData = senseIMU(imu)
%%% Intake date from Arduion Nano's onboard imu
    % OUTPUTS: imuData(struct) - 9-axis IMU data
    
    % get accelerometer data
    accel = readAcceleration(imu);

    % get velocity data
    vel = readAngularVelocity(imu);

    % get magnetometer data
    magnet = readMagneticField(imu);

    % package data
    imuData = struct( ...
        "accel", accel, ...
        "vel", vel,...
        "magnet", magnet);

end