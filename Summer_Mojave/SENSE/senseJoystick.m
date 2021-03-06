function joystickData = senseJoystick(joystick)
%%% Intake data from joystick
 % INPUTS: joystick(object) - joystick object
 % OUTPUTS: joystickData(struct) - throttle, steer, and maxSpeed
 %          throttleSpeedfloat) - range of -1 to 1 representing speed
 %          steerAngle(float) - range of -1 to 1 representing angle L to R
 %          maxSpeed(float) - range of -1 to 1 representing our max speed

    throttleSpeed = axis(joystick,2);   % Motor speed
    steerAngle = axis(joystick,1);   % Steering angle
    maxSpeed = axis(joystick,3);        % Maximum speed allowed

    joystickData = struct( ...
        "throttle", throttleSpeed, ...
        "steer", steerAngle, ...
        "max", maxSpeed);

end