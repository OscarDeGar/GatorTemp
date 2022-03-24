function driveMojave(objects,throttleSpeed,steerAngle,maxSpeed,panAngle,tiltAngle)
%%% Drive function for Mojave and pan/tilt
    % INPUTS: objects(struct) - contains all used hardware objects
    %         throttleSpeed(float) - speed for throttle motor
    %         steerAngle(float) - angle for steering wheels
    %         maxSpeed(float) - limiter on max speed to write to throttle
    %         panAngle(float) - angle for pan servo
    %         tiltAngle(float) - angle for tilt servo


    % what are the pwm signals on Nano 0-255, 0-1, 0-50, etc. 
    % will affect scalar of our desired values into teensy pwm signals

    nano = objects.nano;
    steer = objects.steer;
    throttle = objects.throttle;
    pan = objects.pan;
    tilt = objects.tilt;
    
    % convert throttleSpeed to serialPWM
    throttlePWM = throttleSpeed/scalar*maxSpeed;      % assuming mph, and max of 10mph, and scale based on maxSpeed
    % convert steerAngle to serialPWM
    steerPWM = steerAngle/scalar;               % assuming 30deg, each side 0-255

    % Write to Arduino D_out pins(Mojave)
    writeDigitalPin(nano,steer,steerPWM);
    writeDigitalPin(nano,throttle,throttlePWM);

    % Write to Arduino D_out pins(Pan/tilt)
    writeDigitalPin(nano,pan,panAngle);
    wrtieDigitalPin(nano,tilt,tiltAngle);
end