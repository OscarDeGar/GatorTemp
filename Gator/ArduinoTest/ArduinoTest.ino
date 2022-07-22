byte PWM = 3;
byte output;
int pwmValue;

void setup() {
  // put your setup code here, to run once:
  pinMode(PWM,INPUT);
  pinMode(output,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  pwmValue = pulseIn(PWM, HIGH);
  Serial.println(pwmValue);
  analogWrite(output,pwmValue);
}
