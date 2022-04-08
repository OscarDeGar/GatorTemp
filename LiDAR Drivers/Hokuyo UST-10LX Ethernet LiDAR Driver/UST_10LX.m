%Must clear serial link
classdef UST_10LX < handle
    %UNTITLED3 Summary of this class goes here
    %   Detailed explanation goes here

    properties
        ip = '192.168.0.10'; % Static IP
        port = 10940; % Default port
        t;
    end

    methods
       
        function obj = connect_TCPIP(obj)
            obj.t = tcpip(obj.ip, obj.port, 'InputBufferSize', 201000);
            %fopen(obj.t);
        end 

        function obj = check_status(obj)
            %fopen(obj.t);
            %obj.t = tcpip(obj.ip, obj.port, 'InputBufferSize', 201000);
            fopen(obj.t);
            fprintf(obj.t, 'II\n');
            %fscanf()
            pause(1);
            %bytes2read = obj.t.BytesAvailable;
            characters = char(fread(obj.t,obj.t.BytesAvailable));
            str = convertCharsToStrings(characters)
            fclose(obj.t);
        end 

        function obj = enter_measurement_state(obj)
            %obj.t = tcpip(obj.ip, obj.port, 'InputBufferSize', 201000);
            fopen(obj.t);
            fprintf(obj.t, 'BM\n');
            pause(5);
            %bytes2read = obj.t.BytesAvailable;
            characters = char(fread(obj.t,obj.t.BytesAvailable));
            str = convertCharsToStrings(characters)
            fclose(obj.t);
        end 

        function obj = get_parameter_info(obj)
            %obj.t = tcpip(obj.ip, obj.port, 'InputBufferSize', 201000);
            fopen(obj.t);
            fprintf(obj.t, 'PP\n');
            pause(5);
            %bytes2read = obj.t.BytesAvailable;
            characters = char(fread(obj.t,obj.t.BytesAvailable));
            str = convertCharsToStrings(characters)
            fclose(obj.t);
        end 

        function obj = initialize_sensor(obj)
            %obj.t = tcpip(obj.ip, obj.port, 'InputBufferSize', 201000);
            fopen(obj.t);
            fprintf(obj.t, 'VV\n');
            pause(5);
            %bytes2read = obj.t.BytesAvailable;
            characters = char(fread(obj.t,obj.t.BytesAvailable));
            str = convertCharsToStrings(characters)
            fclose(obj.t);
        end 

        function obj = get_distance_one_scan(obj)
            %obj.t = tcpip(obj.ip, obj.port, 'InputBufferSize', 201000);
            fopen(obj.t);
            fprintf(obj.t, 'MD0000010000001\n');
            pause(5);
            %bytes2read = obj.t.BytesAvailable;
            data = fread(obj.t,obj.t.BytesAvailable)
            characters = char(data(1:48));
            str = convertCharsToStrings(characters)
            data2 = data(48:50) - 48
            data2 = dec2bin(data2)
            data2 = data2'
            data2 = reshape(data2,1,18)
            concatenated_data2 = '';
            data2 = bin2dec(data2)
%             for c = 1:size(data2,1)
%                 for l = 1:length(data2(c))
%                     concatenated_data2 = concatenated_data2 + data2(c);
%                 end 
%             end 
            fclose(obj.t);
        end 

        function obj = get_distance(obj)
            %obj.t = tcpip(obj.ip, obj.port, 'InputBufferSize', 201000);
            fopen(obj.t);
            fprintf(obj.t, 'MD0000010000001\n');
            pause(5);
            %bytes2read = obj.t.BytesAvailable;
            data = fread(obj.t,obj.t.BytesAvailable);
            characters = char(data(1:48));
            str = convertCharsToStrings(characters);
            data2 = data(48:length(data)) - 48
            data5 = (data2 == -38);
            for c = 1:length(data5)
                if data5(c) == 0
                    data5(c + 1) = 0;
                end
            end
            data5 = data5(1:end-1);
            data2(data5) = [];
            data2 = dec2bin(data2);
            data2 = data2(:,3:end);
       
            data2 = data2';
            data2 = reshape(data2,1,size(data2,1)*size(data2,2))
            i = 1;
            data2 = data2(1:end-2)
            for j = 1:18:(size(data2,2) - 18)
                data4(i) = bin2dec(data2(j:j+18));
                i = i + 1;
            end
            data4
            fclose(obj.t);
        end 

        function obj = lidar_shutdown(obj)
           % fclose(obj.t);
            %obj.t = tcpip(obj.ip, obj.port, 'InputBufferSize', 201000);
            fopen(obj.t);
            delete(obj.t);
            clear obj.t;
            clear obj;
            echotcpip('off');
        end 
    end 
end 