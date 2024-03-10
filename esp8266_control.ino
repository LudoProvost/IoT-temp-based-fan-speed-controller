#include <OneWire.h>
#include <DallasTemperature.h>
 
#define ONE_WIRE_BUS 12
 
int fanPin = 16;
int dutyCycle = 0;
 
float temp = 0;
int threshold = 20;

int minTemp = 10;
int maxTemp = 30;
 
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
 

void setup() {
  Serial.begin(9600);
  sensors.begin();
  pinMode(fanPin, OUTPUT);
 }

 
 
void controlFanSpeed(int fanSpeedPercent) {
  analogWrite(fanPin, fanSpeedPercent);
}
 
 
void loop(){
  sensors.requestTemperatures();
  temp = sensors.getTempCByIndex(0); 

  if (temp >= threshold){
    int fanSpeedPercent = map(temp, minTemp, maxTemp, 10, 255);
    controlFanSpeed(fanSpeedPercent);
  }
  else if (temp < threshold){
    int fanSpeedPercent = 0;
    controlFanSpeed(fanSpeedPercent);
  }
}
