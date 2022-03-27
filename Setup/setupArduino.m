function [nano_objects] = setupArduino()
%%% Setup Arduion Nano 33 BLE
    % Outputs: nano_objects(struct) - colletion of arduino object and pin
    %          values for connections

    SerialPort = 'COM13';   %serial port
    board = 'Nano33BLE';   %board name
    
    % Set up the Arduino Nano 33 BLE
    nano = arduino(SerialPort,board, 'Libraries', 'I2C');

    % Setup Pins
    sharpIR1 = "A0";
    sharpIR2 = "A1";
    sharpIR3 = "A2";
    sharpIR4 = "A3";
    sharpIR5 = "A4";
    sharpIR6 = "A5";
    sonar1 = "A6";
    sonar2 = "A7";
    tilt = "D3";
    pan = "D4";
    steer = "D5";
    throttle = "D6";
    

    % Configure Pins
    configurePin(nano,sharpIR1,'AnalogInput');  % SENSORS
    configurePin(nano,sharpIR2,'AnalogInput');
    configurePin(nano,sharpIR3,'AnalogInput');
    configurePin(nano,sharpIR4,'AnalogInput');
%     configurePin(nano,sharpIR5,'AnalogInput');
%     configurePin(nano,sharpIR6,'AnalogInput');
    configurePin(nano,sonar1,'AnalogInput');
    configurePin(nano,sonar2,'AnalogInput');

    configurePin(nano,tilt,'DigitalOutput');    % MOTORS/SERVOS
    configurePin(nano,pan,'DigitalOutput');
    configurePin(nano,steer,'DigitalOutput');
    configurePin(nano,throttle,'DigitalOutput');

    % Package Nano and connections
    sharps = [sharpIR1; sharpIR2; sharpIR3; sharpIR4];
    sonars = [sonar1; sonar2];

    nano_objects = struct(...
        "nano",nano,...
        "sharpIR",sharps,...
        "sonar",sonars,...
        "tilt",tilt,...
        "pan",pan,...
        "steer",steer,...
        "throttle",throttle);

end