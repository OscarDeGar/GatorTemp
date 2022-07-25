function writeShiftRegister(obj,serialobj,k,select)
    writeDAC='D5';
    DACoutputselet1='D6';
    DACoutputselet2='D7';
    if k>255
        warning("Writing number greater then 255")
    end
    if 0>select || select>3
        warning("Selecting pin does not exist")
    end
    DACoutputselect = dec2bin(select,2);
    writeDigitalPin(obj,writeDAC,1)
    writeDigitalPin(obj,DACoutputselet1,str2num(DACoutputselect(1)))
    writeDigitalPin(obj,DACoutputselet2,str2num(DACoutputselect(2)))
    writeRead(serialobj,k);
    writeDigitalPin(obj,writeDAC,0)
end