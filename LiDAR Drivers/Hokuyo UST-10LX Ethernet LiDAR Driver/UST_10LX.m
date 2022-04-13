%Must clear serial link
classdef UST_10LX < handle
    %UST_10LX 
    %   Detailed explanation goes here
    %TODO:
    %Implement Check Sums
    %Add different angle sweeps
    %Add continous scanning
    %Add Error handleing for opening and closing tcpip ports

    properties
        ip = '192.168.0.10'; % Static IP
        port = 10940; % Default port
        t; %tcpip port
        data; %Most recent scan
    end

    methods
       
        function obj = connect_TCPIP(obj)
            %Connect tcpip
            obj.t = tcpip(obj.ip, obj.port, 'InputBufferSize', 201000); 
        end 

        function obj = check_status(obj)
            %Checks the current status of the sensor
            fopen(obj.t); %Opens tcpip port
            fprintf(obj.t, 'II\n'); %Sends command to Lidar
            pause(0.3); % Wait to read data that was received from the sensor
            characters = char(fread(obj.t,obj.t.BytesAvailable)); %Read data
            convertCharsToStrings(characters) % Convert data to strings and print
            fclose(obj.t); %Close tcpip port
        end 

        function obj = enter_measurement_state(obj)
            fopen(obj.t);%Opens tcpip port
            fprintf(obj.t, 'BM\n');%Sends command to Lidar to enter measurement state
            pause(0.3); % Wait to read data that was received from the sensor
            %characters = char(fread(obj.t,obj.t.BytesAvailable)); %Read data
            %str = convertCharsToStrings(characters);% Convert data to strings
            fclose(obj.t); %Close tcpip port
        end 

        function obj = get_parameter_info(obj)
            fopen(obj.t);%Opens tcpip port
            fprintf(obj.t, 'PP\n');%Sends command to Lidar to get parameters
            pause(0.3);% Wait to read data that was received from the sensor
            characters = char(fread(obj.t,obj.t.BytesAvailable)); %Read data
            convertCharsToStrings(characters)% Convert data to strings and print
            fclose(obj.t);%Close tcpip port
        end 

        function obj = initialize_sensor(obj)
            fopen(obj.t);%Opens tcpip port
            fprintf(obj.t, 'VV\n');%Sends command to Lidar to initialize sensor
            pause(0.3);% Wait to read data that was received from the sensor
            %characters = char(fread(obj.t,obj.t.BytesAvailable));%Read data
            %str = convertCharsToStrings(characters);% Convert data to strings
            fclose(obj.t);%Close tcpip port
        end 

        function obj = get_distance(obj)
            fopen(obj.t);%Opens tcpip port
            fprintf(obj.t, 'MD0000108000001\n');% Sends command to Lidar to get distance only one scan
            pause(0.3);% Wait to read data that was received from the sensor
            ints_received = fread(obj.t,obj.t.BytesAvailable);%Read data
            without_checksum_int=zeros(1,3246);
            ints_received=ints_received(48:end)-48;
            index=1;
            for i=1:size(ints_received,1) %remove the last 3 ints, one check sum and two LFs
                if (mod(i,66)~=65 && mod(i,66)~=0)
                     without_checksum_int(index)=ints_received(i);
                     index=index+1;
                end
            end
            without_checksum_int=without_checksum_int(1:end-3);
             binary_stream = dec2bin(without_checksum_int);
             binary_stream = binary_stream';
             binary_stream = reshape(binary_stream,1,size(binary_stream,1)*size(binary_stream,2));
             final_data=zeros(1,1080);
             i=1;
            for j = 1:18:(size(binary_stream,2) - 18)
                final_data(i) = bin2dec(binary_stream(1,j:j+18));
                i = i + 1;
            end
           obj.data= final_data;
            fclose(obj.t);
        end 

       function obj = graph(obj)
            clf
            sweeparray=zeros(1,1080);
            for i= 1:1080
                sweeparray(i)=i/1080*270;
            end
            r = deg2rad(sweeparray);
            data6=(obj.data<10000);
            yt=polarscatter(r(data6),obj.data(data6));
            yt.SizeData=1;
        end 

        function obj = lidar_shutdown(obj)
            fclose(obj.t);
            delete(obj.t);
        end 
    end 
end 