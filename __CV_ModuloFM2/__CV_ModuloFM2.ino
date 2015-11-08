
int mod;
int freq;

void setup(){}

void loop(){

  freq = analogRead(A1)/32;
  mod = analogRead(A0)/32;
  
  delayMicroseconds(mod);
  analogWrite(A14, (micros() % freq));  
}
