function camera = setupCamera()
    camlist = webcamlist;
    % if multiple cam detected find int in list of the cam we want with
    % string match
    for i=1:length(camlist)
        if strcmpi(camlist(i), 'HD USB Camera')
            camNumber = i;
        end
    end    
    camera = webcam(camNumber);

%%% Subject to change based on camera and what we want

    % Fix auto exposure set it to manual, set whitebalance to manual too
    camera.ExposureMode = 'manual'; % for LifeCam
    camera.WhiteBalanceMode = 'manual';
    % experimentlaly determine best exposure setting for lab, enter here
    camera.Exposure = -8; % for LifeCam
    % robotCam.WhiteBalanceMode = 'manual'; % for LifeCam
    camera.Brightness = 60;
    camera.Resolution = '800x600';
end