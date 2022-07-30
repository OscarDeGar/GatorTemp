function senseData = sense(objects)
%%% Genral Sense function
 % INPUT: objects(struct) - Mega, Gps
 % OUTPUT: sensorData(struct) - sensor data

 % Capture Data
    % gpsData1 = senseGPS(objects.GPS1,1);
    % gpsData2 = senseGPS(objects.GPS2,2);
    gpsData=senseGPS();
    % cameraData = senseCamera(objects.camera);
    % lidarData = senseLidar(objects.lidar);
 
 % Package Data
    % senseData = struct( ...
    %     "gpsData1", gpsData1,...
    %     "gpsData2", gpsData2);
     senseData = struct( ...
         "gpsData", gpsData);
    %      "teensy", teensyData, ...
    %      "camera", cameraData, ...
    %      "lidar", lidarData, ...
    %      "joystick", joystickData);
end