
unsigned long mod;
unsigned long freq;
int analog0;
int analog1;
unsigned long debounce = millis();
byte switchHit;
byte switchSeq[16] = {0, 1, 2, 3, 0, 1, 5, 4,
                      0, 6, 1, 5, 0, 1, 1, 7};

void setup(){}

void loop(){
  analog0 = analogRead(A0);
  analog1 = analogRead(A1);
  
  if(analog0 > 500 && millis() > debounce + 300){
    switchHit = (switchHit + 1) % 16;
    debounce = millis();}
  
  switch(switchSeq[switchHit]){
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
    analogWrite(A14, (micros()%freq)-64); 
    break;
  case 3:
    freq = analog1*256;
    mod = analog0/4;
    delayMicroseconds(mod);
    analogWrite(A14, (micros()%freq)/2); 
    break;
  case 4:
    freq = analog1/32;
    mod = analog0*16;
    analogWrite(A14, ((micros()+mod)%freq)); 
    break;
  case 5:
    for(int redic = 0; redic < 8; redic++){
    for(int freq = 0; freq < analog0/16; freq++){
    for(int i = 0; i < redic * analog0/64; i++){
      delayMicroseconds(freq/(redic^4));
      analogWrite(A14,i);}}}  
      break;
   case 6:
      int skunkmusket = analog0/16;
      if(skunkmusket < 8){
       delayMicroseconds(skunkmusket);}
      for(int meeeleeepee = 0; meeeleeepee < 4; meeeleeepee++){
      meeeleeepee = (skunkmusket*4);
      for(int merlorpo = 0; merlorpo < meeeleeepee; merlorpo++){
      merlorpo = max(analogRead(A1),skunkmusket);
      int redic = analogRead(A1);
      for(int freq = 0; freq < 8; freq++){
       freq ^= (meeeleeepee/4);
      for(int i = 0; i < merlorpo * 64 ; i++){
       delayMicroseconds(freq/(redic^merlorpo)*96);
       analogWrite(A14,i^merlorpo);
       redic %= (analogRead(A0));
       if(redic > 4){
         delayMicroseconds((freq*redic%merlorpo)/16);}
       if(skunkmusket < 2){
         delayMicroseconds((freq%redic^merlorpo)/4);}
       }}}} 
       break;
  
  }
}
