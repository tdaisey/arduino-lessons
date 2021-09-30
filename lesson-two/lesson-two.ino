int PinNumber = 9;

void setup() {
  // put your setup code here, to run once:

  // set pin 13 to output mode
  pinMode(PinNumber, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // tell pin 13 to output a high signal
  digitalWrite(PinNumber, HIGH);

  // delay for some number of milliseconds
  delay(1000);

  // tell pin 13 to output a low signal
  digitalWrite(PinNumber, LOW);

  // delay for some number of milliseconds
  delay(1000);
}
