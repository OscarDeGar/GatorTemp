% Opens the file gpsLog.txt with read access.
fileID = fopen('gpsLog.txt','r');
% Read the text file.
gpsData = fscanf(fileID,'%c');
Create nmeaParser object by specifying the message ID as GGA. Use the nmeaParser object to parse the data read from the log file.

parserObj = nmeaParser('MessageId','GGA');
% Parse the NMEA Data.
ggaData = parserObj(gpsData);
Read the location from the parsed value and plot the location in the map to see the path travelled by the GNSS reciever.

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
    end
end
% Remove Nan value in latitude and longitude data, if any. nmeaParser object
% returns NaN for a value if the value is not available in the sentence.
% For example, latitude and longitude data are not available if there is no
% satellite fix.
latVector = latVector(~isnan(latVector));
lonVector = lonVector(~isnan(lonVector));

% Plot the position in geographic coordinates
geoplot(latVector,lonVector,'Marker',"*",'MarkerSize',3, ...
    "Color",'blue','MarkerFaceColor','red');
% Selects the basemap
geobasemap 'topographic';