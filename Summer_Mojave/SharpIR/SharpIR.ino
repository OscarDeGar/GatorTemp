#define sharp1 A0
#define sharp2 A1
#define sharp3 A2
#define sharp4 A3
#define sharp5 A6
#define sharp6 A7

int sharpData[6];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  Serial.println("HERE");


  getSharpData();
  for(int i=0;i=5;i++) {
//    Serial.println(sharpData[i]);
  }

  
  delay(2000);
}

// ----SHARP IR----
float getVoltageSharp(int pin) {
  int sum = 0;
  int value;

  for(int i=0;i=2;i++) {
    value = analogRead(pin);
//    if (value == 0) {
//      value = 1;
//    };
    sum = sum + value;
  }
//  Serial.print("Sum: ");
//  Serial.println(sum);
  float volts = sum/3;
//  Serial.print("Volts: ");
//  Serial.println(volts);
  float distance = log(volts/1198.97) / log(0.939862) / 2.54;
  Serial.print("distance: ");
  Serial.println(distance);
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
