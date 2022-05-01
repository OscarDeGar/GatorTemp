function [IRCurve] = think_IR(destVec, sensorData)
    
    % get IR data, find minimum distance detected
    sharpData = sensorData('sharp');
    [dist,idx] = min(sharpData);

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
        
    % if no objects are within 1m
    else
        % get Mojave's orientation (yaw)
        dirs = think_getOrientation(sensorData('imu'));
        yaw = dirs(3);
        
        % get angle to GPS waypoint
        bear = destVec(2);
        angOfAttack = bear + yaw;
    
        % get results of lidarData and determine curve
        curve = createBellCurve(angOfAttack);
    end

    IRCurve = curve; 
end
