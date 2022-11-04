function [throttleSpeed, steerAngle, panAngle, tiltAngle] = think_pathPlan(destVec, sensorData)
%%% determine how mojave should react based on results from Jetson
    % Inputs:  destVec(array) - vector with distance and bearing between
    %                           Mojave and destination waypoint
    %          sensorData(struct) - data from sensors
    %          res(array) - TBD, resulting values from ML alg in Jetson
    % Outputs: throttleSpeed(float) - inputted speed of mojave
    %          steerAngle(float) - inputted angle of steering for mojave
    %          panAngle(float) - inputted angle of pan for camera
    %          tiltAngle(float) - inputted tilt angle for lidar mount
    
    % angle offset variable for IR and Lidar
    offset = 30;

    % create bell curves based off IR and Lidar data
    % dependent on destVec, since mojave must go towards waypoint
    curveLidar = think_lidar(destVec, sensorData);
    curveIR = think_IR(destVec, sensorData);
    

    % Average avoid and move values for final value
    [M, indexM] = max(curveLidar);
    [IR, indexIR] = max(curveIR);

    % plotting Lidar and Sharp data (for debugging)
%         figure(curvePlot)
%         plot(curveLidar)
%         hold on
%         plot(curveIR)
%         %legend(move, "IR");
%         hold off
    
    steerAngle = ((indexIR)-offset + 3*((indexM)-offset))/4;
    panAngle = steerAngle; % adjust to account for camera's position
    throttleSpeed = (IR + 3*M)/(8*0.0499);
    tiltAngle = 0; % tilt of lidar stays flat
    
end