

byte octave = 1;
byte beat = 0;

void setup(){}

void loop(){
  
  if(millis() % 100 == 0){
    beat = (beat+1) % 8;
    octave = beat;
  }
  
  analogWrite(A14, (micros() / octave) % 256);  
}