

byte octave = 8;
byte beat = 12;
byte mod;

void setup(){}

void loop(){
    mod = analogRead(A0);
    beat = analogRead(A1);
    octave = beat/mod;
    analogWrite(A14, (micros() % octave*10));  
}
