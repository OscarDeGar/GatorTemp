#ifndef _MATLAB_H   // Put these two lines at the top of your file.
#define _MATLAB_H   // (Use a suitable name, usually based on the file name.)


// ----Serial ASCII----
// 76 == L 'Lidar Tilt'
// 77 == M 'MaxSpeed'
// 80 == P 'Pan'
// 83 == S 'Steer'
// 84 == T 'Throttle'
// 116 == t 'tilt
// --------------------


// ----MATLAB COMMS----

void matlabRead() {
  if (Serial.available() > 0) {
    int val = Serial.read();
    switch (val) {
      case 76:                          // 76 == L 'LidarTilt', motorData[5]
        Serial.write(val);
        if (Serial.available() > 0) {
          int lidarTilt = Serial.read();
          motorData[5] = lidarTilt;
        }
      case 77:                          // 77 == M 'MaxSpeed', motorData[2]
        Serial.write(val);
        if (Serial.available() > 0) {
          int maxS = Serial.read();
          motorData[2] = maxS;
        }
      case 80:                          // 80 == P 'Pan', motorData[3]
        Serial.write(val);
        if (Serial.available() > 0) {
          int pan = Serial.read();
          motorData[3] = pan;
        }
      case 83:                          // 83 == S 'Steer', motorData[1]
        Serial.write(val);
        if (Serial.available() > 0) {
          int steer = Serial.read();
          motorData[1] = steer;
        }
      case 84:                          // 84 == T 'Throttle', motorData[0]
        Serial.write(val);
        if (Serial.available() > 0) {
          int throttle = Serial.read();
          motorData[0] = throttle;
        }
      case 116:                         // 116 == t 'Tilt', motorData[4]
        Serial.write(val);
        if (Serial.available() > 0) {
          int tilt = Serial.read();
          motorData[4] = tilt;
        }
      default:
        for(int i=0;i<6;i++) {      // Set everything to 0 and shutoff
          motorData[i] == 0;
        }
        terminate == true;          // terminate == true, run emergency shutdown of everything 
    }
  }
}

void matlabWrite() {
  sharpWrite();
  sonarWrite();
//  motorWrite();
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

//void motorWrite() {
//  Serial.write(77); // Capital M(Motors)
//  for(int i=0;i<motorLen;i++) {
//    Serial.write(dtostrf(motorData[i],3,0,motorVal));
//  }
//}

// --------------------



#endif // _MATLAB_H    // Put this line at the end of your file.
