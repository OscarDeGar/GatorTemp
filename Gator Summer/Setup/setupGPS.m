function setupGPS()
%%% Setup function for GPS
 % OUTPUT: GPS(object) - vrjoystick object
 %TODO
    %Check if RTK correction is working by reading RTK pin on GPS on Arduino
    system("C:\Program Files (x86)\u-blox\u-center_v22.05\u-center.exe &");
    system("C:\Program Files (x86)\u-blox\u-center_v22.05\u-center.exe &");
    system("taskkill /IM cmd.exe")
    disp('Configure GPS RTK')
    disp('1. Close Command lines')
    disp('2. Open U Center')
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
    disp('Press any key to continue')
    pause
end