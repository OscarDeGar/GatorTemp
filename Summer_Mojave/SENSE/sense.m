function senseData = sense(objects)
%%% Genral Sense function
 % INPUT: objects - struct w/ Teensy, GPS, Camera
 % OUTPUT: sensorData - struct with sensor data
 teensyData = senseTeensy(objects.teensy);
 gpsData = senseGps(objects.gps);
 cameraData = senseCamera(objects.camera);
 lidarData = senseLidar(objects.lidar);
 joystickData = senseJoysticl(objects.joystick);

 senseData = struct( ...
     "teensy", teensyData, ...
     "gps", gpsData,...
     "camera", cameraData, ...
     "lidar", lidarData, ...
     "joystick", joystickData);
end