function [Mega, brakeAct, gasAct] = setupArduino(COMPORT)
% SETUPARDUINO creates and configures an arduino to be a simple robot controller.
% It required which COM port your Arduino is attached to as its input and returns an Arduino object called robotArduino

% Create a global arduino object so that it can be used in functions
% a = arduino('setToYourComNumber','Uno','Libraries','Servo');
    Mega = arduino(COMPORT,'Mega2560','Libraries','Servo');
    disp('Warning! RoboClaw must be OFF before running this code');

% Configure pins
    brakeAct = 'D2';
    gasAct = 'D3';
    configurePin(Mega,brakeAct,'DigitalOutput');
    configurePin(Mega,gasAct,'DigitalOutput');

    %     configurePin(Mega,brakeAct,'AnalogOutput');
    
% Create a servo object driving PWM pin 9
% MinPulseDuration: 1120 (microseconds) center 1520 (microseconds)
% MaxPulseDuration: 1920 (microseconds)
%     positionServo = servo(Mega,'D9','MinPulseDuration',10*10^-6,'MaxPulseDuration',1925*10^-6);
    
% RoboClaw in R-C Mode expects to start up with joystick centered
% In MATLAB function servo position is 0-1 so 0.5 (1520ms) is centered
%     writePosition(positionServo,0.5)        % always start servo-command at 0.5
    pause(5.0);                             % wait for Arduino to send stable pwm
    disp('Please Power up RoboClaw Now');

end
