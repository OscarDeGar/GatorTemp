function objects =  setup()
%%% General setup function
 % OUTPUT: objects(struct) - object types of sensors and controllers
    
 % Create Objects/Setup Hardware
    GPS = setupGPS();
    disp('GPS CONNNECTED')
    % lidar = setupLidar();
    % disp('LIDAR CONNNECTED')
    Mega = setupMega();
    disp('MEGA CONNNECTED')
        
 % Package objects
     objects = struct(...
         "GPS", GPS,...
         "Mega", Mega);
    
end