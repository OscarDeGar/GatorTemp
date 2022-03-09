function [motorJoystick, steerJoystick, maxSpeed] = joystickSense(joystick)
    %%% Intake data from joystick
    % INPUTS: joystick(object) - joystick object
    % OUTPUTS: motorJoystick(float) - range of -1 to 1 representing speed
    %          steerJoystick(float) - range of -1 to 1 representing angle L to R
    %          maxSpeed(float) - range of -1 to 1 representing our max speed

    motorJoystick = axis(joystick,2);   % Motor speed
    steerJoystick = axis(joystick,1);   % Steering angle
    maxSpeed = axis(joystick,3);        % Maximum speed allowed

end