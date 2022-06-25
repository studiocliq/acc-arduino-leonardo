#include <Mouse.h>
#include <Keyboard.h>

#define KEY_SPACE 0x20

void setup() {
  Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

  int a = analogRead(0);
 
  Serial.print("a: ");
  Serial.println(a);

  delay(100);

  if (a > 100) {
    Keyboard.press(KEY_SPACE);
    delay(200);
    Keyboard.releaseAll();
  } else if (a > 300) {
    Keyboard.press(KEY_SPACE);
    delay(500);
    Keyboard.releaseAll();
  }
}
