function driveMojave(objects,throttleSpeed,steerAngle,maxSpeed,panAngle,tiltAngle)
%%% Drive function for Mojave and pan/tilt
    % INPUTS: objects(struct) - contains all used hardware objects
    %         throttleSpeed(float) - speed for throttle motor
    %         steerAngle(float) - angle for steering wheels
    %         maxSpeed(float) - limiter on max speed to write to throttle
    %         panAngle(float) - angle for pan servo
    %         tiltAngle(float) - angle for tilt servo

    % Gather Objects
    nano = objects.nano;
    steer = objects.steer;
    throttle = objects.throttle;
    pan = objects.pan;
    tilt = objects.tilt;
    
    % Pan and Tilt angle check
    if panAngle > 90
        panAngle = 90;
    elseif panAngle < -90
        panAngle = -90;
    end
    if tiltAngle > 17
        tiltAngle = 17;
    elseif tiltAngle < -65
        tiltAngle = -65;
    end

    % Convert PWM Signals for Servos/Motors
    throttlePWM = throttleSpeed/scalar*maxSpeed;      % assuming mph, and max of 10mph, and scale based on maxSpeed
    % convert steerAngle to serialPWM
    steerPWM = steerAngle/scalar;               % assuming 30deg, each side 0-255
    panAngle = (panAngle/180) + 1;
    tiltAngle = ((((tiltAngle+90)-35)/(107.5-35)) * 0.3) + 0.7;

    % Write to Arduino D_out pins(Mojave)
    writeDigitalPin(nano,steer,steerPWM);
    writeDigitalPin(nano,throttle,throttlePWM);

    % Write to Arduino D_out pins(Pan/tilt)
    writePosition(pan,panAngle);
    wrtiePosition(tilt,tiltAngle);
end