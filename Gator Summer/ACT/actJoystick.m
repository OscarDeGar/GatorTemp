function actJoystick(mega, joystickData)
%%% Write Joystick commands to motors/actuators
 % INPUT: joystickData(struct) - steerAng, throttle commands

 % Convert Steering Command to angle
 steerAng = mapfun(joystickData.steer,-1,1,0,1);
 if joystickData.throttle >= 0
    throttle = mapfun(joystickData.throttle,0,1,2.5,3.8);  % Pos = gas
 else
    throttle = mapfun(joystickData.throttle,-1,0,2.5,3.8); % Neg = brake
 end

 % Write Commands
 writePosition(mega.steer,steerAng)
 if joystickData.throttle >= 0 
    writePWMVoltage(mega.throttle,mega.gasAct,throttle);    % Pos = gas
 else
    writePWMVoltage(mega.throttle,mega.brakeAct,throttle);  % Neg = brake
 end
end


function output = mapfun(value,fromLow,fromHigh,toLow,toHigh)
    output = (value - fromLow) .* (toHigh - toLow) ./ (fromHigh - fromLow) + toLow;
end