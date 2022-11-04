// ----PINOUT DEF----
int sharp1 = A0;
int sharp2 = A1;
int sharp3 = A2;
int sharp4 = A3;
int sharp5 = A4;
int sharp6 = A5;
int sonar1 = A6;
int sonar2 = A7;
// ------------------

// ----GLOBAL VARIABLE DEF----
int sharpData[6];
int sonarData[2];
// ---------------------------

// ----INCLUDE HEADERS----
#include "SharpIR.h"  // SharpIR code
#include "Sonar.h"    // Sonar code
#include "Matlab.h"   // Matlab communications code
#include "Avoid.h"    // Obstacle Avoidance code
#include "Motors.h"   // Servos/motors code(+kill code)
// -----------------------

// ----SETUP----
void setup() {
  Serial.begin(9600); 
}
// -------------


// ----MAIN----
void loop() {
  getSharpData();
  for (int i=0;i < 6;i++) {
    Serial.print("Sharp");
    Serial.print(i);
    Serial.print("(in): ");
    Serial.println(sharpData[i]);
  }
//  getSonarData();
//  gpsData = getGpsData();
  matlabWrite();

}
// ------------


// ----GPS----

//    GPS code goes here

// -----------


// ----MATLAB COMMS----

//    Code to talk to MATLAB via serial communication

void matlabWrite() {
//  Serial.write("hello");
}

// --------------------





// ALTERNATE CALIBRATIONS I FOUND (SHARP IR)
//  float volts = (60.374*1.3 * pow(map(analogRead(sharp1pin), 0, 1023, 0, 5000) / 1000.0,  -1.16)) / 2.54;

//  float volts = 1/(0.02029*analogRead(sharp1pin)-0.0005032);

//  float volts = analogRead(sharp1pin)*0.0048828125;  // value from sensor * (5/1024)
//  int distance = 13*pow(volts, -1); // worked out from datasheet graph
