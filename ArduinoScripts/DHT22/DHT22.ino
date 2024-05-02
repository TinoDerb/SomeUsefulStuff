// imports and definitions
#include <DHT.h>; 				            // include the DHT library
#define DHTPIN 2  				            // specify the pin of the output
DHT dht(DHTPIN, DHT22); 			        // initialize DHT sensor
float hum;  					                // stores humidity value
float temp; 					                // stores temperature value

void setup() // setup
{
  Serial.begin(9600); 			          // begin serial comnmunication
  dht.begin();				                // start the sensor
}

void loop() // loop
{
    hum = dht.readHumidity(); 		    // read the relative humidity
    temp= dht.readTemperature();	    // read the temperature
    // Print the out
    Serial.print("Humidity: ");
    Serial.print(hum);
    Serial.print(" %, Temp: ");
    Serial.print(temp);
    Serial.println(" Celsius");
    delay(5000); 				              // delay 5 seconds.
}