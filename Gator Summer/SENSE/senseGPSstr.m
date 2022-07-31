function gpsData = senseGPSstr(gpsObj)
    % Read line by line from the serial object.
    format long
    parserObj = nmeaParser("MessageId","RMC");
        
        gpsData=read(gpsObj,parserObj);
end
function datagps=read(gpsObj,parserObj)
    data = readline(gpsObj);
        if contains(data,"$GNRMC")
            rmcData = parserObj(data);
                % Status = 0, indicates, the input NMEA sentence is an
                % valid RMC sentence
                if rmcData.Status == 0
                    datagps=struct( ...
                        'lat',rmcData.Latitude,...
                        'lon',rmcData.Longitude...
                            );
                    %gpsData.status = rmcData.FixStatus;
                    %gpsData.time = rmcData.UTCDateTime;
                end
        else
           datagps=read(gpsObj,parserObj);
        end

end