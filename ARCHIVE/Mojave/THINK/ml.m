function [res] = ml(sensorData, hwobj)
%%% calculate drivable parts of path ahead vs. nondrivable parts
    % Inputs: sensorData(struct) - data from sensors, including lidar and camera
    %         hwobj(jetsonObj) - established jetson connection
    % Outputs: res - TBD, data structure that conveys information on parts
    %                of camera feed that are part of path vs. not part of 
    %                path

    % Extract camera and lidar feeds from sensorData

    % Transmit camera and lidar feeds to Jetson

    % Jetson will return map of image determining drivable area of camera
    % feed

    % parse results

    % (Optional? Either here or in follow up function) add vectors to
    % results based on direction of the path

    res = [];
end