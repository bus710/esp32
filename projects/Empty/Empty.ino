
const int PIN21 = 21;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN21, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  delay(1000);
  digitalWrite(PIN21, HIGH);
  delay(1000);
  digitalWrite(PIN21, LOW);
}
