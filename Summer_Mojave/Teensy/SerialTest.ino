//double sharpData[6] = {1, 2, 3, 4, 5, 6};
//double sonarData[2] = {10, 11};
//double motorData[4] = {255, 200, 180, 160};
//
//char sharpVal[3];
//char sonarVal[3];
//char motorVal[3];
//
//int sharpLen = sizeof(sharpData) / sizeof(double);
//int sonarLen = sizeof(sonarData) / sizeof(double);
//int motorLen = sizeof(motorData) / sizeof(double);
//
//void setup() {  
//  Serial.begin(9600);
//}
//
//void loop() {
//  matlabWrite();
//}
//
//void matlabWrite() {
////  sharpWrite();
//  sonarWrite();
////  motorWrite();
//  delay(2000);
//}
//
//void sharpWrite() {
//  Serial.write(83); // Capital S(Sharp)
//  for(int i=0;i<sharpLen;i++) {
//    Serial.write(dtostrf(sharpData[i],3,0,sharpVal));
//  }
//}
//
//void sonarWrite() {
//  Serial.write(79); // Capsital O(Sonar)
//  for(int i=0;i<sonarLen;i++) {
//    Serial.write(dtostrf(sonarData[i],3,0,sonarVal));
//  }
//}
//
//void motorWrite() {
//  Serial.write(77); // Capital M(Motors)
//  for(int i=0;i<motorLen;i++) {
//    Serial.write(dtostrf(motorData[i],3,0,motorVal));
//  }
//}
