function gpsData = senseGPSstr(s)
    fopen(s);
    gpsData = fscanf(s, '%c');
    fclose(s);
    delete(s);
%     % Read line by line from the serial object.
%     data = readline(gpsObj);
%     rmcData = parserObj(data);
%     gpsData=struct( ...
%         'lat',[],...
%         'lon',[],...
%         'time',[],...
%         'status',[]);
%     % Status = 0, indicates, the input NMEA sentence is an valid RMC
%     % sentence.
%     if rmcData.Status == 0
%         gpsData.status = rmcData.FixStatus;
%         gpsData.lat = rmcData.Latitude;
%         gpsData.lon = rmcData.Longitude;
%         gpsData.time = rmcData.UTCDateTime;
%     end
end