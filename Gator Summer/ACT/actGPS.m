function actGPS(mega, motorControls,oldMotorControls)
%%% Write motorControls commands to motors/actuators
 % INPUTS: mega(object) - Arduino Mega + pins + DAC's
 %         motorControls(struct) - steerAng, throttle commands
 %         oldMotorControls(struct) - previous steerAng, throttle commands

 % Variable Decleration
     minSteering = 0.2;     % Minimum Steering RoboClaw Value
     maxSterring = 0.8;     % Maximum Steering RoboClaw Value
     minWheelAng = 50;      % Minumum Wheel Angle(FULL LEFT)
     maxWheelAng = -50;     % Maximum Wheel Angle(FULL RIGHT)
     minThrottle = 2.2;     % Minimum Throttle Voltage
     minBrake = 2.2;        % Minimum Brake Voltage
     maxThrottle = 3.2;     % Maximum Throttle Voltage
     maxBrake = 3.6;        % Maximum Brake Voltage

 % Convert Steering Command to angle
     steerAng = mapfun( ...
         motorControls.steer, ...
         minWheelAng, ...           % Minimum Wheel Angle(FULL LEFT)
         maxWheelAng, ...           % Maximum Wheel Angle(FULL RIGHT)
         minSteering, ...           % Minimum Steering Value(FULL LEFT)
         maxSterring)               % Maximum Steering Value(FULL RIGHT)

  %if motorControls.throttle~=oldMotorControls.throttle

    if motorControls.throttle >= 0  % Pos = gas
        throttle_gas = mapfun( ...
            motorControls.throttle, ...
            0, ...                  % Low Bound
            1, ...                  % Upper Bound
            minThrottle, ...        % Minimum Throttle Voltage
            maxThrottle);           % Maximum Throttle Voltage
        throttle_brake=2.2;         % Set brake to Neutral

    else                            % Neg = brake
        throttle_gas=2.4;           % Set gas to neutral
        throttle_brake = mapfun( ...
            motorControls.throttle, ...
            -1, ...                 % Lower Bound
            0, ...                  % Upper Bound
            minBrake, ...           % Minimum Brake Voltage
            maxBrake);              % Maximum Brake Voltage
    end
    
    % Write Commands
        writePosition(mega.steer,steerAng)  % Write Steer Command

        convertedvoltage1=round(throttle_gas*255/5); 
        writeShiftRegister( ...             % Write Throttle
         mega.mega, ...
         mega.DACcontrol, ...
         mega.writeDAC,...
         mega.DACoutput1,...
         mega.DACoutput2,...
         convertedvoltage1, ...
         0 ...
         ); % Throttle
        
        convertedvoltage2=round(throttle_brake*255/5);
        writeShiftRegister( ...             % Write Brake
         mega.mega, ...
         mega.DACcontrol, ...
         mega.writeDAC,...
         mega.DACoutput1,...
         mega.DACoutput2,... 
         convertedvoltage2, ...
         1 ...
        ); % Brake
 % end
end

%%% HELPER FUNCTIONS

function output = mapfun(value,fromLow,fromHigh,toLow,toHigh)
%%% Map from a value from one scale to another
    output = (value - fromLow) .* (toHigh - toLow) ./ (fromHigh - fromLow) + toLow;
end

function writeShiftRegister(obj,serialobj,writeDAC,sel1Pin, sel2Pin,k,select)
%%% Write 8-bit number through shiftregister for DAC to interpret
    if (0>k) || (k>255)
        warning("Writing number greater then 255 or less then")
    end
    if 0>select || select>3
        warning("Selecting pin does not exist")
    end

    DACoutputselect = dec2bin(select,2);
    writeDigitalPin(obj,writeDAC,1)
    writeDigitalPin(obj,sel1Pin,str2num(DACoutputselect(1)))
    writeDigitalPin(obj,sel2Pin,str2num(DACoutputselect(2)))
    writeRead(serialobj,k);
    writeDigitalPin(obj,writeDAC,0)
end