byte sharpData[6] = {1, 2, 3, 4, 5, 6};
byte sonarData[2] = {10, 11};


void setup() {
  Serial.begin(9600);
}

void loop() {
  matlabWrite();
}

void matlabWrite() {
  Serial.write("renew");
  Serial.write(sharpData, 6);
  Serial.write(sonarData, 2);
}
