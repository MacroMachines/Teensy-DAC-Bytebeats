


byte octave = 1;
byte beat = 0;

void setup(){}

void loop(){
  
//  for(int beat = 0; beat < 16; beat++){
//    for(int i = 0; i < 8*octave; i++){
  
      analogWrite(A14, (micros() / octave) % 256);
      
      if(millis() % 100 == 0){
        beat = (beat+1)%16;
        octave = beat;
      }
      
}
