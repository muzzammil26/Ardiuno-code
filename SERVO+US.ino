#include <Servo.h>
Servo servo_motor;
#define trigPin 11
#define echoPin 12
long duration,cm,inches;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  servo_motor .attach(9);  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  pinMode(echoPin,INPUT);
  
  duration=pulseIn(echoPin,HIGH);
  cm =(duration/2)/29.1;
  inches =(duration/2)/74;
  Serial.print(inches);
  Serial.print("in,");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  delay(250);
  if (cm>=10&&cm<=20)
  {
     for(int i=0;i<=180;i++)
  {
    servo_motor.write(i);
    delay(6);
    break;
    }
  }
   else if(cm>=21&&cm<=70)
   {
     for(int i=180;i>=0;i--)
  {
    servo_motor.write(i);
    delay(6);
    break;
  }
   }
  }
