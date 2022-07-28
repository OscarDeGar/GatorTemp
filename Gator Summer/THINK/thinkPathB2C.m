function [motorControls, wayStep] = thinkPathB2C(senseData, waypoints, wayStep)
%%% Think function path from Camp Bravo to Camp Charlie
 % INPUTS: SenseData(struct) - gps
 % OUTPUT: motorControls(struct) - throttle, brake, steer

    % Data vars
%     sharpData = senseData.sharp;
%     sonarData = senseData.sonar;
%     gpsData = senseData.gps;
%     lidarData = senseData.gps;
%     joystickData = senseData.joystick;
    [CurrentPosHead] = currentAngleGPS(senseData.gpsData);
    % Get Destination Vector
    destVec = gpsAngle(CurrentPosHead, waypoints, wayStep);
    % Check distance to waypoint 
     throttle = 1; 

     steer= destVec.bear;
     if steer>30
         steer=30;
     end
     if steer<-30
         steer=-30;
     end
     motorControls  = struct( ...
        "throttle", throttle,...
        "steer",steer);

     if destVec.dist < 3.5 %meters
        wayStep = wayStep + 1;
     end
    % Initial heading for first point

    % lidar obstacle avoidance to alter heading
%     bearOA = lidarOA(lidarData, destVec.bear);

    % combine lidarOA and gps heading
    


end