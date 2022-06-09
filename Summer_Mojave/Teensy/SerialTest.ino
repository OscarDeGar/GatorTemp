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
  if(Serial.available() > 0) {
//    incoming = Serial.read();  
      incoming = Serial.readString();
  }
  char mess[incoming.length() + 1];
//  Serial.write(incoming);
  incoming.toCharArray(mess,incoming.length() + 1);
  Serial.write(mess);
//  Serial.write(dtostrf(incoming,3,0,val));
}
