# Ethernet Connected UST-10LX LiDAR Driver 
## _MATLAB Compatible_



This driver enables you to connect to a Hokuyo UST-10LX LiDAR in MATLAB. The driver includes functions for writing commands to the LiDAR and reading LiDAR Data. This README also includes information regarding how the LiDAR encoding works in case people want to add additional functions to the driver. 

Peopel who could benefit from this include: 
- ✨Future gator students ✨
- MATLAB roboticists
- People who don't like writing drivers
## Features

- Connect to the LiDAR via TCPIP protocol 
- Write certain commands outlined in the UST-10LX datasheet
- Read and convert LiDAR data to distances in mm

## Resources

We used a number of Hokuyo datasheets in developing this driver. Those include:

- [Communication Protocol Specification for UST-10LX/UST-20LX](https://www.generationrobots.com/media/Hokuyo%20UST-10LX/UST-10LX_20LX_SCIP_specifications_C-42-04076.pdf)
- [UTM-30LX Communication Protocol](https://www.robotshop.com/media/files/pdf/communication-protocol-utm-30lx-ew.pdf) - for information about encoding

## Setup

This setup has been tested on Windows 10. 
We suggest downloading Urg-Benri, Hokuyo's proprietary LiDAR testing software, to ensure that you have a connection to the LiDAR and to help with troubleshooting down the line. 

You also need to set up a static IP address for the LiDAR in windows, which you can learn how to do [here](https://www.hellotech.com/guide/for/how-to-set-static-ip-windows-10).

To test your connectivity, run this example code: 
```sh
a = UST_10LX;                % creates UST_10LX object
a.connect_TCPIP();           % creates TCPIP object 
a.check_status();            % checks the status of the connection 
a.enter_measurement_state(); % changes LiDAR state to measurement state to collect distance data
a.get_parameter_info();      % provides information about LiDAR 

while(1)
    a.get_distance();        % collect distance data 
    a.graph();               % plot distance data using polar coordinates
end
```
## About SCIP Encoding
SCIP converts 6-bit hexidecimal values to ascii-readable characters via 6-bit encoding. They convert the 6-bit numerical value to an ascii-readable character by adding an offset of the hexidecimal value 0x30. This process is referred to as 6-bit encoding. For more information, see page 6 of teh UTM-30LX Communication Protocol. 

## License

MIT
