#ifndef _SHARPIR_H   // Put these two lines at the top of your file.
#define _SHARPIR_H   // (Use a suitable name, usually based on the file name.)

// ----SHARP IR----
int getVoltageSharp(int pin) {
  float volts;
  int avgs = 10;
  int sum_volts = 0;
  
  for(int i=0;i < avgs;i++) {
    sum_volts += analogRead(pin);
  }
  volts = sum_volts / avgs;
//  int volts = analogRead(pin);
  int distance = log(volts/1198.97) / log(0.939862) / 2.54; // cm
  return distance;    
}

void getSharpData() {
  sharpData[0] = getVoltageSharp(sharp1);
  sharpData[1] = getVoltageSharp(sharp2);
  sharpData[2] = getVoltageSharp(sharp3);
  sharpData[3] = getVoltageSharp(sharp4);
  sharpData[4] = getVoltageSharp(sharp5);
  sharpData[5] = getVoltageSharp(sharp6);
}
// ----------------

#endif // _SHARPIR_H    // Put this line at the end of your file.
