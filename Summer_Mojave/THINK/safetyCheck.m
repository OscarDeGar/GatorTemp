function motorControls = safetyCheck(sharpData, sonarData)
%%% safetyCheck of sharp and sonar data
 % OUTPUTS: motorControls - 0 if not safe, -1 if for you're good
    %%% SHARP FRONT
    for i=1:2
        if sharpData(i) > 10 %in (TBD)
            motorControls = 0;
            return;
        end
    end

    %%% SHARP FORWARD
    for i=3:4
        if sharpData(i) < 10 %in (TBD)
            motorControls = 0;
            return;
        end
    end

    %%% SHARP BACK
    for i=5:6
        if sharpData(i) > 10 %in (TBD)
            motorControls = 0;
            return;
        end
    end

    %%% SONAR
    for i=1:2
        if sonarData(i) < 10 %in (TBD)
            motorControls = 0;
            return;
        end
    end
    
    motorControls = -1;
    return;
    
end