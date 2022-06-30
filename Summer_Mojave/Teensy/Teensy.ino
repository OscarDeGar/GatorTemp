// ----PINOUT DEF----
#define sharp1 A0
#define sharp2 A1
#define sharp3 A2
#define sharp4 A3
#define sharp5 A4
#define sharp6 A5
#define sonar1 A6
#define sonar2 A7
#define throttleMotor 12 // D12
// ------------------

// ----GLOBAL VARIABLE DEF----
int sharpData[6]; // sharp 1-6
int sonarData[2]; // sonar 1-2
int motorData[6]; // Throttle, Steer, MaxSpeed, Pan, Tilt, LidarTilt

char sharpVal[3];
char sonarVal[3];
char motorVal[3];

int sharpLen = sizeof(sharpData) / sizeof(double);
int sonarLen = sizeof(sonarData) / sizeof(double);
int motorLen = sizeof(motorData) / sizeof(double);

int panAng = 90;
int tiltAng = 90;
int lidarTilt = 90;

bool terminate = false;
// ---------------------------

// ----INCLUDE HEADERS----
#include "SharpIR.h"  // SharpIR code
#include "Sonar.h"    // Sonar code
#include "Matlab.h"   // Matlab communications code
#include "Avoid.h"    // Obstacle Avoidance code
#include "Motors.h"   // Servos/motors code(+kill code)
#include <Servo.h>    // Servo lib code
// -----------------------

// ----OBJECT DEF----
Servo panServo;
Servo tiltServo;
Servo steerServo;
Servo lidarTiltServo;
// ------------------

// ----SETUP----
void setup() {
  panServo.attach(9);    // pin D9
  tiltServo.attach(10);  // pin D10
  steerServo.attach(11); // pin D11
  Serial.begin(115200);

  // ----INIT SERVOS----
  panServo.write(panAng);
  tiltServo.write(tiltAng);
}
// -------------


// ----MAIN----
void loop() {
 getSharpData();
 getSonarData();
 matlabWrite();
 matlabRead();
 writeMotors();
  
}
// ------------






// ALTERNATE CALIBRATIONS I FOUND (SHARP IR)
//  float volts = (60.374*1.3 * pow(map(analogRead(sharp1pin), 0, 1023, 0, 5000) / 1000.0,  -1.16)) / 2.54;

//  float volts = 1/(0.02029*analogRead(sharp1pin)-0.0005032);

//  float volts = analogRead(sharp1pin)*0.0048828125;  // value from sensor * (5/1024)
//  int distance = 13*pow(volts, -1); // worked out from datasheet graph



// DEBUG CODE
//  for (int i=0;i < 6;i++) {
//    Serial.println("-----------------");
//    Serial.print("Sharp");
//    Serial.print(i);
//    Serial.print("(in): ");
//    Serial.println(sharpData[i]);
//    Serial.println("-----------------");
//  }
