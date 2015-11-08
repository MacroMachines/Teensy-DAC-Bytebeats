
byte outputSound;
int mix1;
int mix2;
byte octave = 8;
byte beat = 12;
byte mod;
float envelope;

void setup(){}

void loop(){
  sound1();
  sound2();
  outputSound = max(mix1,mix2);
  analogWrite(A14, outputSound);  
}

void sound1(){
   if(millis() % 500 == 0){
    mod = random(16);}
  if(millis() % mod == 0){
    beat = (beat+1) % mod;
    octave = beat;}
    envelope = (millis() % 250)/2;
    mix1 = float(((micros() / octave / mod) % 256))/envelope*16;
}


void sound2(){
   if(millis() % 175 == 0){
    mod = random(16);}
  if(millis() % mod == 0){
    beat = (beat+1) % mod;
    octave = beat;
  }
  envelope = (millis() % 175)/2;
  mix2 = float(((micros() / octave / mod) % 256))/envelope*2;
}
