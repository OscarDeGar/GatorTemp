function megaObjects = setupMega(comport)
%%% Setup Arduino Mega for Motor and Actuator control.
 % INPUT: comport(string) - Comport being used
 % OUTPUT: megaObjects(struct) - Mega, pins, objects, etc.
    
 % Connect Arduino
    mega = arduino(comport,'Uno', Libraries',{'Servo'});
    disp('Warning! RoboClaw must be OFF before running this code');

% Configure Pins

    % Driving
    steerMotor = servo(mega, 'D2', 'MinPulseDuration', 10*10^-6, 'MaxPulseDuration', 1925*10^-6);
    drive = servo(mega, 'D3', 'MinPulseDuration', 10*10^-6, 'MaxPulseDuration', 1925*10^-6);
    
    % Lights
%     redLight = 'D26';
%     orangeLight = 'D23';
%     greenLight = 'D22';
%     blueLight = 'D24';
%     whiteLight = 'D25';
%     configurePin(mega,redLight,'DigitalOutput');
%     configurePin(mega,orangeLight,'DigitalOutput');
%     configurePin(mega,greenLight,'DigitalOutput');
%     configurePin(mega,blueLight,'DigitalOutput');
%     configurePin(mega,whiteLight,'DigitalOutput');
%     disp('Lights ON = CONNECTED')
    
% RoboClaw in R-C Mode expects to start up with joystick centered
% In MATLAB function servo position is 0-1 so 0.5 (1520 ms) is centered
    writePosition(steerMotor, 0.5);     % always start servo-command at 0.5
    pause(3.0);                         % wait for Arduino to send stable pwm
    disp('Please Power up RoboClaw Now');
    pause(2.0);

    megaObjects = struct(...
        "mega",mega,...
        "steer",steerMotor,...
        "drive",drive);
end