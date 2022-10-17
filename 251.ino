
#include<WiFi.h>

const char ssid[] = "Saanvi";
const char password[] = "xperia123";

const int potpin = 15;

void setup()
{
  Serial.begin(115200);

  Serial.print("Connecting to : ");
  Serial.println(ssid);
  WiFi.begin(ssid , password);
  while (WiFi.status()  !=  WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.println("Connected with Wifi !");
}

void loop()
{
    int pot = analogRead(potpin);
    Serial.print("pot values:");
    Serial.println(pot);
    delay(1000);
}
