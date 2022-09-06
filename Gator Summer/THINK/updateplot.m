function updateplot(CurrentPosHead,motorControls,waypoints,wayStep,f)
    clf(f)
    hold on
    quaternion = angle2quat(deg2rad(CurrentPosHead.bear),0,0);
    plotTransforms([CurrentPosHead.X,CurrentPosHead.Y,0],quaternion,'MeshFilePath','groundvehicle.stl',"MeshColor","g");
    plot(waypoints(wayStep:wayStep,2),waypoints(wayStep:wayStep,1),'-bd');
    if motorControls.steer>1
        text1="Left";
    elseif motorControls.steer<-1
        text1="Right";
    else
      text1="Straight";
    end
    text(CurrentPosHead.X+1,CurrentPosHead.Y,text1+" " + num2str(motorControls.steer,2))
    axis equal
    view(0,90)
    title("Current View")
    xlabel("Meters")
    ylabel("Meters")
     legend({'Next Waypoint'},'Location','southeast')
    xlim([CurrentPosHead.X-2,CurrentPosHead.X+2])
    ylim([CurrentPosHead.Y-2,CurrentPosHead.Y+2])
    hold off
    drawnow
end