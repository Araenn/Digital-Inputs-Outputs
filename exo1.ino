int switchState = 0;

void setup() {
   pinMode(8, OUTPUT); //led gate 8//
   pinMode(7, INPUT); //button gate 7//
 }
 
void loop() {
   switchState = digitalRead(7); //check the tension in pin 7//
   if (switchState == LOW) { //if button unpressed//
      digitalWrite(8, LOW); //no light//
   }
   else {
      digitalWrite(8, HIGH); //light//
   }
 }
 //he LED will light up when the button is pressed//
