#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "*************";
char ssid[] = "namahostpotmu";
char pass[] = "";
  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600h);
  Serial.begin(auth,ssid,pass);  
}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
}
