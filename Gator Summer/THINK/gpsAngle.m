function destVec = gpsAngle(CurrentPosHead, waypoints, counter)
%%% calculate heading of nearest GPS waypoint from pre-mappeed data
    % Inputs: gpsData(array) - contains data from GPS
    %         waypoints(array) - contains pre-mapped GPS waypoints
    % Outputs: destVec(array) - vector containing distance and bearing
    %                           angle between current pos and destination 
    %                           waypoint

    % define destination waypoint
    destination = waypoints(:,counter);

    % Parameters of problem
    lat1 = CurrentPosHead.lat * pi/180; % latitude of current pos
    lon1 = CurrentPosHead.lon * pi/180; % longitude of current pos
    lat2 = destination(1,1) * pi/180; % latitude of destination
    lon2 = destination(2,1) * pi/180; % longitude of destination
    R = 6371000; % radius of Earth in meterss

    % calculate distance to destination waypoint (meters)
    dist = acos(sin(lat1)*sin(lat2) + cos(lat1)*cos(lat2)*cos(lon2-lon1))*R;
    
    % calculate bearing angle relative to true North (degs)
    X = cos(lat2) * sin(lon2-lon1);
    Y = cos(lat1) * sin(lat2) - sin(lat1)*cos(lat2)*cos(lon2-lon1);
    bear = atan2(X, Y) * 180/pi;
    adjustedbear=bear-CurrentPosHead.bear;
    % struct return
    destVec = struct( ...
        "dist", dist,...
        "bear",adjustedbear);
end