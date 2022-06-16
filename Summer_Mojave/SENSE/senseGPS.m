function gpsData = senseGPS()
%%% Read GPS data from U-Center output file
 % OUTPUTS: gpsData(struct) - longitude, latitude data

    %%$ Read Data
    fileID = fopen("C:\Users\cbabe\Documents\Testing_File.ubx");
    corrections=fscanf(fileID,'%c')
    parserObj = nmeaParser("MessageId","RMC");
    rmcData = parserObj(corrections);
    % Status = 0, indicates, the input NMEA sentence is an valid RMC
    % sentence.z

    %$$ Access Data
    fixStatus = rmcData.FixStatus;
    latitude = rmcData.Latitude
    longitude = rmcData.Longitude
    gpsTime = rmcData.UTCDateTime;
    
    gpsData = struct( ...
        "long", longitude, ...
        "lat", latitude);
end