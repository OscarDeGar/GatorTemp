function destVec =BicyclegpsAngle(Xmid,Ymid, waypoints, counter,bear,FronttoBack)
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
    steer1=nextwaypointbear-bear;
    dist=sqrt(Xdelta^2+Ydelta^2);
    angle=atand((2*FronttoBack*sind(steer1))/dist); %https://thomasfermi.github.io/Algorithms-for-Automated-Driving/Control/PurePursuit.html
    % struct return
    destVec = struct( ...
        "dist", dist,...
        "waypointbear",angle);
end