

byte octave = 1;
byte beat = 0;
byte sahrate = 4;
byte beatrate = 2;
byte beatlength = 16;

unsigned long loopcounts;

void setup(){}

void loop(){
  
  if(loopcounts > 1000){
     octave = random(16);
     beat = random(16);
     sahrate = random(16);
     beatrate = random(16);
     beatlength = random(16);
     loopcounts = 0;}

  if(millis() % sahrate == 0){
    beat = (beat+beatrate) % beatlength;
    octave = beat;}
  
  analogWrite(A14, (micros() / octave) % 256);  
  
  loopcounts++;
}
