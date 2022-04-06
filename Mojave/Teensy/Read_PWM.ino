#define RCPin 2
int PWM_Pin = 3;
volatile long StartTime =0;
volatile long CurrentTime =0;
volatile long Pulses =0;
int PulseWidth = 0;
void setup() {
  Serial.begin(9600);
  pinMode(PWM_Pin,OUTPUT);
  pinMode(RCPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(RCPin),PulseTimer,CHANGE);
  // put your setup code here, to run once:

}

void loop() {
   analogWrite(PWM_Pin,127);
  if(Pulses<2000){
    PulseWidth=Pulses;
  }
 
Serial.println(PulseWidth);
}
void PulseTimer(){
  CurrentTime=micros();
  
  if (CurrentTime>StartTime){
    Pulses=CurrentTime-StartTime;
    StartTime=CurrentTime;
  }
}
