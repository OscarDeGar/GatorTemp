function objects = setupJDemo(COM)
%%% General setup function for Joystick Demo
 % INPUT: COM(string) - comport Mega is connected to
 % OUTPUT: objects(struct) - object types of sensors and controllers
    
 % Create Objects/Setup Hardware
    Mega = setupMega(COM);
    disp('MEGA CONNNECTED')
    Joystick = setupJoystick();
    disp('JOYSTICK CONNNECTED')
    
 % Package objects
     objects = struct(...
         "Joystick", Joystick,...
         "Mega", Mega);
    
end