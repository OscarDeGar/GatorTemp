function [lidarCurve] = think_lidar(destVec, lidarData)
    
    [dist,idx] = min(lidarData);

    % if distance is less than 20, stop immediately
    if dist < 20
        curve = createBellCurve(-1);

    % if right sensors pick up object
    elseif idx < 3 && dist < 100
        % curve left
        curve = createBellCurve(3/8*dist-7.5);
    
    % if left sensors pick up object
    elseif idx >= 3 && dist < 100
        % curve right
        curve = createBellCurve(67.5-3/8*dist);

    % if middle sensor picks up an object
    % if no objects are within 1m
    else
        % get angle to GPS waypoint
        bear = destVec(2);

        angOfAttack = bear + 0; % replace 0 with angle of mojave relative to true N
        curve = createBellCurve(angOfAttack);
    end

    lidarCurve = curve; 
end