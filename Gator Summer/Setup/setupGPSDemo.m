function objects = setupGPSDemo(COM)
%%% General setup function
 % Inputs: joystickOpt(bool) - determine whether to setup joystick
 % Outputs: objects(struct) - contains all object types of sensors and
 % controllers
    
 % Create Objects/Setup Hardware
    Mega = setupMega(COM);
    disp('MEGA CONNNECTED')
    Joystick = setupJoystick();
    disp('JOYSTICK CONNNECTED')
    setupGPS();
    disp('GPS CONNNECTED')
    
    
 % Package objects
     objects = struct(...
         "Joystick", Joystick,...
         "Mega", Mega);
    
end