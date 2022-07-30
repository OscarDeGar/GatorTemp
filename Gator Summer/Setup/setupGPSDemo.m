function objects = setupGPSDemo(COM)
%%% General setup function for GPS DEMO
 % OUTPUT: objects(struct) - object types of sensors and controllers
    
 % Create Objects/Setup Hardware
    Mega = setupMega(COM);
    disp('MEGA CONNNECTED')
    setupGPS();
%     disp('Press any key to continue')
%     pause
    disp('GPS CONNNECTED')
    
    
 % Package objects
%      objects = struct(...
%          "Joystick", Joystick,...
%          "Mega", Mega,...
%          "GPS1",GPS1,...
%          "GPS2", GPS2);
     objects = struct(...
          "Mega", Mega);
    
end