function robotRefState = HelperRobot(purePursuitObj, robotPose, robotGoal, goalRadius)
controller = purePursuitObj;
[vRef, wRef] = controller(robotPose);
distanceToGoal = norm(robotPose(1:2) - robotGoal(:));
if distanceToGoal < goalRadius
    vRef = 0;
    wRef = 0;
end
robotRefState = [vRef; wRef];
end