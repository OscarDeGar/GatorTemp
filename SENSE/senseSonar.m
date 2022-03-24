function sonarData = senseSonar(nano, sonar)
%%% Intake Sonar data from Arduino
    % Outputs: sonarData(matrix) - Sonar 1-2 data
    
    % Data buffer and insertion
    sonarData = zeros(1,2);
    for i=1:2
        voltage = readVoltage(nano,sonar(:,1));
        sonarData(:,i) = voltage;   % NEEDS CALIBRATION/FILTER
    end
end