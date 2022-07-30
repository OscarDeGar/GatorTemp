system("C:\Program Files (x86)\u-blox\u-center_v22.05\u-center.exe &");
system("C:\Program Files (x86)\u-blox\u-center_v22.05\u-center.exe &");
disp('Configure GPS RTK')
disp('1. Close Command lines')
disp('2. Open U Center')
disp('3. Connect to GPS sensor with 9600 Buad (Check Device Manager for COM #)')
disp('4. Setup RTK, go to NTRIP Client Settings')
disp('5. IP address: 66.128.64.251')
disp('6. Port: 31000')
disp('7. Username: cbabe')
disp('8. Password: deere1#')
disp('9. Click Mount Point details and select RTCM3_MAMI (MAMI is the closest RTK Station)')
disp('10. Click ok')
disp('11. RTK data should be sending to the GPS (On the GPS-RTK-SMA ZED-F9P the Green RTK light should blink and eventually turn off after the GPS gets an RTK fix)')
disp('12. Create a new document named: C:\Users\Skull\Documents\GatorTemp\RTK_GPS\GPS_1_Data.ubx')
disp('13. Create a new document named: C:\Users\Skull\Documents\GatorTemp\RTK_GPS\GPS_2_Data.ubx')
disp('More information is avalible at: https://macors.massdot.state.ma.us/SBC/Account/Index?returnUrl=%2FSBC')
disp('Username: cbabe')
disp('Password: deere850')
disp('Press any key to continue')
pause
fileID = fopen("C:\Users\Skull\Documents\GatorTemp\RTK_GPS\GPS_1_Data.ubx");
    corrections=fscanf(fileID,'%c');
    parserObj = nmeaParser("MessageId","RMC");
     rmcData = parserObj(corrections);
    % Status = 0, indicates, the input NMEA sentence is an valid RMC
    % sentence.z
        fixStatus = rmcData.FixStatus;
        latitude = rmcData.Latitude
        longitude = rmcData.Longitude
        gpsTime = rmcData.UTCDateTime;
%     n=1;
%     for i = 0:1:length(corrections)-1
%         if corrections(end-i)==newline
%             while corrections(end-i-n)~=newline
%                 single_correction(n)=corrections(end-i-n);
%                 n=n+1;
%             end
%             break
%         end
%     end
%     single_correction=flip(single_correction)
    fclose(fileID);

