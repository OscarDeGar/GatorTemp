function [teensy] = setupTeensy()
    
    SerialPort = 'com5';   %serial port
    buadRate = 9600;       %baud rate
    
    %%Set up the serial port object
    teensy = serialport(SerialPort,buadRate);

%     configureTerminator(teensy,)
%     flush(teensy)
end