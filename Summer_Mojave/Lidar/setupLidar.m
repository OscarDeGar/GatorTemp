function [lidar] = setupLidar(COM)
%%% setupLidar - setup hokuyo URG-4LX-UG01 LIDAR
% Inputs: COM(string) - comport to connect to
% Outputs: lidar(object) - lidar connection

    lidar = serial(COM,'baudrate',115200);
    set(lidar,'Timeout',2);
    set(lidar,'InputBufferSize',20000);
    set(lidar,'Terminator','LF/CR');
   
    % Configure Hokuyo Parameters
    fopen(lidar);               % Open serial port
    pause(0.3);

    fprintf(lidar,'SCIP2.0');   % Writes string cmd to lidar
    pause(0.3);
    
    fscanf(lidar);           
    fprintf(lidar,'VV');        % Read for ASCII data
    pause(0.3);

    fscanf(lidar);
    fprintf(lidar,'BM');
    pause(0.3);

    fscanf(lidar);
    fprintf(lidar,'GD0044072500');
    pause(0.1);
    fscanf(lidar);
    clc
    disp("Lidar Set")

end