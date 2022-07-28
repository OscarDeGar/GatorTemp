function [destVec] = currentAngleGPS(gpsData)
%%% calculate heading of Vechile through two GPS waypoints
    % Inputs: gpsData(array) - contains data from both GPS sensors
    % Outputs: currentAngle(float) - Current bearing angle 
    middlelat=mean([ gpsData.lat1; gpsData.lat2]);
    middlelon=mean([ gpsData.lon1; gpsData.lon2]);
    lat1 = gpsData.lat1 * pi/180; % latitude of current pos
    lon1 = gpsData.lon1 * pi/180; % longitude of current pos
    lat2 = gpsData.lat2 * pi/180; % latitude of destination
    lon2 = gpsData.lon2 * pi/180; % longitude of destination
    
    % calculate bearing angle relative to true North (degs)
    X = cos(lat2) * sin(lon2-lon1);
    Y = cos(lat1) * sin(lat2) - sin(lat1)*cos(lat2)*cos(lon2-lon1);
    bear = atan2(X, Y) * 180/pi-90;
    if bear<0
        bear=360+bear;
    end
    % struct return
    destVec = struct( ...
        "lat", middlelat,...
        "lon", middlelon,...
        "bear",bear);
end

