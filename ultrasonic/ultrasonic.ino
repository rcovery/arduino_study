const int pinT = 3; // Pino Digital Triq (ping)
const int pinE = 2; // Pino Digital Echo (retorno)
const int pinLed = 13; // Led pra diferenciar
long duration, centimeters; // Microsegundos, centímetros

void setup() {
  pinMode(pinT, OUTPUT);
  pinMode(pinLed, OUTPUT);
  pinMode(pinE, INPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(pinT, LOW);
  delay(2);
  digitalWrite(pinT, HIGH);
  delay(10);
  digitalWrite(pinT, LOW);

  duration = pulseIn(pinE, HIGH);
  centimeters = (duration / 2) / 80; // Transformar os microsegundos em centímetros
  
  Serial.println((String)"Distância: " + centimeters + "cm");
  
  digitalWrite(pinLed, centimeters < 15 ? HIGH : LOW);
  delay(300);
}
