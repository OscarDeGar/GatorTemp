function [motorControls, masterHeading] = thinkGoHome(senseData, waypoints, wayStep)
%%% Think function for following path around the O
 % INPUT: SenseData(struct) - sharp, sonar, lidar, camera, gps, joystick
 % OUTPUT: motorControls(struct) - Throt, steer, maxSpeed, pan, tilt, lidar

    % Data vars
%     sharpData = senseData.sharp;
%     sonarData = senseData.sonar;
    gpsData = senseData.gps;
%     lidarData = senseData.gps;
%     joystickData = senseData.joystick;
    
    %%% SAFETY CHECK
%     % Simple Safety Check(Sharp/Sonar)
%     motorControls = safetyCheck(sharpData, sonarData);
% 
%     % Advanced Safety Check(Lidar)
%     motorControls = safetyLidar(lidarData);

    %%% GET VECTOR
    % Check distance to waypoint
    if destVec.dist < 1
        wayStep = wayStep + 1;
    end

    % Get Destination Vector
    if motorControls == -1
        destVec = gpsAngle(gpsData, waypoints, wayStep);
    end
    
    % Initial heading for first point
    if isempty(masterHeading)
        masterHeading = [destVec.bear wayStep];
    end
end