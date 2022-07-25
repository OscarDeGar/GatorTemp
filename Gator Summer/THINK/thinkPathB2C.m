function [motorControls, masterHeading] = thinkPathB2C(senseData, waypoints, wayStep, masterHeading)
%%% Think function path from Camp Bravo to Camp Charlie
 % INPUTS: SenseData(struct) - gps
 % OUTPUT: motorControls(struct) - throttle, brake, steer

    % Data vars
%     sharpData = senseData.sharp;
%     sonarData = senseData.sonar;
%     gpsData = senseData.gps;
%     lidarData = senseData.gps;
%     joystickData = senseData.joystick;
    gpsData = senseData;
    
    %%% SAFETY CHECK
   
    %%% GET VECTOR
    
    % Get Destination Vector
    if motorControls == -1
        destVec = gpsAngle(gpsData, waypoints, wayStep);
    end

    % Check distance to waypoint
    if destVec.dist < 1
        wayStep = wayStep + 1;
    end 
    
    % Initial heading for first point
    if isempty(masterHeading)
        masterHeading = [destVec.bear wayStep];
    end
    
    % lidar obstacle avoidance to alter heading
    bearOA = lidarOA(lidarData, destVec.bear);

    % combine lidarOA and gps heading
    


end