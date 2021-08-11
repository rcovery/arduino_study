void slowBlink() {
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
}

void fastBlink() {
  digitalWrite(2, HIGH);
  delay(100);
  digitalWrite(2, LOW);
  delay(100);
}

void setup() {
  // put your setup code here, to run once:
  //pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  fastBlink();
  slowBlink();
}
