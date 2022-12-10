classdef SICK_LIDAR_LMS_291<handle
%Make sure that the SICK LIDAR has a green light
%When reading from Serial only the first two hex characters are the
%same the characters after change based on computer.
    properties (Access=public)
        SERIAL_DEVICE 
        %IF COM_PORT IS CHANGED MUST RUN Connect_Serial
        COM_PORT="COM10"; %MUST CHANGE FOR YOUR DEVICE 
        %Defualt buad rate is 9600
        %IF BUAD IS CHANGED MUST RUN Connect_Serial
        BUAD=9600; %Possible buad rates are 9600 19200 and 38400
        INITIALIZED=0; %MUST BE ONE TO SHOW CONNECTION
        %IF ANGLE_RANGE IS CHANGED MUST RUN Angular_Sweep
        ANGLE_RANGE=180; %Either 180 or 100
        %IF ANGLE_RESOLUTION IS CHANGED MUST RUN Angular_Sweep
        ANGULAR_RESOLUTION=1; %For 180 ANGLE_RANGE: 1, 0.5 Degrees. For 100 ANGLE_RANGE: 1, 0.5 0.25 Degrees
        CURRENT_READING;
        %"MM" detection range = 8.191 meters
        %"CM" detection range = 81.91 meters
        %IF UNIT IS CHANGED MUST RUN Change_Settings
        UNIT="CM";
        
        %TODO
        %Plotting function
        %Getting Data Function
        %EXTRA STUFF!!

    end

    methods
       
        function SICK_LIDAR_LMS_291_OBJECT=Connect_Serial(SICK_LIDAR_LMS_291_OBJECT)
             clear SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE
            %no parity, 1 stop bit, no flow control
            if SICK_LIDAR_LMS_291_OBJECT.INITIALIZED==0
                Initial_buad=9600;
                SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE=serialport(SICK_LIDAR_LMS_291_OBJECT.COM_PORT,Initial_buad);
                SICK_LIDAR_LMS_291_OBJECT.INITIALIZED=1;
            else
                SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE=serialport(SICK_LIDAR_LMS_291_OBJECT.COM_PORT,SICK_LIDAR_LMS_291_OBJECT.BUAD);
            end
            check_hex = uint8(hex2dec(["02" "00" "02" "00" "20" "25" "35" "08"]));%This line stops continuing tranmissions
            write(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,check_hex,"uint8");
           switch(SICK_LIDAR_LMS_291_OBJECT.BUAD)
               case 9600 
              %This case is not totally nessesary since 9800 buad is the defualt, but case could be helpful if switching buad rates while LiDAR is on
              lidar_hex_9600=uint8(hex2dec(["02" "00" "02" "00" "20" "42" "52" "08"]));
                write(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,lidar_hex_9600,"uint8");
           case 19200
                lidar_hex_19200=uint8(hex2dec(["02" "00" "02" "00" "20" "41" "51" "08"]));
                write(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,lidar_hex_19200,"uint8");
           case 38400
                lidar_hex_38400=uint8(hex2dec(["02" "00" "02" "00" "20" "40" "50" "08"]));
                write(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,lidar_hex_38400,"uint8");
           otherwise
              error('NOT A PROPER BAUD');
           end
           Read_Serial_connection=dec2hex(read(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,10,"uint8"));
            if ~isequal (Read_Serial_connection(1:2,:),['06';'02']) %Should be similar [06 02 81 03 00 A0 00 10 36 1A]
                error('Wrong Serial read');
            end
            

        end

        function SICK_LIDAR_LMS_291_OBJECT=Angular_Sweep(SICK_LIDAR_LMS_291_OBJECT)
            %SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE=serialport(SICK_LIDAR_LMS_291_OBJECT.COM_PORT,SICK_LIDAR_LMS_291_OBJECT.BUAD);
           switch(SICK_LIDAR_LMS_291_OBJECT.ANGLE_RANGE)
           case 100

               switch(SICK_LIDAR_LMS_291_OBJECT.ANGULAR_RESOLUTION)
                   case 1
                       sent_hex = uint8(hex2dec(["02" "00" "05" "00" "3B" "64" "00" "64" "00" "1D" "0F"])); %0-100 by 1
                        write(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,sent_hex,"uint8");
                   case 0.5
                       sent_hex = uint8(hex2dec(["02" "00" "05" "00" "3B" "64" "00" "32" "00" "B1" "59"]));%0-100 by 0.5
                        write(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,sent_hex,"uint8");
                   case 0.25
                       sent_hex = uint8(hex2dec(["02" "00" "05" "00" "3B" "64" "00" "19" "00" "E7" "72"]));%0-100 by 0.25
                        write(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,sent_hex,"uint8");
                   otherwise
                       error('NOT A PROPER ANGULAR RESULTION');
               end

           case 180
                 switch(SICK_LIDAR_LMS_291_OBJECT.ANGULAR_RESOLUTION)
                   case 1
                       sent_hex = uint8(hex2dec(["02" "00" "05" "00" "3B" "B4" "00" "64" "00" "97" "49"]));%0-180 by 1
                        write(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,sent_hex,"uint8");
                      
                   case 0.5
                       sent_hex = uint8(hex2dec(["02" "00" "05" "00" "3B" "B4" "00" "32" "00" "3B" "1F"]));%0-180 by 0.5
                        write(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,sent_hex,"uint8");
                   otherwise
                       error('NOT A PROPER ANGULAR RESOLUTION');
                 end
           otherwise
              error('NOT A PROPER ANGLE RANGE');
           end
           Read_Serial_connection=dec2hex(read(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,14,"uint8"));
            if ~isequal (Read_Serial_connection(1:2,:),['06';'02'])
                error('UNABLE TO CHANGE ANGULAR SWEEP')
            end
        end

        function SICK_LIDAR_LMS_291_OBJECT=Change_Settings(SICK_LIDAR_LMS_291_OBJECT) %Takes 14 seconds to run
            %SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE=serialport(SICK_LIDAR_LMS_291_OBJECT.COM_PORT,SICK_LIDAR_LMS_291_OBJECT.BUAD);
            sent_hex = uint8(hex2dec(["02" "00" "0A" "00" "20" "00" "53" "49" "43" "4B" "5F" "4C" "4D" "53" "BE" "C5"]));%Go into settings
            write(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,sent_hex,"uint8");
            pause(7) %Specified in data sheet
            Read_Serial_connection=dec2hex(read(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,10,"uint8"));
            if ~isequal (Read_Serial_connection(1:2,:),['06';'02'])
                error('UNABLE TO CHANGE SETTINGS')
            end
            switch(SICK_LIDAR_LMS_291_OBJECT.UNIT)
                case "CM"
                    sent_hex= uint8(hex2dec(["02" "00" "21" "00" "77" "00" "00" "00" "00" "00" "0D" "00" "00" "00" "02" "02" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "20" "CB"]));
                    write(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,sent_hex,"uint8");
                case "MM"
                    sent_hex= uint8(hex2dec(["02" "00" "21" "00" "77" "00" "00" "00" "00" "00" "0D" "01" "00" "00" "02" "02" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "34" "C7"]));
                    write(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,sent_hex,"uint8")
                otherwise
                    error('NOT PROPER UNIT');
            end
            pause(7) %Specified in data sheet
              Read_Serial_connection=dec2hex(read(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,44,"uint8"));
            if ~isequal (Read_Serial_connection(1:2,:),['06';'02'])
                error('UNABLE TO CHANGE UNITS')
            end
        end

        function SICK_LIDAR_LMS_291_OBJECT=Check_Connection(SICK_LIDAR_LMS_291_OBJECT) %Used to debug
            %SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE=serialport(SICK_LIDAR_LMS_291_OBJECT.COM_PORT,SICK_LIDAR_LMS_291_OBJECT.BUAD);
            check_hex = uint8(hex2dec(["02" "00" "01" "00" "31" "15" "12"])); 
            write(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,check_hex,"uint8");
            Read_Serial_connection=dec2hex(read(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,161,"uint8")); %This is probably more then 100 bytes
            if ~isequal (Read_Serial_connection(1:2,:),['06';'02'])
                error('Wrong Serial read')
            else
                fprintf("Connection Working\n")
            end
        end
        function SICK_LIDAR_LMS_291_OBJECT=Get_Reading(SICK_LIDAR_LMS_291_OBJECT)
