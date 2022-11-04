function [destVec] = currentAngleGPS(gpsData,reference)
%%% calculate heading of Vechile through two GPS waypoints
    % Inputs: gpsData(array) - contains data from both GPS sensors
    % Outputs: currentAngle(float) - Current bearing angle 
     
     lat1 = gpsData.lat1 * pi/180; % latitude of current pos
    lon1 = gpsData.lon1 * pi/180; % longitude of current pos
    lat2 = gpsData.lat2 * pi/180; % latitude of destination
    lon2 = gpsData.lon2 * pi/180; % longitude of destination

     lat1ref = reference.lat1 * pi/180; % latitude of current pos
    lon1ref = reference.lon1 * pi/180; % longitude of current pos
    lat2ref = reference.lat2 * pi/180; % latitude of destination
    lon2ref = reference.lon2 * pi/180; % longitude of destination

    [latMid,lonMid]= Midpoint2GPS(lat1,lon1,lat2,lon2);
    [~,~,~,bear]= DistBetween2GPS(lat1, lon1,lat2,lon2);
    % calculate bearing angle relative to true North (degs)
    bear = bear-90;
    if bear<-180
        bear=360+bear;
    end
    [latback,lonback]= BearDistToGPS(latMid,lonMid,bear,-1); %1 meter to the back axel
    [latref,lonref]= Midpoint2GPS(lat1ref,lon1ref,lat2ref,lon2ref);
   [X,Y,~,~]= DistBetween2GPS(latback, lonback,latref,lonref);
    % struct return
    destVec = struct( ...
        "X",X ,...
        "Y", Y,...
        "bear",bear);
end
