function [destVec] = currentAngleGPS(gpsData)
%%% calculate heading of Vechile through two GPS waypoints
    % Inputs: gpsData(array) - contains data from both GPS sensors
    % Outputs: currentAngle(float) - Current bearing angle 
    gpsData
    lat1 = gpsData.lat1 * pi/180; % latitude of current pos
    lon1 = gpsData.long1 * pi/180; % longitude of current pos
    lat2 = gpsData.lat2 * pi/180; % latitude of destination
    lon2 = gpsData.long2 * pi/180; % longitude of destination
    R = 6371000; % radius of Earth in meterss

    % calculate distance to destination waypoint (meters)
    dist = acos(sin(lat1)*sin(lat2) + cos(lat1)*cos(lat2)*cos(lon2-lon1))*R;
    
    % calculate bearing angle relative to true North (degs)
    X = cos(lat2) * sin(lon2-lon1);
    Y = cos(lat1) * sin(lat2) - sin(lat1)*cos(lat2)*cos(lon2-lon1);
    bear = atan2(X, Y) * 180/pi;

    % struct return
    destVec = struct( ...
        "dist", dist,...
        "bear",bear)
end

