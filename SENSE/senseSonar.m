function sonarData = senseSonar(nano, sonar)
%%% Intake Sonar data from Arduino
    % Outputs: sonarData(matrix) - Sonar 1-2 data
    
    % Data buffer and insertion
    sonarData = zeros(1,length(sonar));
    for i=1:length(sonar)
        voltage = readVoltage(nano,sonar(i));
        sonarData(:,i) = voltage;   % NEEDS CALIBRATION/FILTER
    end
end