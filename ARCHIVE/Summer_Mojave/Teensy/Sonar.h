#ifndef _SONAR_H   // Put these two lines at the top of your file.
#define _SONAR_H   // (Use a suitable name, usually based on the file name.)


// ----SONAR----
int getVoltageSonar(int pin) {
  return 0;
}

void getSonarData() {
  sonarData[0] = getVoltageSonar(sonar1);
  sonarData[1] = getVoltageSonar(sonar2);
}
// -------------


#endif // _SHARPIR_H    // Put this line at the end of your file.
