function gpsData = senseGPS(obj)
%%% Read GPS data from U-Center output file
 % OUTPUTS: gpsData(struct) - longitude, latitude data
    %%$ Read Data
    %fileID = fopen("C:\Users\Skull\Documents\GatorTemp\RTK_GPS\GPS_1_Data.ubx");
    format long
    fileID = fopen("C:\Users\cbabe\Documents\GATOR\GatorTemp\Gator Summer\Setup\test1.ubx",'r')
    corrections=fscanf(fileID,'%c');
    parserObj = nmeaParser("MessageId","RMC");
    size(parserObj);
    rmcData = parserObj(corrections);
    latitude1 = rmcData(end).Latitude;
    longitude1 = rmcData(end).Longitude;
   % gpsTime = rmcData(end).UTCDateTime;
    fclose(fileID);
    fileID = fopen("C:\Users\cbabe\Documents\GATOR\GatorTemp\Gator Summer\Setup\test2.ubx",'r');
    corrections=fscanf(fileID,'%c');
    pnmea = nmeaParser("MessageId","RMC");
    rmcData = pnmea(corrections);
    latitude2 = rmcData(end).Latitude;
    longitude2 = rmcData(end).Longitude; 
   %  gpsTime = rmcData(end).UTCDateTime;
    fclose(fileID);
    gpsData = struct( ...
        "long1", longitude1, ...
        "lat1", latitude1, ...
        "long2", longitude2, ...
        "lat2", latitude2);
end