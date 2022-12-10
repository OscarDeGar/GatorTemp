function [lidarCurve] = think_lidar(destVec, sensorData)
    
    % get minimum distance detected by Lidar, will be taken into account when
    % calculating curve
    lidarData = sensorData('lidar');
    % only care about forward direction
    lidarData = lidarData(45:225);
    [dist, idx] = min(lidarData);

    % if min dist less than threshold wthn threshold angle, obstacle ->
    % avoid
    % distance in cm
    if dist < 100 && (idx >= 45 && idx <= 135)
        % mark points that are farther away from average distance
        % TODO: reduce runtime
        meanLidar = mean(lidarData);
        fartherQuestionMark = zeros(length(lidarData));
        for i = 1:length(lidarData)
            fartherQuestionMark(i) = lidarData(i) > meanLidar;
        end
        % curve towards middle of biggest window of 1s
        windows = zeros(length(lidarData)-20);
        for j = 10:length(lidarData)-10
            windows(j) = mean(fartherQuestionMark((j-9):(j+10)));
        end
        curve = createBellCurve(max(windows)/3);
    
    % otherwise, no obstacle -> go towards next waypoint
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

    lidarCurve = curve; 
end