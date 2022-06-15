fileID = fopen("C:\Users\cbabe\Documents\Testing_File.ubx");
    corrections=fscanf(fileID,'%c')
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

