function   [motorControls, wayStep]=thinkPathB2C(CurrentPosHead, waypoints, wayStep,FronttoBack)
%%% Think function path from Camp Bravo to Camp Charlie
 % INPUTS: SenseData(struct) - gps
 % OUTPUT: motorControls(struct) - throttle, brake, steer
    % Get Destination Vector
    Xmid=CurrentPosHead.X;
    Ymid=CurrentPosHead.Y;
    bear=CurrentPosHead.bear;
       % destVec = gpsAngle(Xmid,Ymid,waypoints, wayStep,bear);
       destVec = BicyclegpsAngle(Xmid,Ymid,waypoints, wayStep, bear,FronttoBack);
    % Check distance to waypoint 
        throttle = 1;
         steer=destVec.waypointbear;
         motorControls  = struct( ...
           "throttle", throttle,...
           "steer",steer);
         if destVec.dist < 1 || steer>90 || steer<-90 %meters
            %disp("Skiped Waypoint")
           wayStep = wayStep + 1;
           if wayStep<=size(waypoints,1)
            [motorControls, wayStep]=thinkPathB2C(CurrentPosHead, waypoints, wayStep,FronttoBack);
           end
         end
        %deadzone
%         if steer < 10 && steer > -10
%             steer=0;
%         end      
end

       
    
