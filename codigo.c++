int ledSensor = 13;

int leds[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

void setup() {
  pinMode(ledSensor, INPUT);
  for(int i = 0; i < 13; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  if(digitalRead(ledSensor) == HIGH) {
    for(int i = 0; i < 13; i++) {
    digitalWrite(leds[i], HIGH);
    delay(100);
    digitalWrite(leds[i], LOW);
      }
  }
} 
