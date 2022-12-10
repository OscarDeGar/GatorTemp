function destVec = SimulateSense(CurrentPosHead,motorControls,FronttoBack)

%%% Genral Sense function
 % INPUT: objects(struct) - Mega, Gps
 % OUTPUT: sensorData(struct) - sensor data
bear=CurrentPosHead.bear;
X=CurrentPosHead.X;
Y=CurrentPosHead.Y;
 %carLike = ackermannKinematics("WheelBase",1+frontwheelfromcenter); %distance meters between front and rear axel
 carLike=bicycleKinematics("VehicleInputs","VehicleSpeedSteeringAngle","WheelBase",FronttoBack);
velo = motorControls.throttle*5;    % Constant linear velocity 5 m/s

% Define the total time and sample rate 
sampleTime = 0.005;                  % Sample time [s]
timeEnd1 = 0.2;                     % Simulation end time for unconstrained robot 
tVec1 = 0:sampleTime:timeEnd1;      % Time array for unconstrained robot  
%initPose = [X;Y;deg2rad(bear);deg2rad(motorControls.steer)];   % Initial pose (x y theta phi) 
            initPose=[X;Y;deg2rad(bear)];
%[~,pose1] = ode45(@(t,y)derivative(carLike,y,[velo psidot]),tVec1,initPose);
[~,pose1] = ode45(@(t,y)derivative(carLike,y,[velo deg2rad(motorControls.steer)]),tVec1,initPose);
Xmidback=pose1(end,1);
Ymidback=pose1(end,2);
bear=rad2deg(pose1(end,3));
 % Package Data
        destVec = struct( ...
        "X", Xmidback,...
        "Y", Ymidback,...
        "bear",bear);
end