

byte octave = 8;
byte beat = 12;
byte mod;
float envelope;

void setup(){}

void loop(){
  if(millis() % 500 == 0){
    mod = random(8);}
  if(millis() % mod == 0){
    beat = (beat+1) % mod;
    octave = beat;
  }
  envelope = (millis() % 250)/2;
  
  analogWrite(A14, float(((micros() / octave / mod) % 256))/envelope*16);  
}
