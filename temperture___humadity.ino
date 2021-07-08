#include <DHT.h>

DHT dht(2,DHT11);

void setup()
{
  Serial.begin(9600);
  dht.begin();
}
void loop()
{
  float h = dht.readHumidity();

  float t = dht.readTemperature();

 float f = dht.readTemperature(true);

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.println(" %");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" *C");
float k=t+273;
Serial.print("Temperature in kalvin: ");
Serial.println(k);
  Serial.print("k");
   Serial.print("Temperature in fehrenhite: ");
  Serial.print(f);
  Serial.println("F");
  delay(5000);
}
