#ifndef _MATLAB_H   // Put these two lines at the top of your file.
#define _MATLAB_H   // (Use a suitable name, usually based on the file name.)


// ----MATLAB COMMS----

void matlabWrite() {
//  sharpWrite();
//  sonarWrite();
//  motorWrite();
  delay(2000);
}

void sharpWrite() {
  Serial.write(83); // Capital S(Sharp)
  for(int i=0;i<sharpLen;i++) {
    Serial.write(dtostrf(sharpData[i],3,0,sharpVal));
  }
}

void sonarWrite() {
  Serial.write(79); // Capital O(Sonar)
  for(int i=0;i<sonarLen;i++) {
    Serial.write(dtostrf(sonarData[i],3,0,sonarVal));
  }
}

void motorWrite() {
  Serial.write(77); // Capital M(Motors)
  for(int i=0;i<motorLen;i++) {
    Serial.write(dtostrf(motorData[i],3,0,motorVal));
  }
}

// --------------------



#endif // _MATLAB_H    // Put this line at the end of your file.
