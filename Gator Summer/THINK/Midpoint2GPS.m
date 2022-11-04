function [latMid,lonMid]= Midpoint2GPS(lat1,lon1,lat2,lon2)
    Bx = cos(lat2) * cos(lon2-lon1);
    By = cos(lat2) * sin(lon2-lon1);
    latMid = rad2deg(atan2(sin(lat1) + sin(lat2), ...
                   sqrt( (cos(lat1)+Bx)*(cos(lat1)+Bx) + By*By ) ));
    lonMid = rad2deg(lon1 + atan2(By, cos(lat1) + Bx));
end