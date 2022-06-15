function actMotors(motorControls, teensy)
%%% Mojave motor control via serial comms
 % INPUTS: motorControls(struct) - throttleSpeed, steerAng, maxSpeed,
 %         panAng, tiltAng

    throttle = motorControls.throttle;
    steer = motorControls.steer;
    max = motorControls.max;
    pan = motorControls.pan;
    tilt = motorControls.tilt;
    
    % Write Throttle Control
    write(teensy,'E',"char");
    write(teensy,num2str(throttle),"string");
    
    % Write Steer Angle
    write(teensy,'E',"char");
    write(teensy,num2str(steer),"string");

    % Write Max Speed
    write(teensy,'M',"char");
    write(teensy,num2str(max),"string");

    % Write Pan Angle
    write(teensy,'P',"char");
    write(teensy,num2str(pan),"string");
    
    % Write Tilt Angle
    write(teensy,'t',"char");
    write(teensy,num2str(tilt),"string");

end