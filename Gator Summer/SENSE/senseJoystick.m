function joystickData = senseJoystick(joystick)
%%% Intake data from joystick
 % INPUTS: joystick(object) - joystick object
 % OUTPUTS: joystickData(struct) - throttle, steer, and maxSpeed
 %          throttleSpeed(float) - range of -1 to 1 representing speed
 %          steerAngle(float) - range of -1 to 1 representing angle L to R

 % Read Joystick Values
    throttle = axis(joystick,2);     % Motor speed
    steerAngle = axis(joystick,3);   % Steering angle
    downSpeed = button(joystick,7);  % Decrease Max Speed
    upSpeed = button(joystick,8);    % Increase Max Speed

    joystickData = struct("steer", steerAngle,...
        "throttle", throttle,...
        "downSpeed", downSpeed,...
        "upSpeed", upSpeed);
end