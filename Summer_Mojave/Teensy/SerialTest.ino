char val[3];
String incoming;
bool hack = true;
void setup() {  
  Serial.begin(115200);

}

void loop() {
  matlabWrite();
}



















//void matlabWrite() {
//  const unsigned long serialLimit = 2000; //ms
//  unsigned long startTime = millis(); //ms
//  bool kill = false;
//  
//  while (!kill) {
//    if (Serial.available() > 0) {
//      unsigned long currentTime = millis();
//      if (currentTime - startTime >= serialLimit) {
//        timeout();
//        kill = true;
//        break;
//      } else {
//        incoming = Serial.readString();
//        kill = true;
//        break;
//      }
//    }
//  }
//  char mess[incoming.length() + 1];
//  incoming.toCharArray(mess,incoming.length() + 1);
//  Serial.write(mess);
//}
//
//void timeout() {
//  Serial.write("TIMEOUT");
//}



//  Serial.write(dtostrf(incoming,3,0,val));
