function destVec = getTrajectoryGps(gpsData, gpsMap)
%%% calculate heading of nearest GPS waypoint from pre-mappeed data
    % Inputs: gpsData(array) - contains data from GPS
    %         gpsMap(array) - contains pre-mapped GPS waypoints
    % Outputs: dest_vec(array) - vector between current position and 
    %                               next waypoint
    
    % Assumes gpsMap has the GPS points in order of planned traversing
    arrived = true;

    % exit loop when we have not arrived at destination
    while arrived
    
        % get distance marker for target waypoint
        dist = gpsData - gpsMap(1);
    
        % if arrived at target, pop target from gpsMap and try again
        if dist < threshold
            gpsMap(1) = []; % pop
            arrived = true;
        else
            arrived = false;
        end
    end

    % define destination waypoint
    destination = gpsMap(1);

    % create vector from vehicle to destination waypoint
    % destVec = | based on subtracting lat and long values from gpsData
    %              and destination
end


%% Old Code

%     distances = zeros(1, length(gpsMap));
% 
%     % get distance markers for each waypoint
%     for waypoint=1:length(gpsMap) 
%         distances(:,waypoint) = gpsData - waypoint;
%     end
%     
%     % determine angle to nearest coordinate
%     [dist, idx] = min(distances);
%     % remove waypoints from gpsMap if crossed
%     if dist < threshold
%         gpsMap(:, idx) = []
%         distances(idx) = []
%         [dist, idx] = min(distances);
%     end
%     % get nearest waypoint
%     waypoint = gpsMap(:, idx);
%     % steerAngle = ;  | vector math based on relaive position and waypoint
%     steerAngle = 0;