function velocity = velocitySense(camera)
    %%% Get live velocity reading based on optical flow algorithm
    % OUTPUTS: velocity(float) - velocity in "UNIT NEEDED"
    
    % Create Optical Flow object
    of = opticalFlowHS;
    of.Smoothness = 0.1;

    % Take image
    frame1 = im2double(im2gray(snapshot(camera)));
    frame2 = im2double(im2gray(snapnow(camera)));
    frames = cat(3, frame1, frame2);

    % Estimate flow
    flow = estimateFlow(of, frames(:,:,2));
    flowMag = flow.Magnitude;

    % Threshold conversion (NEEDED)

    
end