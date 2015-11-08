

byte octave = 16;
byte beat = 0;
byte sahrate = 4;
byte beatlength = 16;


unsigned long loopcounts;

void setup(){}

void loop(){

  beat = analogRead(A1);
  beatlength = analogRead(A0);
  sahrate = analogRead(A0)%256;
  octave = beat % beatlength;
  
  delayMicroseconds(sahrate*octave/16);
  analogWrite(A14, (micros() ^ octave) % beat);  
}
