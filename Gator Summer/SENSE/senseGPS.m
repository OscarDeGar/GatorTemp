function gpsData = senseGPS(obj)
%%% Read GPS data from U-Center output file
 % OUTPUTS: gpsData(struct) - longitude, latitude data
    %%$ Read Data
    parserObj = nmeaParser("MessageId","RMC");
    format long
    fileID = fopen("C:\Users\Skull\Documents\GatorTemp\RTK_GPS\GPS_Test_Parkinglot_Right.ubx",'r');
    corrections=fscanf(fileID,'%c');
    k = strfind(corrections,"$GNRMC");
        singlecorrection=corrections(k(end-1):k(end-1)+136);
        rmcData = parserObj(singlecorrection);
        if rmcData.Status == 0
            latitude1 = rmcData(end).Latitude;
            longitude1 = rmcData(end).Longitude;
        else
             latitude1=0;
             longitude1=0;
        end
    
   % gpsTime = rmcData(end).UTCDateTime;
    fclose(fileID);
    fileID = fopen("C:\Users\Skull\Documents\GatorTemp\RTK_GPS\GPS_Test_Parkinglot_Left.ubx",'r');
    corrections=fscanf(fileID,'%c');
     k = strfind(corrections,"$GNRMC");
        singlecorrection=corrections(k(end-1):k(end-1)+136);
        rmcData = parserObj(singlecorrection);
        if rmcData.Status == 0
            latitude2 = rmcData(end).Latitude;
            longitude2 = rmcData(end).Longitude;
        else
             latitude2=0;
             longitude2=0;
        end
   %  gpsTime = rmcData(end).UTCDateTime;
    fclose(fileID);
    gpsData = struct( ...
        "lon1", longitude1, ...
        "lat1", latitude1, ...
        "lon2", longitude2, ...
        "lat2", latitude2);
end