int switchstate = 0;
int RED1 = 5;
int RED2 = 4;
int GREEN1 = 3;
int INPUTPIN = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN1, OUTPUT);  //Grün
  pinMode(RED1, OUTPUT);    //Rot 1
  pinMode(RED2, OUTPUT);    //Rot 1
  pinMode(INPUTPIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  switchstate = digitalRead(INPUTPIN);

  if (switchstate == LOW) {
    digitalWrite(GREEN1, LOW);
    digitalWrite(RED1, HIGH);
    digitalWrite(RED2, HIGH);
  } else {
    Blink();
    Blink();
    Blink();
    delay(1000);
    GO();
  }
}
void Blink() {
  digitalWrite(RED1, LOW);
  digitalWrite(RED2, LOW);
  delay(1000);
  digitalWrite(RED1, HIGH);
  digitalWrite(RED2, HIGH);
  delay(1000);
}
void GO() {
  digitalWrite(RED1, LOW);
  digitalWrite(RED2, LOW);
  delay(1000);
  digitalWrite(GREEN1, HIGH);
  delay(1000);
}