function [pitch, roll, yaw] = think_getOrientation(imuData)
    % get angle between Mojave and true North

    % this algorithm may be limited by the performance of the IMU, might
    % need to incorporate sensor fusion to possibly account for limitations
    % in accelerometer data if altitude changes are substantial

    % get IMU data
%     vel = imuData.vel;
    accel = imuData.accel;
    magnet = imuData.magnet;

    % get pitch and roll from accelerometer data
    pitch = rad2deg(atan2(-accel(1), sqrt(accel(2)*accel(2) + accel(3)*accel(3))));
    roll = rad2deg(atan2(-accel(2), accel(3)));

    % get yaw using magnetometer data along with accelerometer data
    mag_x = magnet(1)*cos(pitch) + magnet(2)*sin(roll)*sin(pitch) + magnet(3)*cos(roll)*sin(pitch);
    mag_y = magnet(2) * cos(roll) - magnet(3) * sin(roll);
    yaw = rad2deg(atan2(-mag_y,mag_x));
end