int PinNumber = 9;  // Variable that holds the arduino pin number we are using 
int OnTime = 1000;  // Variable that holds the LED on time in milliseconds 
int OffTime = 1000; // Variable that holds the LED off time in milliseconds

void setup() {
  // put your setup code here, to run once:

  // set pin to output mode
  pinMode(PinNumber, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // tell pin to output a high signal, this turn the LED ON
  digitalWrite(PinNumber, HIGH);

  // delay for some number of milliseconds while the LED is ON
  delay(OnTime);

  // tell pin to output a low signal, this turns the LED OFF
  digitalWrite(PinNumber, LOW);

  // delay for some number of milliseconds while the LED is OFF
  delay(OffTime);
}
