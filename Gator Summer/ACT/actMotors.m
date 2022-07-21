function actMotors(motorControls, teensy)
%%% Mojave motor control via serial comms
 % INPUTS: motorControls(struct) - throttleSpeed, steerAng, maxSpeed,
 %         panAng, tiltAng

    throttle = motorControls.throttle;
    steer = motorControls.steer;
    max = motorControls.max;
    pan = motorControls.pan;
    tilt = motorControls.tilt;
    lidarTilt = motorControls.lidarTilt;
    
    % Write Throttle Control
    write(teensy,'T',"char");
    if (read(teensy,1,"char") == 'T')
        write(teensy,throttle,"uint8");
    end
    
    % Write Steer Angle
    write(teensy,'E',"char");
    if (read(teensy,1,"char") == 'E')
        write(teensy,steer,"uint8");
    end

    % Write Max Speed
    write(teensy,'M',"char");
    if (read(teensy,1,"char") == 'M')
        write(teensy,max,"uint8");
    end


    % Write Pan Angle
    write(teensy,'P',"char");
    if (read(teensy,1,"char") == 'P')
        write(teensy,pan,"uint8");
    end

    
    % Write Tilt Angle
    write(teensy,'t',"char");
    if (read(teensy,1,"char") == 't')
        write(teensy,tilt,"uint8");
    end

    % Write Lidar Tilt Angle
    write(teensy,'L',"char");
    if (read(teensy,1,"char") == 'L')
        write(teensy,lidarTilt,"uint8");
    end


end