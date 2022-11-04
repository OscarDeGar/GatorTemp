function [destVec]= ReferencePoint(middlelatref,middlelonref,gpsData,shift)
        lat1 = gpsData.lat1 * pi/180; % latitude of current pos
        lon1 = gpsData.lon1 * pi/180; % longitude of current pos
        lat2 = gpsData.lat2* pi/180; % latitude of destination
        lon2 = gpsData.lon2 * pi/180; % longitude of destination
        [latMid,lonMid]= Midpoint2GPS(lat1,lon1,lat2,lon2);
        [~,~,bear]= DistBetween2GPS(lat1,lon1,lat2,lon2);
        bear = bear-90;
        
            if bear<-180
                bear=360+bear;
            end
         [Y,X,~]=DistBetween2GPS(deg2rad(middlelatref),deg2rad(middlelonref),deg2rad(latMid),deg2rad(lonMid));
         Ymidback=Y-shift*sind(bear);
         Xmidback=X-shift*cosd(bear);
        destVec = struct( ...
        "X", Xmidback,...
        "Y", Ymidback,...
        "bear",bear);
end