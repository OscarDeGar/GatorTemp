function [X,Y,bear]= DistBetween2GPS(lat1,lon1,lat2,lon2)
   R = 6371000; % radius of Earth in meterss
%     % calculate distance to destination waypoint (meters)
     dist = acos(sin(lat1)*sin(lat2) + cos(lat1)*cos(lat2)*cos(lon2-lon1))*R;
    % calculate bearing angle relative to true North (degs)
    X = cos(lat2) * sin(lon2-lon1);
    Y = cos(lat1) * sin(lat2) - sin(lat1)*cos(lat2)*cos(lon2-lon1);
    bear = atan2(X, Y) * 180/pi;
    X=dist*cosd(bear);
    Y=dist*sind(bear);
end