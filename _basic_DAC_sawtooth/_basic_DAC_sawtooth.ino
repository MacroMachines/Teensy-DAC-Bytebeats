


byte octave = 1;
byte beat = 0;

void setup(){}

void loop(){
  
//  for(int beat = 0; beat < 16; beat++){
//    for(int i = 0; i < 8*octave; i++){
  
      analogWrite(A14,(micros()/(256<<octave))%256);
      
      if(millis() % 1000 == 0){
        beat = (beat+1)%16;
        octave = beat;
      }
      
}
