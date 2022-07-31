function [latVector,lonVector,UTCDateTime]=PlotGPSlog(file)
% Opens the file gpsLog.txt with read access.
fileID = fopen(file,'r');
% Read the text file.
gpsData = fscanf(fileID,'%c');
parserObj = nmeaParser('MessageId','RMC');
% Parse the NMEA Data.
ggaData = parserObj(gpsData);
% Initialize variables.
latVector = zeros(1,numel(ggaData));
lonVector = zeros(1,numel(ggaData));
for i=1:length(ggaData)
    % Check if the parsed GGA sentences are valid and if they are valid, get the
    % latitude and longitude from the output structures. Status = 0,
    % indicates the data is valid
    if ggaData(i).Status == 0
        latVector(i) = ggaData(i).Latitude;
        lonVector(i) = ggaData(i).Longitude;
        UTCDateTime(i)=ggaData(i).UTCDateTime;
    end
end
% Remove Nan value in latitude and longitude data, if any. nmeaParser object
% returns NaN for a value if the value is not available in the sentence.
% For example, latitude and longitude data are not available if there is no
% satellite fix.
latVector = latVector(~isnan(latVector));
lonVector = lonVector(~isnan(lonVector));
%UTCDateTime = UTCDateTime(~ismissing(UTCDateTime));

% Plot the position in geographic coordinates
geoplot(latVector,lonVector,'Marker',"*",'MarkerSize',3, ...
    "Color",'blue','MarkerFaceColor','red');
% Selects the basemap
%geobasemap 'topographic';
end