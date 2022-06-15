function shutdownLidar(lidar) 
%%% shutdownLidar - shutdown serial connection to Lidar properly
% Inputs: lidar - lidar object

fprintf(lidar,'QT');    % write string to quit the lidar
fclose(lidar);          % close serial connection
clear lidar;            % remove lidar from memory

end
