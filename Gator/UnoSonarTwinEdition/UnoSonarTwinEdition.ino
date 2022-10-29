//Portenta breakout code commented out
//#include <Arduino_PortentaBreakout.h>
//#include <Servo.h>
//#include "sonar.h"
// Breakout Pin Setups
//breakoutPin pwmPins[] = {PWM0, PWM1, PWM2, PWM3, PWM4 , PWM5, PWM6 , PWM7, PWM8, PWM9};
//breakoutPin analogPins[] = {ANALOG_A0, ANALOG_A1, ANALOG_A2, ANALOG_A3, ANALOG_A4, ANALOG_A5, ANALOG_A6, ANALOG_A7};
//byte spin = 0;

void setup()
{
//Interference Delay is caused by competing chirps from the side-by-side twin sonars.
//Need to test if returning chirps also cause interference, but for now ~1.5m separation = ~5 ms delay
const int TwinDelay = 5; //ms


// Currently assuming 2 Sonars mounted to the front of the vehicle.
// LEFT: Currently A0 and D0
const int VLEFT = A0;
const int TLEFT = 0;

// RIGHT: Currently A5 and D7
const int VRIGHT = A1; 
const int TRIGHT = 1;


// Set up a calibration value
//DFRobot claims this is 1 mm equals 0.33 mV change from their sensor.
const int CALIBRATION = 0.33 // mV/mm of output


// Set up left/right flag for loop
int currentAnalog = VRIGHT
int currentDigital = TRIGHT

int nextAnalog = VLEFT
int nextDigital = TLEFT


  pinMode(TLEFT, OUTPUT);
  pinMode(TRIGHT, OUTPUT);
  digitalWrite(currentDigital, HIGH);
  digitalWrite(nextDigital, LOW);
  
  Serial.begin(9600);
}

void loop()
{
  // generate the pulse to trigger the sensor
  digitalWrite(currentDigital, LOW);
  delayMicroseconds(50);
  digitalWrite(currentDigital, HIGH);
  delayMicroseconds(50);

  unsigned int distance = analogRead(currentAnalog);  //read the analog pin
  distance = distance*5000/1024/CALIBRATION; // Combining all into one line


//  distance = (unsigned int)(((unsigned long)distance * 5000)/1024);  //change from analog value to voltage
//  distance = (unsigned int)((float)distance / 0.33f); //0.33mV equals to 1mm,
//distance = (unsigned int)((float)distance / 0.2129f); //For new version, 0.2129mV equals to 1mm. 

  Serial.print("distance:");
  Serial.print(distance);
  Serial.println("mm");

//Set up the loop for measurements from the other side
  swap(currentAnalog, nextAnalog);
  swap(currentDigital, nextDigital);
//Delay to avoid confusing sensor with its twin's chirp
  delay(TwinDelay);
}
