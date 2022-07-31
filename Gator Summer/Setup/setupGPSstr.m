function gpsObj = setupGPSstr(port1,port2)
    system("C:\Users\Skull\Documents\RTKLIB_bin\bin\strsvr.exe &");
    system("taskkill /IM cmd.exe");
     disp('1. Connect to GPS sensor with 38400 Buad (Check Device Manager for COM #)')
    disp('2. ClickNTRIP Client Settings')
    disp(['3. Credientals 1:' ...
        'IP address: 66.128.64.251' ...
        'Port: 31000' ...
        'Username: cbabe' ...
        'Password: deere1#'])
    disp('4. Click Mount Point details and select RTCM3_MAMI (MAMI is the closest RTK Station)')
    disp('5. Green lights should blink on both the NTRIP and Serial connections')
    disp('5. RTK data should be sending to the GPS (On the GPS-RTK-SMA ZED-F9P the Green RTK light should blink and eventually turn off after the GPS gets an RTK fix)')
    disp('After configuring STRSVR press any button to continue')
    baudrate = 38400;
    gpsObj1 = serialport(port1,baudrate);
    gpsObj2 = serialport(port2,baudrate);
       gpsObj = struct(...
          "gpsObj1",gpsObj1,...
          "gpsObj2",gpsObj2);
end