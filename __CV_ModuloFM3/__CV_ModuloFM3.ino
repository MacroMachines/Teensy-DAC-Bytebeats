
int mod;
int freq;


void setup(){}

void loop(){
  
  freq = analogRead(A1)/2;
  mod = analogRead(A0)/16;
  for(int index = 0; index < 255; index++){
  delayMicroseconds(mod);
  analogWrite(A14, (index % freq));  }
}
