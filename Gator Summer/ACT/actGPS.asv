function actGPS(mega, motorControls)
%%% Write Motercontrols commands to motors/actuators
 % INPUT: Motercontrols(struct) - steerAng, throttle commands

 % Convert Steering Command to angle
 steerAng=mapfun(motorControls.steer,30,-30,0.4,0.6); %
 if motorControls.throttle >= 0
    throttle_gas = mapfun(motorControls.throttle,0,1,2.2,3.1);  % Pos = gas
    throttle_brake=2.2;
 else
     throttle_gas=2.4;
    throttle_brake = mapfun(motorControls.throttle,-1,0,2.2,3.6); % Neg = brake
 end

 % Write Commands
 writePosition(mega.steer,steerAng);
 convertedvoltage1=round(throttle_gas*255/5);
 writeShiftRegister( ...
     mega.mega, ...
     mega.DACcontrol, ...
     mega.writeDAC,...
     mega.DACoutput1,...
     mega.DACoutput2,...
     convertedvoltage1, ...
     0 ...
     ); % Throttle

 convertedvoltage2=round(throttle_brake*255/5);
 writeShiftRegister( ...
     mega.mega, ...
     mega.DACcontrol, ...
     mega.writeDAC,...
     mega.DACoutput1,...
     mega.DACoutput2,... 
     convertedvoltage2, ...
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