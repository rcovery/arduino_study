int pushValue = 0;

void setup() {
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  pushValue = digitalRead(2);
  Serial.println(pushValue);
  if (pushValue == 1) {
    digitalWrite(3, HIGH); 
  } else if (pushValue == 0) {
    digitalWrite(3, LOW); 
  }
}
