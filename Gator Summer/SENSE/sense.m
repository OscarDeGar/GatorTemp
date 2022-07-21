function senseData = sense(objects)
%%% Genral Sense function
 % INPUT: objects(struct) - Teensy, GPS, Camera
 % OUTPUT: sensorData(struct) - sensor data

 % Capture Data
%  teensyData = senseTeensy(objects.teensy);
 gpsData = senseGPS(objects.GPS);
%  cameraData = senseCamera(objects.camera);
%  lidarData = senseLidar(objects.lidar);
%  joystickData = senseJoysticl(objects.joystick);
 
 % Package Data
 senseData = struct( ...
     "gps", gpsData);
         %      "teensy", teensyData, ...
%      "camera", cameraData, ...
%      "lidar", lidarData, ...
%      "joystick", joystickData);
end