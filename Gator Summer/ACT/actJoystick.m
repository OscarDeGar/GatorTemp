function actJoystick(mega, joystickData)
%%% Write Joystick commands to motors/actuators
 % INPUT: joystickData(struct) - steerAng, throttle commands

 % Convert Steering Command to angle
 steerAng = mapfun(joystickData.steer,-1,1,0.1,0.9)
 if joystickData.throttle <= 0
    throttle_gas = mapfun(joystickData.throttle,-1,0,3.6,2.4)  % Pos = gas
    throttle_break=2.4;

 else
     throttle_gas=2.4;
    throttle_break = mapfun(joystickData.throttle,0,1,2.2,3.6) % Neg = brake
 end

 % Write Commands
 writePosition(mega.steer,steerAng);
 convertedvoltage=round(throttle_gas*255/5);
 writeShiftRegister(mega.mega,mega.DACcontrol,convertedvoltage,0);   % Neg = brake

 convertedvoltage=round(throttle_break*255/5);
 writeShiftRegister(mega.mega,mega.DACcontrol,convertedvoltage,1);   % Neg = brake
end
function output = mapfun(value,fromLow,fromHigh,toLow,toHigh)
    output = (value - fromLow) .* (toHigh - toLow) ./ (fromHigh - fromLow) + toLow;
end

function writeShiftRegister(obj,serialobj,k,select)
    writeDAC='D49';
    DACoutputselet1='D48';
    DACoutputselet2='D47';
    if 0>k||k>255
        warning("Writing number greater then 255 or less then")
    end
    if 0>select || select>3
        warning("Selecting pin does not exist")
    end
    DACoutputselect = dec2bin(select,2);
    writeDigitalPin(obj,writeDAC,1)
    writeDigitalPin(obj,DACoutputselet1,str2num(DACoutputselect(1)))
    writeDigitalPin(obj,DACoutputselet2,str2num(DACoutputselect(2)))
    writeRead(serialobj,k);
    writeDigitalPin(obj,writeDAC,0)
end