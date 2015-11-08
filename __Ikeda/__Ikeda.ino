

byte octave = 8;
byte beat = 12;
byte mod;

void setup(){}

void loop(){
  if(millis() % 5000 == 0){
    mod = random(8);}
  if(millis() % 4 == 0){
    beat = (beat+1) % mod;
    octave = beat;
  }
  
  analogWrite(A14, (micros() % octave) % 256);  
}
