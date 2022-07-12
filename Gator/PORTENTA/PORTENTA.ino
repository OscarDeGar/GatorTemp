#include <Arduino_PortentaBreakout.h>
#include <RoboClaw.h>
#include "actuator.h"
#include "claws.h"
#include "estop.h"
#include "nodders.h"
#include "sonar.h"
#include "steering.h"

// Breakout Pin Setups
breakoutPin pwmPins[] = {PWM0, PWM1, PWM2, PWM3, PWM4 , PWM5, PWM6 , PWM7, PWM8, PWM9};
breakoutPin analogPins[] = {ANALOG_A0, ANALOG_A1, ANALOG_A2, ANALOG_A3, ANALOG_A4, ANALOG_A5, ANALOG_A6, ANALOG_A7};


RoboClaw roboclaw(Breakout.UART0,10000);



void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
