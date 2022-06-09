#ifndef _MOTORS_H   // Put these two lines at the top of your file.
#define _MOTORS_H   // (Use a suitable name, usually based on the file name.)

#include <Servo.h>;

void writePanTilt(Servo panServo, Servo tiltServo, int panAng, int tiltAng) {
  panServo.write(panAng);
  tiltServo.write(tiltAng);
}

void writeSteer(Servo steerServo, int steerAng) {
  steerServo.write(steerAng);   // steerAng range(105 - 90 - 75) (L - R)
}


#endif // _MOTORS_H    // Put this line at the end of your file.
