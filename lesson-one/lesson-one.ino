void setup() {
  // put your setup code here, to run once:

  // set pin 9 to output mode
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // tell pin 9 to output a high signal
  digitalWrite(9, HIGH);

  // delay for some number of milliseconds
  delay(1000);

  // tell pin 13 to output a low signal
  digitalWrite(9, LOW);

  // delay for some number of milliseconds
  delay(1000);
}
