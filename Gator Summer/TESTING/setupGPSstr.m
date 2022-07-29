function gpsObj=setupGPSstr(COM)
%%% Setup function for GPS
 % OUTPUT: GPS(object) - vrjoystick object
 %TODO
    %Check if RTK correction is working by reading RTK pin on GPS on Arduino
baudrate = 38400;
gpsObj = serialport(COM,baudrate);
end