function joystickData = senseJoystick(joystick)
%%% Intake data from joystick
 % INPUTS: joystick(object) - joystick object
 % OUTPUTS: joystickData(struct) - throttle, steer, and maxSpeed
 %          throttleSpeed(float) - range of -1 to 1 representing speed
 %          steerAngle(float) - range of -1 to 1 representing angle L to R
 %          maxSpeed(float) - range of -1 to 1 representing our max speed

    throttle = axis(joystick,2);   % Motor speed
    steerAngle = axis(joystick,3);   % Steering angle

    joystickData = struct("steer", steerAngle,...
        "throttle", throttle);
end