function objects = setup()
    %%% General setup function
    % Outputs: objects(struct) - contains all object types of sensors and
    % controllers
    
    % subject to change based on whats connected to teensy vs nuc
    [teensy] = setupTeensy();
    [camera] = setupCamera();
    [gps] = setupGps();
    [lidar] = setupLidar();
    [joystick] = setupJoystick();
    
    objects = struct("teensy", teensy, "camera", camera,"gps", gps,"lidar", lidar, "joystick", joystick);
    
    % objects = struct("teensy", teensy, "camera", camera,"gps", gps,"lidar", lidar, "joystick", joystick, "sharp", sharpIR, "sonar", sonar);

end