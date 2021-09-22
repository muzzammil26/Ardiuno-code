int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;
int led6=7;
int trigPin=11;
int echoPin=12;
long duration,cm,inches;
void setup(){
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  }
void loop()
  {
    digitalWrite(trigPin,LOW);
    delayMicroseconds(5);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);
    pinMode(echoPin,INPUT);
    duration=pulseIn(echoPin,HIGH);
    cm=(duration/2)/29.1;
    inches=(duration/2)/74;
    Serial.print(inches);
    Serial.print("in,");
    Serial.print(cm);
    Serial.print("cm");
    Serial.println();
   delay(250);
    if( cm<=3)
    {
      digitalWrite(led1,HIGH);
   }
    else{
      digitalWrite(led1,LOW);
    }
    if( cm<=6)
    {
      digitalWrite(led2,HIGH);
   }
    else{
      digitalWrite(led2,LOW);
    }
    if( cm<=8)
    {
      digitalWrite(led3,HIGH);
   }
    else{
      digitalWrite(led3,LOW);
    }
    if( cm<=12)
    {
      digitalWrite(led4,HIGH);
   }
    else{
      digitalWrite(led4,LOW);
    }
    if( cm<=15)
    {
      digitalWrite(led5,HIGH);
   }
    else{
      digitalWrite(led5,LOW);
    }
    if( cm<=20)
    {
      digitalWrite(led6,HIGH);
   }
    else{
      digitalWrite(led6,LOW);
    }

  }
