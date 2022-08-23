function   [motorControls, wayStep]=thinkPathB2C(CurrentPosHead, waypoints, wayStep)
%%% Think function path from Camp Bravo to Camp Charlie
 % INPUTS: SenseData(struct) - gps
 % OUTPUT: motorControls(struct) - throttle, brake, steer
    % Get Destination Vector

 

    Xmid=CurrentPosHead.X;
    Ymid=CurrentPosHead.Y;
    bear=CurrentPosHead.bear;
        destVec = gpsAngle(Xmid,Ymid,waypoints, wayStep);
        
    % Check distance to waypoint 
        throttle = 1;
         steer=destVec.waypointbear-bear;
         motorControls  = struct( ...
           "throttle", throttle,...
           "steer",steer);
         if destVec.dist < 1.5 || steer>90 || steer<-90 %meters
            %disp("Skiped Waypoint")
           wayStep = wayStep + 1;
           if wayStep<=size(waypoints,1)
            [motorControls, wayStep]=thinkPathB2C(CurrentPosHead, waypoints, wayStep);
           end
         end

      
%         if steer<-30
%             steer=-30;
%         end
%         if steer>30
%             steer=30;
%         end
%          motorControls  = struct( ...
%            "throttle", throttle,...
%            "steer",steer);
        %deadzone
%         if steer < 10 && steer > -10
%             steer=0;
%         end


        
end

       
    
