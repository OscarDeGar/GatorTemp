function [steerAngle] = getTrajectoryGps(gpsData, gpsMap)
%%% calculate heading of nearest GPS waypoint from pre-mappeed data
    % Inputs: gpsData(array) - contains data from GPS
    %         gpsMap(array) - contains pre-mapped GPS waypoints
    % Outputs: steerAngle(float) - angle of nearest GPS waypoint
    
    distances = zeros(1, length(gpsMap));

    % get distance markers for each waypoint
    for waypoint=1:length(gpsMap) 
        distances(:,waypoint) = gpsData - waypoint;
    end
    
    % determine angle to nearest coordinate
    [dist, idx] = min(distances);
    waypoint = gpsMap(:, idx);
    % steerAngle = ;  | vector math based on relaive position and waypoint
    steerAngle = 0;
end