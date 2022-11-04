function objects =  setup()
%%% General setup function
 % Outputs: objects(struct) - contains all object types of sensors and
 % controllers
    
 % Obtain objects for hardware
 [teensy] = setupTeensy();
 [camera] = setupCamera();
 [lidar] = setupLidar();
 [joystick] = setupJoystick();
    
 % Package objects
 objects = struct(...
    "teensy",teensy,...
    "camera",camera,...
    "lidar",lidar,...
    "joystick",joystick);
end