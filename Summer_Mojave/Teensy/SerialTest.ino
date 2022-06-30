//void setup() {  
//  Serial.begin(115200);
//}
//
//void loop() {
////  matlabWrite();
////  getSharpData();
//  for (int i=0;i < 6;i++) {
////    Serial.println("-----------------");
////    Serial.print("Sharp");
////    Serial.print(i);
////    Serial.print("(in): ");
////    Serial.println(sharpData[i]);
////    Serial.println("-----------------");
////  }
////  delay(3000);
////  
//  if (Serial.available() > 0) {
//    // read the incoming byte:
//    int val = Serial.read();
//    if (val == 83) {
//      Serial.write(88);
//    } else {
//      Serial.write(88);
//    }
//  }
//  
//}
//
//
////void matlabWrite() {
////  const unsigned long serialLimit = 2000; //ms
////  unsigned long startTime = 0; //ms
////  bool kill = false;
////
////  unsigned long currentTime = millis();
////  while (!kill) {
////    if (Serial.available() > 0) {
////        incoming = Serial.readString();
////        kill = true;
////        break;
////    }
////    if (currentTime - startTime >= serialLimit) {
////        timeout();
////        kill = true;
////        break;
////    }
////  }
////
//////  if (Serial.available() > 0) {
//////    incoming = Serial.readString(); 
//////  }
////  char mess[incoming.length() + 1];
////  incoming.toCharArray(mess,incoming.length() + 1);
////  Serial.write(mess);
////}
////
////void timeout() {
////  Serial.write("TIMEOUT");
////}
//
//
//
////  Serial.write(dtostrf(incoming,3,0,val));
