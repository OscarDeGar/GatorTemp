function teensyData = senseTeensy(teensy)
%%% Read Sharp and Sonar Data from Teensy
    sharpData = zeros(6,1);
    sonarData = zeros(2,1);
    unkData = zeros(6,1);

    write(teensy,'S','char');
    marker = read(teensy,1,'char');
    if strcmp(marker, 'S')  %% Collect Sharp Data
        for i=1:6
            sharpData(i,:) = read(teensy,3,'string');
        end
    end

    write(teensy,'O','char');
    marker = read(teensy,1,'char');
    if strcmp(marker,'O')   %% Collect Sonar Data
        for i=1:2
            sonarData(i,:) = read(teensy,3,'string');
        end
    end

    teensyData = struct( ...
        "sharpData", sharpData,...
        "sonarData", sonarData);

end