
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
  outputSound = min(mix1,mix2);
  analogWrite(A14, outputSound);  
}

void sound1(){
   if(millis() % 500 == 0){
    mod = random(16);}
  if(millis() % mod == 0){
    beat = (beat+1) % mod;
    octave = beat;}
    envelope = abs((millis() % 250)*-1);
    mix1 = float(((micros() / octave / mod) % 256))*envelope;
}


void sound2(){
   if(millis() % 175 == 0){
    mod = random(16);}
  if(millis() % mod == 0){
    beat = (beat+1) % mod;
    octave = beat;
  }
  envelope = abs((millis() % 175)*-1);
  mix2 = float(((micros() / octave / mod) % 256))*envelope;
}
