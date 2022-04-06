function lidar = setupLidar()
    %%% Setup Lidar
    % OUTPUTS: lidar(object) - lidar object

    % Setup params for Hokuyo Lidar
    comPort = "COM21";
    lidar = serial(comPort,'baudrate',115200);
    set(lidar,'Timeout',2); % set communication link timeout
    set(lidar,'InputBufferSize',20000); % set data input buffer size % what is this 
    set(lidar,'Terminator','LF/CR'); % set data stream terminator for printf 
                                     % and fscanf. A read operation with fgetl,
                                     % fgets or fscanf completes when
                                     % terminator value is read
 
    fopen(lidar); % connects the serial port object, the lidar. 
    pause(0.3); % pause to allow command to transmit 
    fprintf(lidar,'SCIP2.0'); % writes string cmd to the lidar
    pause(0.3); % pause to allow cmd to be sent 
    fscanf(lidar); % reads ASCII data from the device connected to lidar 
    fprintf(lidar,'W'); % pause to allow data to be read 
    pause(0.3);
    fscanf(lidar); % reads ASCII data from the device connected to lidar 
    fprintf(lidar,'BM'); % pause to allow data to be read 
    pause(0.3);
    fscanf(lidar); % reads ASCII data from the device connected to lidar 
    fprintf(lidar,'MD0044072500'); % pause to allow data to be read 
    pause(0.3);
    fscanf(lidar);
    clc
end