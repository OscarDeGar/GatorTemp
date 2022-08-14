function [waypoints]=ConfigureWaypoint(gps1file,gps2file)
    [lat1,lon1,UTCDateTime1]=PlotGPSlog(gps1file);
    [lat2,lon2,UTCDateTime2]=PlotGPSlog(gps2file);
    
    % Check Starts of Data
    if  UTCDateTime1(1,1)==UTCDateTime2(1,1)
        for i=1:size(lat1,2)
            if  UTCDateTime1(1,i)==UTCDateTime2(1,1)
                start=i;
                disp("Found Start 2")
            break
            end
        end
        sizearray=size(lat2,2);
        lat1new=lat1(1,start:start+sizearray-1);
        lon1new=lon1(1,start:start+sizearray-1);
        lat2new=lat2(1,1:size(lat1new,2));
        lon2new=lon2(1,1:size(lat1new,2));
    
    else
        for i=1:size(lat2,2)
            if  UTCDateTime1(1,1)==UTCDateTime2(1,i)
            start=i;
            disp("Found Start 1")
            break
            end
        end
    
        % Check ends of Data
        if UTCDateTime1(1,end)< UTCDateTime2(1,end)
            sizearray=size(lat1,2);
            lat2new=lat2(1,start:start+sizearray-1);
            lon2new=lon2(1,start:start+sizearray-1);
            lat1new=lat1(1,1:size(lat2new,2));
            lon1new=lon1(1,1:size(lat2new,2));
        else
             lat2new=lat2(1,start:end);
             lon2new=lon2(1,start:end);
             length=size(lon2new,2);
            lat1new=lat1(1,1:length);
            lon1new=lon1(1,1:length);
        end
    end
    %Covert to middle front wheel
    middlelat=mean([lat1new; lat2new]);
    middlelon=mean([lon1new; lon2new]);
    R = 6371000; % radius of Earth in meters
    for i=1:size(middlelat,2)
        lat1 = lat1new(1,i) * pi/180; % latitude of current pos
        lon1 = lon1new(1,i) * pi/180; % longitude of current pos
        lat2 = lat2new(1,i)* pi/180; % latitude of destination
        lon2 = lon2new(1,i) * pi/180; % longitude of destination
        
        % calculate bearing angle relative to true North (degs)
        X = cos(lat2) * sin(lon2-lon1);
        Y = cos(lat1) * sin(lat2) - sin(lat1)*cos(lat2)*cos(lon2-lon1);
        bear = atan2(X, Y) * 180/pi-90;
            if bear<-180
                bear=360+bear;
            end
            %Convert meters to latitude
        middlelat(1,i)=middlelat(1,i)+ ((cosd(bear)*0.762) / R) * (180 / pi);%0.762 meters is the distance between the center of the gps's and the front axel
        middlelon(1,i)= middlelon(1,i)+ ((sind(bear)*0.762) / R) * (180 / pi) / cos( middlelon(1,i) * pi/180);%+cosd(bear)*0.762;

    end
    % Generate Middle Line
    clf
    waypoints=[middlelat(5:2:end);middlelon(5:2:end)];
    figure(2)
    start=1;
    section=size(middlelat,2);
    hold on
    plot(middlelon(start:section),middlelat(start:section),'-b');
    plot(lon1new(start:section),lat1new(start:section),'-y');
    plot(lon2new(start:section),lat2new(start:section),'-g');
    hold off
    
    % Clean Workspace
    vars = {'i','lat1','lat1new','lat2','lat2new','length','lon1','lon1new','lon2','lon2new',...
        'middlelat','middlelon','section','start','UTCDateTime1','UTCDateTime2'};
    clear (vars{:});
    clear vars;
end