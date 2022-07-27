function gpsObj=setupGPSstr(COM)
%%% Setup function for GPS
 % OUTPUT: GPS(object) - vrjoystick object
 %TODO
    %Check if RTK correction is working by reading RTK pin on GPS on Arduino
baudrate = 38400;
gpsObj = serialport(COM,baudrate);
    disp('3. Connect to GPS sensor with 9600 Buad (Check Device Manager for COM #)')
    disp('4. Setup RTK, go to NTRIP Client Settings')
    disp(['5. Credientals 1:' ...
        'IP address: 66.128.64.251' ...
        'Port: 31000' ...
        'Username: cbabe' ...
        'Password: deere1#'])
    disp('6. Credientals 2')
    disp('7. Click Mount Point details and select RTCM3_MAMI (MAMI is the closest RTK Station)')
    disp('8. Click ok')
    disp('9. RTK data should be sending to the GPS (On the GPS-RTK-SMA ZED-F9P the Green RTK light should blink and eventually turn off after the GPS gets an RTK fix)')
    disp('10. Create a new document named: C:\Users\Skull\Documents\GatorTemp\RTK_GPS\GPS_1_Data.ubx')
    disp('11. Create a new document named: C:\Users\Skull\Documents\GatorTemp\RTK_GPS\GPS_2_Data.ubx')
    disp('More information is avalible at: https://macors.massdot.state.ma.us/SBC/Account/Index?returnUrl=%2FSBC')
    disp('Username: cbabe')
    disp('Password: deere850')
end