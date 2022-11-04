function sharpData = senseSharp(nano, sharpIR)
%%% Intake SharpIR Data from Arduino
    % Outputs: sharpData(matrix) - sharpIR's 1-6 Data

    % Data buffer and insertion
    sharpData = zeros(1,length(sharpIR));
    for i=1:length(sharpIR)
        voltage = readVoltage(nano,sharpIR(i));
        sharpData(1,i) = log(voltage/1198.97) / log(0.939862);
    end
end