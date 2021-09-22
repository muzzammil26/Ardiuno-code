int led1 =13;
int led2=12;
int led3=11;
void setup() {
Serial.begin(9600);
pinMode(led1,OUTPUT);                             // put your setup code here, to run once:
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
}
void loop() {
Serial.println("STOP! WAIT for 30 SEC");              // put your main code here, to run repeatedly:
for( int i=0; i<=30; i++)
{
digitalWrite (led1,HIGH);
delay(1000);
digitalWrite (led1,LOW);
Serial.print("sec:\t");
Serial.println(i); 

}
Serial.println("START YOUR VEHICLE");
for( int i=0;i<=5;i++)
{
digitalWrite(led2,HIGH);
delay(1000);
digitalWrite (led2,LOW);
Serial.print("sec:\t");
Serial.println(i); 
}
Serial.println("GO");
for( int i=0;i<=20;i++)
{
digitalWrite(led3,HIGH);
delay(1000);
digitalWrite (led3,LOW);
Serial.print("sec:\t");
Serial.println(i);
}
}
