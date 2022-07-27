function gpsData = senseGPSstr(obj,whichgps)
%%% Read GPS data from U-Center output file
 % OUTPUTS: gpsData(struct) - longitude, latitude data
    %%$ Read Data
    %fileID = fopen("C:\Users\Skull\Documents\GatorTemp\RTK_GPS\GPS_1_Data.ubx");
    format long
parserObj = nmeaParser("MessageId","RMC");
    % Read line by line from the serial object.
    
    if whichgps==1
        fileID = fopen("C:\Users\Skull\Documents\GatorTemp\RTK_GPS\GPS_1_Data.ubx");
    else
        fileID = fopen("C:\Users\Skull\Documents\GatorTemp\RTK_GPS\GPS_2_Data.ubx");
    end
    data = readline(obj);
    fwrite(fileID,data)
    rmcData = parserObj(data);
    % Status = 0, indicates, the input NMEA sentence is an valid RMC
    % sentence.
    if rmcData.Status == 0
        fixStatus = rmcData.FixStatus;
        latitude = rmcData.Latitude;
        longitude = rmcData.Longitude;
        gpsTime = rmcData.UTCDateTime;
        % Plot the position in geographic coordinates.
        geoplot(latitude,longitude,'Marker',"diamond",'MarkerSize',10,'Color','b', ...
            'MarkerFaceColor','r');
        % Selects the basemap.
        geobasemap streets;
        % Fix Status A represents the satellite fix is obtained.
        if fixStatus == "A"
            % Adjust the geographic limits of the current geographic axes.
            geolimits([latitude-2.5,latitude+2.5],[longitude-2.5,longitude+2.5]) ;
            txt = strcat("Timestamp: ",string(gpsTime));
        else
            txt =  "No Fix";
        end
        % Update time or Fix Status on the figure.
        delete(an);
        an = annotation('textbox', [0.005, 0.98, 0.6, 0.01], 'FitBoxToText','on', ...
            'string', txt,'Color','blue','FontSize',10);
    end
end
    fclose(fileID);
    gpsData = struct( ...
        "long1", longitude1, ...
        "lat1", latitude1, ...
        "long2", longitude2, ...
        "lat2", latitude2);
end