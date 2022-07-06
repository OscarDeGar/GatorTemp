function bearOA = lidarOA(lidarData, bear)
%%% Returns optimal path bearing based on obstacles
 % Inputs: lidarData(struct) - 'x', 'y' data
 %         bear(int) - angle to gps waypoint
 % Outputs: bearOA(int) - optimal path bearing angle avoid obstacles

 %%% Creates occupancy of objects around lidar

 % Collect possible objects
 objects = zeros(length(lidarData),1);   % Holds bool of a possible object
 prev = lidarData(end,:);                % end of scan for first point comp
 lenLidar = length(lidarData);           % lenght of orig data
 data = [lidarData lidarData];           % Account for wrapping

 for scan=1:length(data)   % Check if points in scan are close to
    curr = lidarData(scan,:);   % each other(i.e. possibly an object)
    diff = curr - prev;
    if diff < 10
        objects(scan) = 1;
    end
    prev = curr;
 end

 % Check logical array for objects and remove false positives
%  objIndex = find(objects);
bearOA = find(objects);
% 
%  trimNormal = false;
%  if isempty(objIndex(objIndex == lenLidar+1)) % If the first group
%     orig = objIndex(objIndex <= lenLidar);
%     endGroup = orig(end);
% 
%     wrap = objIndex(objIndex > lenLidar);
%     firstWrap = wrap(start);
%     
%     if (firstWrap - endGroup) < 4
%         trimNormal = true;  % not a group trim to normal size
%     end
%  end
% 
%   % Loop for size of groups of 1's
%  countOnes = zeros(legnth(objects),2);
%  counter = 0;
%  for object=1:length(objects)
%     if objects(object) == 1     % if Object seen add 1 to counter
%         counter = counter + 1;
%         countOnes(object, 1) = object;
%         countOnes(object, 2) = counter;
%     else                        % if no object reset counter and move on
%         counter = 1;
%         countOnes(object, 1) = object;
%         countOnes(object, 2) = counter;
%     end
%  end
% 
%  for count=1:length(countOnes)
%     
%  end

 


























%  cutoffs = [];
%  prev = objIndex(end);
%  for index=1:length(objIndex)  % Find groupings
%     curr = objIndex(index);
%     diff = curr - prev;
%     if diff ~= 1
%         cutoffs(end) = index;
%     end
%     prev = curr;
%  end
%  
%  cutoffsCopy = cutoffs;
%  prev = cutoffsCopy(starts) - 4;
%  for cutoff=1:length(cutoffsCopy) % Check their size
%     curr = cutoffsCopy(cutoff);
%     diff = curr - prev;
%     if diff < 5
%         cutoffs(cutoff) = [];
%     end
%     prev = curr;
%  end


end