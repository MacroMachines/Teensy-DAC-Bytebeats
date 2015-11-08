

byte octave = 1;
byte beat = 0;
byte sahrate = 4;
byte beatrate = 2;
byte beatlength = 16;
byte loopCountMult =1;

unsigned long loopcounts;

void setup(){}

void loop(){
  
  if(loopcounts > 4000*loopCountMult){
     octave = random(16);
     beat = random(16);
     sahrate = random(64);
     beatrate = random(64);
     beatlength = random(64);
     loopCountMult = random(8)*8+1;
     loopcounts = 0;}

  if(millis() % sahrate == 0){
    beat = (beat+beatrate) % beatlength;
    octave = beat;}
  
  analogWrite(A14, (micros() / octave) % 256);  
  
  loopcounts++;
}
