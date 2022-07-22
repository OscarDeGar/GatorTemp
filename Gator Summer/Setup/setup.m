function objects =  setup(joystickOpt)
%%% General setup function
 % Inputs: joystickOpt(bool) - determine whether to setup joystick
 % Outputs: objects(struct) - contains all object types of sensors and
 % controllers
    
 % Create Objects/Setup Hardware
    GPS = setupGPS();
    disp('GPS CONNNECTED')
    % lidar = setupLidar();
    % disp('LIDAR CONNNECTED')
    Mega = setupMega();
    disp('MEGA CONNNECTED')
    if joystickOpt
        Joystick = setupJoystick();
        disp('JOYSTICK CONNNECTED')
    end
    
 % Package objects
     objects = struct(...
         "GPS", GPS,...
         "Joystick", Joystick,...
         "Lidar", Lidar,...
         "Mega", Mega);
    
end