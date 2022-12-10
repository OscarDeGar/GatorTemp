function objects = setupGPSDemo(COM,COMGPS1,COMGPS2)
%%% General setup function for GPS DEMO
 % OUTPUT: objects(struct) - object types of sensors and controllers
    
 % Create Objects/Setup Hardware
    Mega = setupMega(COM);
    disp('MEGA CONNNECTED');
    gpsobject=setupGPSstr(COMGPS1,COMGPS2);
    disp('GPS1 AND GPS2 CONNNECTED');
   objects = struct(...
          "Mega", Mega,...
          "GPS1",gpsobject.gpsObj1,...
          "GPS2",gpsobject.gpsObj2);
    
end