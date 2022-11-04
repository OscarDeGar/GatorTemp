function camData = cameraSense(camera)
%%% Get a frame from the camera
 % OUTPUTS: camData(double) - double of image piels
    
 camData = im2double(snapshot(camera));
end