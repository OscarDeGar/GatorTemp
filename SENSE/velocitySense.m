function velocity = velocitySense(camera)
    %%% Get live velocity reading based on optical flow algorithm
    % OUTPUTS: velocity(float) - velocity in "UNIT NEEDED"
    
    % Create Optical Flow object
    of = opticalFlowHS;
    of.Smoothness = 0.1;

    % Take image
    frame = im2double(im2gray(snapshot(camera)));

    % Estimate flow
    flow = estimateFlow(of, frame);
    flowMag = flow.Magnitude;

    % Threshold conversion (NEEDED)
    velocity = mean(mean(flowMag)); % replace with conversion
    
end