%              clear SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE
%             SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE=serialport(SICK_LIDAR_LMS_291_OBJECT.COM_PORT,SICK_LIDAR_LMS_291_OBJECT.BUAD);
            Length_of_data=((SICK_LIDAR_LMS_291_OBJECT.ANGLE_RANGE/SICK_LIDAR_LMS_291_OBJECT.ANGULAR_RESOLUTION)+1);
            Length_of_message=(8+8+16+8+16+16*Length_of_data+8+16)/8;
            check_hex = uint8(hex2dec(["02" "00" "02" "00" "20" "24" "34" "08"])); 
            write(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,check_hex,"uint8");
            Read_Serial_connection=dec2hex(read(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,10,"uint8"));
            if ~isequal (Read_Serial_connection(1:2,:),['06';'02'])
                error('Wrong Serial read')
            end
            Read_Serial_connection=dec2hex(read(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,Length_of_message,"uint8"));
            if ~isequal (Read_Serial_connection(1,:),'02')
                error('Wrong Serial read')
            end
            Check_Length=dec2hex(read(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,10,"uint8"));
            if ~isequal (Check_Length(1,:),'02')
                error('Wrong Serial read1')
            end
            %TODO This for loop may be wrong
            for i=1:2:length(Read_Serial_connection((8+8+16+8+16+16)/8+1:(8+8+16+8+16+16+16*Length_of_data)/8))
                 Decimal_output((i+1)/2) = bin2dec((hexToBinaryVector(Read_Serial_connection((8+8+16+8+16+16)/8+1+i))+hexToBinaryVector(Read_Serial_connection((8+8+16+8+16+16)/8+1+i+1))));
            end
            %SICK_LIDAR_LMS_291_OBJECT.CURRENT_READING=Read_Serial_connection((8+8+16+8+16+16)/8+1:(8+8+16+8+16+16+16*Length_of_data)/8);
            SICK_LIDAR_LMS_291_OBJECT.CURRENT_READING=Decimal_output;
            
            check_hex = uint8(hex2dec(["02" "00" "02" "00" "20" "25" "35" "08"]));%This line stops tranmission
            write(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,check_hex,"uint8");
        end

        function SICK_LIDAR_LMS_291_OBJECT=STOP(SICK_LIDAR_LMS_291_OBJECT)
%             clear SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE
%             SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE=serialport(SICK_LIDAR_LMS_291_OBJECT.COM_PORT,SICK_LIDAR_LMS_291_OBJECT.BUAD);
            check_hex = uint8(hex2dec(["02" "00" "02" "00" "20" "25" "35" "08"])); 
            write(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,check_hex,"uint8");
            Check_Length=dec2hex(read(SICK_LIDAR_LMS_291_OBJECT.SERIAL_DEVICE,10,"uint8"))
           if ~isequal (Check_Length(1:2,:),['06';'02'])
                error('Wrong Serial read')
            end
        end

    end
end