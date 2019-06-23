#include <DHT.h>

#define DHTPIN D0
#define DHTTYPE DHT11

int LDR=A0;
DHT dht(DHTPIN,DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LDR,INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
float t=dht.readTemperature();
float h=dht.readHumidity();
int ldr=analogRead(LDR);
Serial.print("SUHU :");Serial.print(t); Serial.print(" | ");
Serial.print("KELEMBABAN :");Serial.print(h);Serial.print(" | ");
Serial.print("LDR :");Serial.println(ldr);
delay(500);
}
