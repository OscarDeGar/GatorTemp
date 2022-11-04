function [teensy] = setupTeensy(comport)
%%% Setup Teensy Func
 % OUTPUT: Teensy(object) - serial conn. to Teensy

    % Set Comport and baudrate
    SerialPort = comport;   % serial port
    BaudRate = 115200;     % baud rate

    % Set up the serial port object
    teensy = serialport(SerialPort,BaudRate);

%     configureTerminator(teensy,)
    flush(teensy)
end 