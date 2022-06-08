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
double sharpData[6];
double sonarData[2];
double motorData[4];

char sharpVal[3];
char sonarVal[3];
char motorVal[3];

int sharpLen = sizeof(sharpData) / sizeof(double);
int sonarLen = sizeof(sonarData) / sizeof(double);
int motorLen = sizeof(motorData) / sizeof(double);
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
    Serial.println("-----------------");
    Serial.print("Sharp");
    Serial.print(i);
    Serial.print("(in): ");
    Serial.println(sharpData[i]);
    Serial.println("-----------------");
  }
//  getSonarData();
//  gpsData = getGpsData();
//  matlabWrite();
  delay(1000);

}
// ------------


// ----GPS----

//    GPS code goes here

// -----------






// ALTERNATE CALIBRATIONS I FOUND (SHARP IR)
//  float volts = (60.374*1.3 * pow(map(analogRead(sharp1pin), 0, 1023, 0, 5000) / 1000.0,  -1.16)) / 2.54;

//  float volts = 1/(0.02029*analogRead(sharp1pin)-0.0005032);

//  float volts = analogRead(sharp1pin)*0.0048828125;  // value from sensor * (5/1024)
//  int distance = 13*pow(volts, -1); // worked out from datasheet graph
