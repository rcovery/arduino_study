int index;
bool start = false;
String message = ".-.. --- ...- . / ..-";

void slowBlink() {
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(6, LOW);
}

void fastBlink() {
  digitalWrite(7, HIGH);
  delay(100);
  digitalWrite(7, LOW);
}

void delayBlink() {
  digitalWrite(5, HIGH);
  delay(700);
  digitalWrite(5, LOW);
}

void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  index = 0;
}

void loop() {
  if (digitalRead(2) == 0) {
    start = true;
  }
  
  if (start) {
    if (message.charAt(index) == '.') {
      fastBlink();
    } else if (message.charAt(index) == '-') {
      slowBlink();
    } else if (message.charAt(index) == '/') {
      delayBlink();
    }
  
    delay(200);
    index++;
  
    if (index == message.length()) {
      start = false;
    }
  } else {
    index = 0;
  }
}
