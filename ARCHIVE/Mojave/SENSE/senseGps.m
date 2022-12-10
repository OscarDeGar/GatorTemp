function [gpsData] = senseGps(gps)
%%% Intake GPS data
    % OUTPUTS: gpsData(timetable) - holds all produced data from gps

    % Get Data
    gpsData = read(gps);
    
    % NOTE: We may only want the LLA information
    % gpsData = data.LLA;
    
end
