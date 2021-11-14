int SwitchState;
int SwitchStateInit;
int LedState;

void setup() {
  pinMode(8, OUTPUT); //led gate 8//
  pinMode(7, INPUT); //button gate 7//
  LedState = digitalRead(8);
}

void loop() {
  SwitchState = digitalRead(7); //read button value number 7//
  SwitchStateInit = 0; //put state 0 to button 7//
  if (SwitchState != SwitchStateInit && SwitchState == 1 ) { //compare button status at initialization//
    LedState = !LedState; //change led's value//
    digitalWrite(8, LedState); //change state's value//
  }
}
//light change its state when button is pressed//
