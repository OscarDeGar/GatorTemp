function objects =  setup()
%%% General setup function
 % Outputs: objects(struct) - contains all object types of sensors and
 % controllers
    
 % Obtain objects for hardware
%  [teensy] = setupTeensy();
%  [camera] = setupCamera();
 %[lidar] = setupLidar();
 [GPS] = setupGPS();
%  [joystick] = setupJoystick();
    
 % Package objects
 objects = struct(...
     "GPS", GPS);
   % "lidar",lidar,...
    
end