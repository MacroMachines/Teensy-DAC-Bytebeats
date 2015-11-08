
unsigned long mod;
unsigned long freq;


void setup(){}

void loop(){
  
  freq = analogRead(A1)/16;
  mod = analogRead(A0)/16;

//  delayMicroseconds(mod);
  analogWrite(A14, ((micros()%mod)%freq)); 
}
