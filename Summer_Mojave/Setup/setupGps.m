function gps = setupGps()
%%% Setup GPS
    % OUTPUTS: gps(object) - gps object
    
    % Setup
    gps = gpdev("COM9");
    flush(gps);
end