function destVec = SimulateSense(CurrentPosHead,motorControls)

%%% Genral Sense function
 % INPUT: objects(struct) - Mega, Gps
 % OUTPUT: sensorData(struct) - sensor data
 frontwheelfromcenter=0.762; %Distance from center of the two GPS to the center of the front wheel axcel
bear=CurrentPosHead.bear;
X=CurrentPosHead.X;
Y=CurrentPosHead.Y;
 carLike = ackermannKinematics("WheelBase",1+frontwheelfromcenter); %distance meters between front and rear axel
velo = motorControls.throttle*2;    % Constant linear velocity 1 m/s
psidot = 0;  % Constant left steering rate 

% Define the total time and sample rate 
sampleTime = 0.05;                  % Sample time [s]
timeEnd1 = 1;                     % Simulation end time for unconstrained robot 
tVec1 = 0:sampleTime:timeEnd1;      % Time array for unconstrained robot  
initPose = [X;Y;deg2rad(bear);deg2rad(motorControls.steer)];   % Initial pose (x y theta phi) 
            
[~,pose1] = ode45(@(t,y)derivative(carLike,y,[velo psidot]),tVec1,initPose);
Xmidback=pose1(end,1);
Ymidback=pose1(end,2);
bear=rad2deg(pose1(end,3));
plot(pose1(:,1),pose1(:,2),'-r')
 % Package Data
        destVec = struct( ...
        "X", Xmidback,...
        "Y", Ymidback,...
        "bear",bear);
end