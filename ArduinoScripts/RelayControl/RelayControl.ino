int relayPin = 2;                     // define the signal pin
void setup() { // setup
  pinMode(relayPin, OUTPUT);          // start the pin as an output
}
void loop() { // loop
  digitalWrite(relayPin, HIGH);       // close the contacts
  delay(60000);                       // wait 60 seconds
  digitalWrite(relayPin, LOW);        // open the contacts
  delay(60000);                       // wait 60 seconds
}