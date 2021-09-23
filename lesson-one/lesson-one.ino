void setup() {
  // put your setup code here, to run once:

  // set pin 13 to output mode
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // tell pin 13 to output a high signal
  digitalWrite(13, HIGH);

  // delay for some number of milliseconds
  delay(1000);

  // tell pin 13 to output a low signal
  digitalWrite(13, LOW);

  // delay for some number of milliseconds
  delay(1000);
}
