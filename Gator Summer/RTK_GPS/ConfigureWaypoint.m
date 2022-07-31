function [waypoints]=ConfigureWaypoint(gps1file,gps2file)
    [lat1,lon1,UTCDateTime1]=PlotGPSlog(gps1file);
    [lat2,lon2,UTCDateTime2]=PlotGPSlog(gps2file);
    
    % Check Starts of Data
    if  UTCDateTime1(1,1)< UTCDateTime2(1,1)
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
    
    % Generate Middle Line
    clf
    middlelat=mean([lat1new; lat2new]);
    middlelon=mean([lon1new; lon2new]);
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