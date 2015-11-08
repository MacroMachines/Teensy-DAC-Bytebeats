
unsigned long mod;
unsigned long freq;
int analog0;
int analog1;
unsigned long debounce = millis();
byte switchHit;
byte switchSeq[32] = {0, 1, 2, 3, 0, 1, 5, 4,
                      0, 6, 1, 5, 0, 1, 8, 7,
                      0, 9, 9, 10,0, 11, 5, 4,
                      0, 6, 12, 5, 0, 12, 8, 13};

void setup(){}

void loop(){
  analog0 = analogRead(A0);
  analog1 = analogRead(A1);
  
  if(analog0 > 500 && millis() > debounce + 300){
    switchHit = (switchHit + 1) % 32;
    debounce = millis();}
  
  switch(switchSeq[switchHit]){
  //switch(13){
  case 0:  
    freq = analog1/16;
    mod = analog0/16;
    analogWrite(A14, (((micros()%mod)^4)%freq)); 
    break;
  case 1:
    freq = analog1/64;
    mod = analog0*16;
    analogWrite(A14, ((micros()+mod)%freq^20)); 
    break;
  case 2:
    freq = analog1^16;
    mod = analog0^8;
    delayMicroseconds(mod);
    analogWrite(A14, (micros()%freq)%64); 
    break;
  case 3:
    freq = analog1/8;
    mod = analog0/4;
    delayMicroseconds(mod);
    analogWrite(A14, (micros()%freq)/2); 
    break;
  case 4:
    freq = analog1/32;
    mod = analog0/16;
    analogWrite(A14, ((micros()+mod)%freq)); 
    break;
  case 5:
    for(int redic = 0; redic < 16; redic++){
    for(int freq = 0; freq < analog0/16; freq++){
    for(int i = 0; i < redic * analog0/128; i++){
      delayMicroseconds(freq/(redic^4));
      analogWrite(A14,i/2);}}}  
      break;
   case 6:
      for(int redic = 2; redic < 8; redic++){
      for(int freq = 8; freq < analog1/16; freq++){
      for(int i = 8; i < redic * analog1/32; i++){
      delayMicroseconds(freq/(redic*2));
      analogWrite(A14,i/2);}}}  
      break;
   case 7:
      for(int redic = 0; redic < 4; redic++){
      for(int freq = 0; freq < analog0/18; freq++){
      for(int i = 0; i < redic * analog1/4; i++){
      delayMicroseconds(freq/(redic^8));
      analogWrite(A14,i/6);}}}  
      break;
    case 8:
      for(int redic = 0; redic < 32; redic++){
      for(int freq = 0; freq < analog0/64; freq++){
      for(int i = 0; i < redic * analog1/16; i++){
      delayMicroseconds(freq*4/(redic^6));
      analogWrite(A14,i-256);}}} 
      break;
    case 9:  
      freq = analog0/32;
      mod = analog1/8;
      analogWrite(A14, ((micros()%mod)%freq)+100); 
      break;
    case 10:
      freq = analog0/24;
      mod = analog1*128;
      analogWrite(A14, ((micros()+mod)%freq)); 
      break;
    case 11:
      freq = analog0^1024;
      mod = analog1^3;
      delayMicroseconds(mod);
      analogWrite(A14, (micros()%freq)/16); 
      break;
    case 12:
      freq = analog0*2;
      mod = analog1*2;
      delayMicroseconds(mod^freq);
      analogWrite(A14, (micros()%freq*2)>>2); 
      break;
    case 13:
      freq = analog0/32;
      mod = analog1*16;
      analogWrite(A14, ((micros()+mod)%freq)); 
      break;

      
  
  }
}
