function senseData = sense(objects)
%%% Genral Sense function
 % INPUT: objects(struct) - Mega, Gps
 % OUTPUT: sensorData(struct) - sensor data

 % Capture Data
    gpsData1 = senseGPSstr(objects.GPS1);
    gpsData2 = senseGPSstr(objects.GPS2);
    % cameraData = senseCamera(objects.camera);
    % lidarData = senseLidar(objects.lidar);
 
 % Package Data
    gpsData = struct( ...
         "lon1", gpsData1.lon,...
         "lat1", gpsData1.lat,...
         "lon2", gpsData2.lon,...
         "lat2", gpsData2.lat...
         );
     senseData = struct( ...
         "gpsData", gpsData);
    %      "teensy", teensyData, ...
    %      "camera", cameraData, ...
    %      "lidar", lidarData, ...
    %      "joystick", joystickData);
end