%Must clear serial link
classdef UST_10LX < handle
    %UNTITLED3 Summary of this class goes here
    %   Detailed explanation goes here

    properties
        ip = '192.168.0.10'; % Static IP
        port = 10940; % Default port
        t;
        data;
    end

    methods
       
        function obj = connect_TCPIP(obj)
            obj.t = tcpip(obj.ip, obj.port, 'InputBufferSize', 201000);
        end 

        function obj = check_status(obj)
            fopen(obj.t);
            fprintf(obj.t, 'II\n');
            pause(0.2);
            characters = char(fread(obj.t,obj.t.BytesAvailable));
            str = convertCharsToStrings(characters)
            fclose(obj.t);
        end 

        function obj = enter_measurement_state(obj)
            fopen(obj.t);
            fprintf(obj.t, 'BM\n');
            pause(0.2);
            characters = char(fread(obj.t,obj.t.BytesAvailable));
            str = convertCharsToStrings(characters);
            fclose(obj.t);
        end 

        function obj = get_parameter_info(obj)
            %obj.t = tcpip(obj.ip, obj.port, 'InputBufferSize', 201000);
            fopen(obj.t);
            fprintf(obj.t, 'PP\n');
            pause(0.2);
            %bytes2read = obj.t.BytesAvailable;
            characters = char(fread(obj.t,obj.t.BytesAvailable));
            str = convertCharsToStrings(characters)
            fclose(obj.t);
        end 

        function obj = initialize_sensor(obj)
            fopen(obj.t);
            fprintf(obj.t, 'VV\n');
            pause(0.2);
            characters = char(fread(obj.t,obj.t.BytesAvailable));
            str = convertCharsToStrings(characters);
            fclose(obj.t);
        end 

        function obj = get_distance(obj)
            fopen(obj.t);
            fprintf(obj.t, 'MD0000108000001\n');
            pause(0.3);
            data5 = fread(obj.t,obj.t.BytesAvailable);
            data1=[];
            data2=data5(48:end)-48;
            for i=1:size(data2,1)
                if (mod(i,66)~=65 && mod(i,66)~=0)
                     data1(end+1)=data2(i);
                end
            end
            data1=data1(1:end-3);
             data3 = dec2bin(data1);
             data3 = data3';
             data3 = reshape(data3,1,size(data3,1)*size(data3,2));
             data4=[];
             i=1;

            for j = 1:18:(size(data3,2) - 18)
                data4(i) = bin2dec(data3(1,j:j+18));
                i = i + 1;
            end
           obj.data= data4;
            fclose(obj.t);
        end 

       function obj = graph(obj)
        clf
        sweeparray=[];

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