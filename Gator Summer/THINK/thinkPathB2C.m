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

    % Get current angle we're facing
        [CurrentPosHead] = currentAngleGPS(senseData.gpsData);

    % Get Destination Vector
        destVec = gpsAngle(CurrentPosHead, waypoints, wayStep);
        
    % Check distance to waypoint 
        throttle = 1; 
        steer= destVec.bear;
        if steer>50
            steer=50;
        end
        if steer<-50
            steer=-50;
        end
        if steer<5 && steer>-5
            steer=0;
        end
        
        
    
        if destVec.dist < 1.5 || destVec.bear>90 ||  destVec.bear<-90 %meters
           wayStep = wayStep + 1;
          % [motorControls, wayStep] = thinkPathB2C(senseData, waypoints, wayStep)
        end

        motorControls  = struct( ...
           "throttle", throttle,...
           "steer",steer);
    
