int delayTime = 500;
int led0Pin = 0;
int led1Pin = 1;
int led2Pin = 2;
void setup() {
  // put your setup code here, to run once:
pinMode(led0Pin,OUTPUT);
pinMode(led1Pin,OUTPUT);
pinMode(led2Pin,OUTPUT);
for(int blinkCount = 0; blinkCount < 3; blinkCount++) {
digitalWrite(led0Pin,HIGH);
digitalWrite(led1Pin,HIGH);
digitalWrite(led2Pin,HIGH);
delay(delayTime);
digitalWrite(led0Pin,LOW);
digitalWrite(led1Pin,LOW);
digitalWrite(led2Pin,LOW);
delay(delayTime);
}
}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led0Pin,HIGH);
digitalWrite(led1Pin,LOW);
digitalWrite(led2Pin,LOW);
delay(delayTime);
digitalWrite(led0Pin,HIGH);
digitalWrite(led1Pin,HIGH);
digitalWrite(led2Pin,LOW);
delay(delayTime);
digitalWrite(led0Pin,HIGH);
digitalWrite(led1Pin,HIGH);
digitalWrite(led2Pin,HIGH);
delay(delayTime);
digitalWrite(led0Pin,LOW);
digitalWrite(led1Pin,LOW);
digitalWrite(led2Pin,LOW);
delay(delayTime);
}
