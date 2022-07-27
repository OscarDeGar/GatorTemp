function actColorLights(mega, lightNum, signal)
%%% Function to Control 5 Safety Lights on top of the Gator
 % INPUTS: mega(struct) - contains arduino mega and pin objects
 %         lightNum(int) - which light to turn on
 %         signal(int) - 1 or 0 based on if you want light on or off

 % Send High Pulse to flip on/off light
 switch lightNum
     case 1 % RED LIGHT
        writeDigitalPin(mega.mega,mega.mega.redLight,signal)
     case 2 % YELLOW LIGHT
        writeDigitalPin(mega.mega,mega.mega.yellowLight,signal)
     case 3 % GREEN LIGHT
        writeDigitalPin(mega.mega,mega.mega.greenLight,signal) 
     case 4 % BLUE LIGHT
        writeDigitalPin(mega.mega,mega.mega.blueLight,signal)
     case 5 % WHITE LIGHT
        writeDigitalPin(mega.mega,mega.mega.whiteLight,signal)
 end
end