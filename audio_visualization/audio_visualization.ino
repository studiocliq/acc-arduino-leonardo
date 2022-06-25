void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  int a = analogRead(A0);

  if (a > 150) {
    Serial.print(a);
    delay(100);
  }

  if (150 < a && a < 200 ) {
    Serial.println("  ++");
  }

  if (201 < a && a < 250 ) {
    Serial.println("  +++++");
  }

  if (251 < a && a < 300 ) {
    Serial.println("  ++++++++");
  }

  if (351 < a && a < 400 ) {
    Serial.println("  +++++++++++");
  }

  if (401 < a && a < 450 ) {
    Serial.println("  ++++++++++++++");
  }

  if (451 < a && a < 500 ) {
    Serial.println("  +++++++++++++++++");
  }

  if (501 < a && a < 550 ) {
    Serial.println("  ++++++++++++++++++++");
  }

  if (551 < a && a < 600 ) {
    Serial.println("  +++++++++++++++++++++++");
  }

  if (601 < a && a < 650 ) {
    Serial.println("  +++++++++++++++++++++++++++");
  }

  if (651 < a && a < 700 ) {
    Serial.println("  ++++++++++++++++++++++++++++++");
  }

  if (701 < a && a < 750 ) {
    Serial.println("  +++++++++++++++++++++++++++++++++");
  }
 
  if (751 < a && a < 800 ) {
    Serial.println("  ++++++++++++++++++++++++++++++++++++");
  }

  if (801 < a && a < 900 ) {
    Serial.println("  +++++++++++++++++++++++++++++++++++++++");
  }

  if (901 < a && a < 1023 ) {
    Serial.println("  ++++++++++++++++++++++++++++++++++++++++++");
  }
}
