#ifndef SONAR_H
#define SONAR_H

/*
 Trig:  Measurement trigger pin - Low level pulse over 50us triggers one distance measurement.
 Holding this pin LOW will repeats the measurement every 100ms.
 */
#define  TRIGGER   2

/*
 OUT: analog output 0.33mV equals 1mm
 */
#define  ANALOG    1
//
//void setup()
//{
//  pinMode(TRIGGER, OUTPUT);
//  digitalWrite(TRIGGER, HIGH);
//  Serial.begin(9600);
//}
//void loop()
//{
//  // generate the pulse to trigger the sensor
//  digitalWrite(TRIGGER, LOW);
//  delayMicroseconds(50);
//  digitalWrite(TRIGGER, HIGH);
//  delayMicroseconds(50);
//
//  unsigned int distance = analogRead(ANALOG);  //read the analog pin
//  distance = (unsigned int)(((unsigned long)distance * 5000)/1024);  //change from analog value to voltage
//  distance = (unsigned int)((float)distance / 0.33f); //0.33mV equals to 1mm,
//  //distance = (unsigned int)((float)distance / 0.2129f); //For new version, 0.2129mV equals to 1mm. 
//
//  Serial.print("distance:");
//  Serial.print(distance);
//  Serial.println("mm");
//  delay(500);
//}

#endif
