function destVec = gpsAngle(Xmid,Ymid, waypoints, counter,bear)
%%% calculate heading of nearest GPS waypoint from pre-mappeed data
    % Inputs: gpsData(array) - contains data from GPS
    %         waypoints(array) - contains pre-mapped GPS waypoints
    % Outputs: destVec(array) - vector containing distance and bearing
    %                           angle between current pos and destination 
    %                           waypoint
    format long
    % define destination waypoint
    destination = waypoints(counter,:);
    Xdes=destination(1,2);
    Ydes=destination(1,1);
    Xdelta=Xdes-Xmid;
    Ydelta=Ydes-Ymid;
    nextwaypointbear = rad2deg(atan2(Ydelta, Xdelta));
    dist=sqrt(Xdelta^2+Ydelta^2);
    steer=nextwaypointbear-bear;
    % struct return
    destVec = struct( ...
        "dist", dist,...
        "waypointbear",steer);
end