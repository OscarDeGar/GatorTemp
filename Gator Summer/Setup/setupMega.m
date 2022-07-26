function megaObjects = setupMega(comport)
%%% Setup Arduino Mega for Motor and Actuator control.
 % INPUT: comport(string) - Comport being used
 % OUTPUT: megaObjects(struct) - Mega, individual servo objects, etc
    
 % Connect Arduino
    mega = arduino(comport,'Mega2560','Libraries',{'SPI', 'Servo'});
    disp('Warning! RoboClaw must be OFF before runnin this code');

% Configure Pins
    steerMotor = servo(mega, 'D2', 'MinPulseDuration', 10*10^-6, 'MaxPulseDuration', 1925*10^-6);
    DACcontrol = device(mega,'SPIChipSelectPin','D10','bitorder','lsbfirst','bitrate',200000);
    writeDAC='D49';
    DACoutputselet1='D48';
    DACoutputselet2='D47';

% RoboClaw in R-C Mode expects to start up with joystick centered
% In MATLAB function servo position is 0-1 so 0.5 (1520 ms) is centered
    writePosition(steerMotor, 0.5);     % always start servo-command at 0.5
    pause(3.0);                         % wait for Arduino to send stable pwm
    disp('Please Power up RoboClaw Now');
    pause(2.0);

    megaObjects = struct(...
        "mega",mega,...
        "steer",steerMotor,...
        "DACcontrol",DACcontrol,...
        "writeDAC",writeDAC,...
        "DACoutput1",DACoutputselet1,...
        "DACoutput2",DACoutputselet2);
end