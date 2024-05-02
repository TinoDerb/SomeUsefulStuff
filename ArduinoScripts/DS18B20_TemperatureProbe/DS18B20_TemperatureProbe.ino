// imports and definitions
#include <OneWire.h>                  // include the onewire libarary
#include <DallasTemperature.h>        // include the DallasTemperature libarary
#define DS18B20PIN 2                  // specify the pin of the output
OneWire oneWire(DS18B20PIN);          // Setup OneWire communication instance
DallasTemperature ds18b20(&oneWire);  // Pass oneWire reference to DallasTemperature
void setup(void) // setup
{
  Serial.begin(9600);                 // begin serial communication
  ds18b20.begin();	                  // start the sensor
}

void loop(void) // loop
{ 
  ds18b20.requestTemperatures();      // measure temperature          
  pt = ds18b20.getTempCByIndex(0);    // get measured value
  // print the value out
  Serial.print("Temperature: ");      
  Serial.print(pt);
  Serial.print(" °C");
  delay(5000); 				                // delay 5 seconds.
}
