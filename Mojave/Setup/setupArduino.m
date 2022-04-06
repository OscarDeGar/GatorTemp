function [nano_objects] = setupArduino(SerialPort)
%%% Setup Arduion Nano 33 BLE
    % Outputs: nano_objects(struct) - colletion of arduino object and pin
    %          values for connection

    board = 'Nano33BLE';   %board name
    
    % Set up the Arduino Nano 33 BLE and IMU
    nano = arduino(SerialPort,board, 'Libraries', 'I2C');
    imu = lsm9ds1(nano,"Bus",1);

    % Setup Pins
    sharpIR1 = "A0";
    sharpIR2 = "A1";
    sharpIR3 = "A2";
    sharpIR4 = "A3";
    sharpIR5 = "A6";  %% Can get rid of two sharp or 2 sonar
    sharpIR6 = "A7";  %% internal pull up, defaulted for I2C bus
%     sonar1 = "A6";
%     sonar2 = "A7";
    panPin = "D3";
    tiltPin = "D4";
    steer = "D5";
    throttle = "D6";
    

    % Configure Pins
    configurePin(nano,sharpIR1,'AnalogInput');  % SENSORS
    configurePin(nano,sharpIR2,'AnalogInput');
    configurePin(nano,sharpIR3,'AnalogInput');
    configurePin(nano,sharpIR4,'AnalogInput');
    configurePin(nano,sharpIR5,'AnalogInput');
    configurePin(nano,sharpIR6,'AnalogInputna');
%     configurePin(nano,sonar1,'AnalogInput');
%     configurePin(nano,sonar2,'AnalogInput');

     % MOTORS/SERVOS
    configurePin(nano,steer,'DigitalOutput');
    configurePin(nano,throttle,'DigitalOutput');
    tilt = servo(nano, tiltPin, 'MinPulseDuration', 553*10^-6, 'MaxPulseDuration', 2450*10^-6);
    pan = servo(nano, panPin, 'MinPulseDuration', 553*10^-6, 'MaxPulseDuration', 2450*10^-6);

    % Package Nano and connections
    sharps = [sharpIR1; sharpIR2; sharpIR3; sharpIR4, sharpIR5, sharpIR6];
%     sonars = [sonar1; sonar2];

    nano_objects = struct(...
        "nano",nano,...
        "imu",imu,...
        "sharpIR",sharps,...
        "tilt",tilt,...
        "pan",pan,...
        "steer",steer,...
        "throttle",throttle);
%       "sonar", sonars,...
end