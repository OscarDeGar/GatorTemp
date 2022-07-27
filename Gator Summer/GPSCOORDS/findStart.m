function dist = findStart(lat1,long1,lat2,long2)
    % Parameters of problem
    lat1 = lat1 * pi/180; % latitude of current pos
    lon1 = long1* pi/180; % longitude of current pos
    lat2 = lat2 * pi/180; % latitude of current pos
    lon2 = long2 * pi/180; % longitude of current pos
    R = 6371000; % radius of Earth in meterss

    % calculate distance to destination waypoint (meters)
    dist = acos(sin(lat1)*sin(lat2) + cos(lat1)*cos(lat2)*cos(lon2-lon1))*R;
end