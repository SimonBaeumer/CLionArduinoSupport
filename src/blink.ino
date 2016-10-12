const int LED_PORT = 4;

void setup() {
    pinMode(LED_PORT, OUTPUT);
}

void loop() {
    digitalWrite(LED_PORT, HIGH);
    delay(10);
    digitalWrite(LED_PORT, LOW);
    delay(10);
}