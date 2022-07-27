function actJoystick(mega, joystickData)
%%% Write Joystick commands to motors/actuators
 % INPUT: joystickData(struct) - steerAng, throttle commands

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
 steerAng = mapfun(joystickData.steer,1,-1,0.1,0.9);
 if joystickData.throttle <= 0
    throttle_gas = mapfun(joystickData.throttle,-1,0,3.3,2.4);  % Pos = gas
    throttle_brake=2.4;
 else
     throttle_gas=2.4;
    throttle_brake = mapfun(joystickData.throttle,0,1,2.2,3.6); % Neg = brake
 end

 % Write Commands
 writePosition(mega.steer,steerAng);
 convertedvoltage=round(throttle_gas*255/5);
 writeShiftRegister( ...
     mega.mega, ...
     mega.DACcontrol, ...
     mega.writeDAC,...
     mega.DACoutput1,...
     mega.DACoutput2,...
     convertedvoltage, ...
     0 ...
     ); % Throttle

 convertedvoltage=round(throttle_brake*255/5);
 writeShiftRegister( ...
     mega.mega, ...
     mega.DACcontrol, ...
     mega.writeDAC,...
     mega.DACoutput1,...
     mega.DACoutput2,... 
     convertedvoltage, ...
     1 ...
 ); % Brake
end

function output = mapfun(value,fromLow,fromHigh,toLow,toHigh)
    output = (value - fromLow) .* (toHigh - toLow) ./ (fromHigh - fromLow) + toLow;
end

function writeShiftRegister(obj,serialobj,writeDAC,sel1Pin, sel2Pin,k,select)
    if 0>k||k>255
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