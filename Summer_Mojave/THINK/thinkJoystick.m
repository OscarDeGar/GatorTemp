function motorControls = thinkJoystick(senseData)
%%% Think behavior for joystick demo
 % INPUTS: senseData(
    sharpData = senseData.sharp;
    sonarData = senseData.sonar;
    joystickData = senseData.joystick;
    
    motorControls = safetyCheck(sharpData, sonarData);

    if motorControls == -1
        motorControls = struct( ...
            "throttle", joystickData.throttle, ...
            "steer", joystickData.steer, ...
            "maxSpeed", joystickData.max);
        return
    else
        motorControls = struct( ...
            "throttle", 0,...
            "steer", 0, ...
            "maxSpeed", 0);
        return;
    end
    
end