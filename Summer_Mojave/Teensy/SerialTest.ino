//
//double sharpData[6] = {0,1,2,3,4,5};
//char sharpVal[3];
//int sharpLen = sizeof(sharpData) / sizeof(double);

char val[3];
String incoming;
bool hack = true;
void setup() {  
  Serial.begin(115200);

}

void loop() {
  matlabWrite();
}


void matlabWrite() {
  const unsigned long serialLimit = 2000; //ms
  unsigned long startTime = 0; //ms
  bool kill = false;

  unsigned long currentTime = millis();
  while (!kill) {
    if (Serial.available() > 0) {
        incoming = Serial.readString();
        kill = true;
        break;
    }
    if (currentTime - startTime >= serialLimit) {
        timeout();
        kill = true;
        break;
    }
  }

//  if (Serial.available() > 0) {
//    incoming = Serial.readString(); 
//  }
  char mess[incoming.length() + 1];
  incoming.toCharArray(mess,incoming.length() + 1);
  Serial.write(mess);
}

void timeout() {
  Serial.write("TIMEOUT");
}



//  Serial.write(dtostrf(incoming,3,0,val));
