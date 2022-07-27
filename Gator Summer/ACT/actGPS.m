function actGPS(mega, Motercontrols)
%%% Write Motercontrols commands to motors/actuators
 % INPUT: Motercontrols(struct) - steerAng, throttle commands

 % Convert Steering Command to angle
 mapfun(Motercontrols.steer,30,-30,0.1,0.9); %volts
 if Motercontrols.throttle <= 0
    throttle_gas = mapfun(Motercontrols.throttle,0,1,3.3,2.4);  % Pos = gas
    throttle_brake=2.4;
 else
     throttle_gas=2.4;
    throttle_brake = mapfun(Motercontrols.throttle,-1,0,2.2,3.6); % Neg = brake
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