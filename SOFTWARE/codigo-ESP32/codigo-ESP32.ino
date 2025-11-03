#define BLYNK_TEMPLATE_ID "TMPL26y8pc1Uk"
#define BLYNK_TEMPLATE_NAME "LED ESP32"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial


#define APP_DEBUG

#include "BlynkEdgent.h"

#define rele1_PIN 16 
#define rele2_PIN 21
#define rele3_PIN 24
#define rele4_PIN 25

BLYNK_WRITE(V0)
{
  int valor1 = param.asInt();

  if (valor1 == 1) {
    digitalWrite(rele1_PIN, HIGH);
    Serial.print("valor1 = ");
    Serial.println(valor1);
  } else {
    digitalWrite(rele1_PIN, LOW);
    Serial.print("valor1 = ");
    Serial.println(valor1);
  }
}

BLYNK_WRITE(V1)
{
  int valor2 = param.asInt();

  if (valor2 == 1) {
    digitalWrite(rele2_PIN, HIGH);
    Serial.print("valor2 = ");
    Serial.println(valor2);
  } else {
    digitalWrite(rele2_PIN, LOW);
    Serial.print("valor2 = ");
    Serial.println(valor2);
  }
}

BLYNK_WRITE(V2)
{
  int valor3 = param.asInt();

  if (valor3 == 1) {
    digitalWrite(rele3_PIN, HIGH);
    Serial.print("valor3 = ");
    Serial.println(valor3);
  } else {
    digitalWrite(rele3_PIN, LOW);
    Serial.print("valor3 = ");
    Serial.println(valor3);
  }
}

BLYNK_WRITE(V3)
{
  int valor4 = param.asInt();

  if (valor4 == 1) {
    digitalWrite(rele4_PIN, HIGH);
    Serial.print("valor4 = ");
    Serial.println(valor4);
  } else {
    digitalWrite(rele4_PIN, LOW);
    Serial.print("valor4 = ");
    Serial.println(valor4);
  }
}

void setup()
{
  pinMode(rele1_PIN, OUTPUT);
  digitalWrite(rele1_PIN, LOW);
  pinMode(rele2_PIN, OUTPUT);
  digitalWrite(rele2_PIN, LOW);
  pinMode(rele3_PIN, OUTPUT);
  digitalWrite(rele3_PIN, LOW);
  pinMode(rele4_PIN, OUTPUT);
  digitalWrite(rele4_PIN, LOW);
  
  Serial.begin(115200);
  delay(100);

  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
  delay(10);
}
