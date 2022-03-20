int sharp1 = A14;
int sharp2 = A15;
int sharp3 = A16;
int sharp4 = A17;
int sharp5 = A13;
int sharp6 = A12;
int sonar1 = A11;
int sonar2 = A10;

int sharpData[6];
int sonarData[2];


void setup() {
  Serial.begin(9600); 
}

void loop() {
  getSharpData();
//  getSonarData();
//  gpsData = getGpsData();
//  matlabWrite();
//  delay(1000);
}


// ----SHARP IR----
int getVoltageSharp(int pin) {
  int volts = analogRead(pin);
  int distance = log(volts/1198.97) / log(0.939862);
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


// ----SONAR----
int getVoltageSonar(int pin) {
  return 0;
}

void getSonarData() {
  sonarData[0] = getVoltageSonar(sonar1);
  sonarData[1] = getVoltageSonar(sonar2);
}
// -------------


// ----GPS----

//    GPS code goes here

// -----------


// ----MATLAB COMMS----

//    Code to talk to MATLAB via serial communication

void matlabWrite() {
}

// --------------------





// ALTERNATE CALIBRATIONS I FOUND (SHARP IR)
//  float volts = (60.374*1.3 * pow(map(analogRead(sharp1pin), 0, 1023, 0, 5000) / 1000.0,  -1.16)) / 2.54;

//  float volts = 1/(0.02029*analogRead(sharp1pin)-0.0005032);

//  float volts = analogRead(sharp1pin)*0.0048828125;  // value from sensor * (5/1024)
//  int distance = 13*pow(volts, -1); // worked out from datasheet graph
