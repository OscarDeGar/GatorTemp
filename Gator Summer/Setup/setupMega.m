function megaObjects = setupMega(comport)
%%% Setup Arduino Mega for Motor and Actuator control.
 % INPUT: comport(string) - Comport being used
 % OUTPUT: megaObjects(struct) - Mega, individual servo objects, etc
    
 % Connect Arduino
    mega = arduino(comport,'Mega','Libraries','Servo');
    disp('Warning! RoboClaw must be OFF before runnin this code');

% Configure Pins
    gasAct = 'D2';
    brakeAct = 'D3';
    configurePin(mega,gasAct,'DigitalOutput');
    configurePin(mega,brakeAct,'DigitalOutput');
    steerMotor = servo(mega, 'D9', 'MinPulseDuration', 10*10^-6, 'MaxPulseDuration', 1925*10^-6);
    
% RoboClaw in R-C Mode expects to start up with joystick centered
% In MATLAB function servo position is 0-1 so 0.5 (1520 ms) is centered
    writePosition(steerMotor, 0.5);     % always start servo-command at 0.5
    pause(3.0);                         % wait for Arduino to send stable pwm
    disp('Please Power up RoboClaw Now');
    pause(2.0);

    megaObjects = struct(...
        "mega",mega,...
        "steer",steerMotor);
end