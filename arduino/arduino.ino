const int analogPin = A0;  // Signal input
const int samplingFreq = 500;  

void setup() {
    Serial.begin(19200);  // High baud rate for fast transfer
  
}

void loop() {
    int sensorValue = analogRead(analogPin);  // Read the analog input
    Serial.println(sensorValue);  // Send the value to the serial monitor
    delay(1000 / samplingFreq);  // Wait for the next sample
}