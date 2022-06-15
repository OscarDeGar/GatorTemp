function destVec = gpsAngle(gpsData, waypoints)
%%% calculate heading of nearest GPS waypoint from pre-mappeed data
    % Inputs: gpsData(array) - contains data from GPS
    %         gpsMap(array) - contains pre-mapped GPS waypoints
    % Outputs: destVec(array) - vector containing distance and bearing
    %                           angle between current pos and destination 
    %                           waypoint
    
%     % Assumes gpsMap has the GPS points in order of planned traversing
%     arrived = true;
%
%     % exit loop when we have not arrived at destination
%     while arrived
%     
%         % get distance marker for target waypoint
%         dist = gpsData - gpsMap(1);
%     
%         % if arrived at target, pop target from gpsMap and try again
%         if dist < threshold
%             gpsMap(1) = []; % pop
%             arrived = true;
%         else
%             arrived = false;
%         end
%     end

    % define destination waypoint
    destination = waypoints(1);

    % Parameters of problem
    lat1 = gpsData(1) * pi/180; % latitude of current pos
    lon1 = gpsData(2) * pi/180; % longitude of current pos
    lat2 = destination(1) * pi/180; % latitude of destination
    lon2 = destination(2) * pi/180; % longitude of destination
    R = 6371000; % radius of Earth in meters

    % calculate distance to destination waypoint (meters)
    dist = acos(sin(lat1)*sin(lat2) + cos(lat1)*cos(lat2)*cos(lon2-lon1))*R;
    
    % calculate bearing angle relative to true North (radians)
    X = cos(lat2) * sin(lon2-lon1);
    Y = cos(lat1) * sin(lat2) - sin(lat1)*cos(lat2)*cos(lon2-lon1);
    bear = atan2(X, Y);

    % return vector
    destVec = [dist bear];
end