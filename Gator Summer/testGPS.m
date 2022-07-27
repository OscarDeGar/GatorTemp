% Create a serial object.
port = 'COM1';
baudrate = 38400;
gpsObj = serialport(port,baudrate);

parserObj = nmeaParser("MessageId","RMC");

an = [];
timeOut = 5;
ts = tic;
while(toc(ts)<timeOut)
    % Read line by line from the serial object.
    data = readline(gpsObj);
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