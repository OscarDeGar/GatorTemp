function   [motorControls, wayStep]=thinkPathB2C(CurrentPosHead, waypoints, wayStep,FronttoBack)
%%% Think function path from Camp Bravo to Camp Charlie
 % INPUTS: SenseData(struct) - gps
 % OUTPUT: motorControls(struct) - throttle, brake, steer
    % Get Destination Vector
    Xmid=CurrentPosHead.X;
    Ymid=CurrentPosHead.Y;
    bear=CurrentPosHead.bear;
       destVec = gpsAngle(Xmid,Ymid,waypoints, wayStep,bear);
      % destVec = BicyclegpsAngle(Xmid,Ymid,waypoints, wayStep, bear,FronttoBack)
       
    % Check distance to waypoint 
        throttle = 1;
         head=destVec.waypointbear;
         dist=destVec.dist;
         steer=atand((2*FronttoBack*sind(head))/dist); %https://thomasfermi.github.io/Algorithms-for-Automated-Driving/Control/PurePursuit.html;
         motorControls  = struct( ...
           "throttle", throttle,...
           "steer",steer);
         if dist < 1 || head>90 || head<-90 %meters
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

       
    
