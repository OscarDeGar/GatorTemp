function actJoystick(mega, joystickData)
%%% Write Joystick commands to motors/actuators
 % INPUTS: mega(object) - Arduino Mega + Pins + DACs
 %         joystickData(struct) - steerAng, throttle, maxSpeed commands

 % Variable Decleration
     minSteering = 0.1;     % Minimum Steering RoboClaw Value
     maxSterring = 0.9;     % Maximum Steering RoboClaw Value
     minThrottle = 2.4;     % Minimum Throttle Voltage
     minBrake = 2.2;        % Minimum Brake Voltage
     maxBrake = 3.6;        % Maximum Brake Voltage

 % Check for increase or decrease in speed
     global maxSpeed;
     if joystickData.upSpeed
        maxSpeed = maxSpeed + 0.05;
     elseif joystickData.downSpeed
        maxSpeed = maxSpeed - 0.05;
     end
 
 % Check for upper and lower bounds of maxSpeed
     if maxSpeed > 3.5
         maxSpeed = 3.5;
     elseif maxSpeed < 3.3
         maxSpeed = 3.3;
     end
 
 % Convert Steering Command to angle
     steerAng = mapfun( ...        % Steer Angle from joystick to RC value
         joystickData.steer, ...
         -1, ...                         % Min joystick value(LEFT)
         1, ...                        % Max joystick value(RIGHT)
         minSteering, ...               % Minimum Steering Value(LEFT)
         maxSterring);                  % Maximum Steering Value(Right)

     if joystickData.throttle <= 0      % Pos = gas
        throttle_gas = mapfun( ...
            joystickData.throttle, ...
            -1, ...                     % Lower Bound
            0, ...                      % Upper Bound
            maxSpeed, ...               % Maximum Throttle Voltage
            minThrottle);               % Minimum Throttle Voltage
        throttle_brake=2.4;             % Set Brake to Neutral
     
     else                               % Neg = brake
         throttle_gas=2.4;
        throttle_brake = mapfun( ...
            joystickData.throttle, ...
            0, ...                      % Lower Bound
            1, ...                      % Upper Bound
            minBrake, ...               % Minimum Brake Voltage
            maxBrake);                  % Maximum Brake Voltage
     end

 % Write Commands
     writePosition(mega.steer,steerAng);    % Write Steer Command

     convertedvoltagethrottle = round(throttle_gas*255/5);
     writeShiftRegister( ...
         mega.mega, ...
         mega.DACcontrol, ...
         mega.writeDAC,...
         mega.DACoutput1,...
         mega.DACoutput2,...
         convertedvoltagethrottle, ...
         0 ...
         ); % Throttle

     convertedvoltagebreak = round(throttle_brake*255/5);
     writeShiftRegister( ...
         mega.mega, ...
         mega.DACcontrol, ...
         mega.writeDAC,...
         mega.DACoutput1,...
         mega.DACoutput2,... 
         convertedvoltagebreak, ...
         1 ...
         ); % Brake
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