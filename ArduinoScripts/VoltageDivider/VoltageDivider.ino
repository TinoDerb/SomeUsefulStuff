float Vout = 0.0;                     // define the variable for voltage
void setup() { // setup
  Serial.begin(9600);                 // begin serial communication
}
void loop() { // loop
  Vout = 5.0*analogRead(A0)/1023.0;   // convert voltage to volts
  // print values out
  Serial.print("Vout: ");
  Serial.println(Vout);
  delay(1000);                        // delay for a second
}
