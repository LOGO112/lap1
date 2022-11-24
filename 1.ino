int bip = 12 ; //
int lip = 15 ; //
int kip = 2 ; //
int nip = 17 ; //
void setup() {
  pinMode(bip, OUTPUT);
  pinMode(lip, OUTPUT);
  pinMode(kip, OUTPUT);
  pinMode(nip, OUTPUT);
}

void loop() {
     digitalWrite(nip, LOW);
  delay(500);
     digitalWrite(nip, HIGH);
  delay(500);
     digitalWrite(kip, LOW);
  delay(500);
     digitalWrite(kip, HIGH);
  delay(500);
     digitalWrite(lip, LOW);
  delay(500);
    digitalWrite(lip, HIGH);
  delay(500);
    digitalWrite(bip, LOW);
  delay(500);
  digitalWrite(bip, HIGH);
  delay(500);
}
