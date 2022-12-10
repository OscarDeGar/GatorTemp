#include <Arduino_PortentaBreakout.h>
#include <Servo.h>
//#include "actuator.h"
//#include "claws.h"
//#include "estop.h"
//#include "nodders.h"
//#include "sonar.h"
//#include "steering.h"

// Breakout Pin Setups
breakoutPin pwmPins[] = {PWM0, PWM1, PWM2, PWM3, PWM4 , PWM5, PWM6 , PWM7, PWM8, PWM9};
breakoutPin analogPins[] = {ANALOG_A0, ANALOG_A1, ANALOG_A2, ANALOG_A3, ANALOG_A4, ANALOG_A5, ANALOG_A6, ANALOG_A7};

Servo Spin;

//byte spin = 0;

void setup() {
  Serial.begin(38400);
//  pinMode(pwmPins[spin], OUTPUT);
  Spin.attach(pwmPins[0]);
}

void loop() {
//  for(int i=0;i<256;i++) {
//    Serial.print("PWM: ");
//    Serial.println(i);
//    Breakout.analogWrite(pwmPins[spin],i);
//    delay(250);
//  }
  Spin.write(90);
  delay(2500);
  Spin.write(0);
  delay(2500);
}
