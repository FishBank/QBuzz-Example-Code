/*  QBuzz
This sketch demonstrates the QBuzz.  It makes a tone that goes up and down, in
1.4 second intervals.

The parts from Qtechknow that you will need are:
-QBuzz

made on 10 July 12
created by Quin
*/

const int QBuzzPin = 11;  // the pin that your QBuzz is connected to

void setup() {
  // no need for any code here
}

void loop() {
  for(int i=300; i<1000; i++) {
  
  // make the tone
  tone(QBuzzPin, i);
  
  delay(2);     // it takes 1.4 seconds to get to the highest pitch
  }
  
  for(int i=1000; i>300; i--) {
    
    tone(QBuzzPin, i);
    
    delay(2);   // it takes another 1.4 seconds to get to the lowest pitch
  }
}

