int led =3;
int trigPin = 11;
int echoPin=12;
long duration,cm,inches;
void setup() {
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(led,OUTPUT);
}
void loop(){
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
pinMode(echoPin,INPUT);
digitalWrite(led,HIGH);

duration=pulseIn(echoPin,HIGH);
cm =(duration/2)/29.1;
inches =(duration/2)/74;
Serial.print(inches);
Serial.print("in,");
Serial.print(cm);
Serial.print("cm");
Serial.println();
delay(250);
}
