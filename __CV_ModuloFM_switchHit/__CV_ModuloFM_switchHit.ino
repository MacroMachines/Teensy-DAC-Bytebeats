
unsigned long mod;
unsigned long freq;
int analog0;
int analog1;
unsigned long debounce = millis();
byte switchHit;

void setup(){}

void loop(){
  analog0 = analogRead(A0);
  analog1 = analogRead(A1);
  
  if(analog0 > 500 && millis() > debounce + 300){
    switchHit = (switchHit + 1) % 4;
    debounce = millis();}
  
  switch(switchHit){
  case 0:  
    freq = analog1/16;
    mod = analog0/16;
    analogWrite(A14, ((micros()%mod)%freq)); 
    break;
  case 1:
    freq = analog1/64;
    mod = analog0*16;
    analogWrite(A14, ((micros()+mod)%freq)); 
    break;
  case 2:
    freq = analog1^16;
    mod = analog0^8;
    delayMicroseconds(mod);
    analogWrite(A14, (micros()%freq)); 
    break;
  case 3:
    freq = analogRead(A1)/64;
    mod = analogRead(A0)*16;
    analogWrite(A14, ((micros()+mod)%freq)); 
    break;
  }
}
