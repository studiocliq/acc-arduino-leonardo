#include <Mouse.h>

void setup() {
  // put your setup code here, to run once:
  Mouse.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(0);

  if (a > 150) {
    Serial.print(a);
    delay(100);

    Mouse.move(10, 0);
  }
}
