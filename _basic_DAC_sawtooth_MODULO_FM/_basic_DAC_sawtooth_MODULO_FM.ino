

byte octave = 1;
byte beat = 0;

void setup(){}

void loop(){
  
  if(millis() % 4 == 0){
    beat = (beat+1) % 16;
    octave = beat;
  }
  
  analogWrite(A14, (micros() / octave) % 256);  
}
