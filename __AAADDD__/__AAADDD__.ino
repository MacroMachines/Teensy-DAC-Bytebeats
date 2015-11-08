

void setup(){
}


void loop(){
  SPELUMP();
  MELORPO();
  TENTARTAN();
  TENTAMOD();
  SPELUMPSQUET();
  RANDOMODULOFM();
  BASEKETBALLS();
}




void SPELUMP(){
  for(int meeeleeepee = 0; meeeleeepee < 8; meeeleeepee++){
  for(int merlorpo = 0; merlorpo < meeeleeepee; merlorpo++){
  for(int redic = 0; redic < 5; redic++){
  for(int freq = 0; freq < 12; freq++){
  for(int i = 0; i < merlorpo * 90; i++){
  delayMicroseconds(freq/(redic^merlorpo));
  analogWrite(A14,i^merlorpo);}}}}}}
   
   
   

void MELORPO(){
  for(int merlorpo = 0; merlorpo < 50; merlorpo++){
  for(int redic = 0; redic < 20; redic++){
  for(int freq = 0; freq < 20; freq++){
  for(int i = 0; i < merlorpo * 90; i++){
  delayMicroseconds(freq/(redic^merlorpo));
  analogWrite(A14,i);}}}}}
  
  
  
  
  
  
  
void TENTARTAN(){
  for(int measure = 0; measure < 8; measure++){
  for(int loopy = 0; loopy < 16; loopy++){
   
    if(measure == 0 || measure == 4){
      for(int kick = 0; kick < 8*loopy; kick++){
      for(int i = 0; i < (512%kick); i++){
        delayMicroseconds(i/kick%loopy);
        analogWrite(A14,i);}}}
      
    int skunkmusket = loopy%measure;
    if(skunkmusket < 8){
       delayMicroseconds(skunkmusket*loopy);}
    for(int meeeleeepee = 0; meeeleeepee < 4; meeeleeepee++){
      meeeleeepee += (skunkmusket*4);
    for(int merlorpo = 0; merlorpo < meeeleeepee; merlorpo++){
      merlorpo += max(meeeleeepee,skunkmusket);
    for(int redic = 0; redic < skunkmusket; redic++){
    for(int freq = 0; freq < 8; freq++){
       freq ^= (meeeleeepee/4);
    for(int i = 0; i < merlorpo * 64 ; i++){
       delayMicroseconds(freq/(redic^merlorpo)*96);
       analogWrite(A14,i^merlorpo);
       redic %= (meeeleeepee);
       if(redic > 4){
         delayMicroseconds((freq*redic%merlorpo)/16);
         analogWrite(A14,i^redic);}
       if(skunkmusket < 2){
         delayMicroseconds((freq%redic^merlorpo)/4);
         analogWrite(A14,i^loopy);}}}}}}}}
}  




       
       
void TENTAMOD(){
  for(int measure = 0; measure < 8; measure++){
  for(int loopy = 0; loopy < 16; loopy++){
   
    if(measure == 0 || measure == 3){
      for(int kick = 0; kick < 16*loopy; kick++){
      for(int i = 0; i < 512/measure; i++){
        delayMicroseconds(i/kick%loopy);
        analogWrite(A14,i);}}}
      
    int skunkmusket = loopy%measure;
    if(skunkmusket < 8){
       delayMicroseconds(skunkmusket*loopy);}
    for(int meeeleeepee = 0; meeeleeepee < 4; meeeleeepee++){
      meeeleeepee += (skunkmusket*4);
    for(int merlorpo = 0; merlorpo < meeeleeepee; merlorpo++){
      merlorpo += max(meeeleeepee,skunkmusket);
    for(int redic = 0; redic < skunkmusket; redic++){
    for(int freq = 0; freq < 8; freq++){
       freq ^= (meeeleeepee/4);
    for(int i = 0; i < merlorpo * 64 ; i++){
       delayMicroseconds(freq/(redic^merlorpo)*96);
       analogWrite(A14,i^merlorpo);
       redic %= (meeeleeepee);
       if(redic > 4){
         delayMicroseconds((freq*redic%merlorpo)/16);}
       if(skunkmusket < 2){
         delayMicroseconds((freq%redic^merlorpo)/4);} }}}}}}}       
}






void SPELUMPSQUET(){
  for(int meeeleeepee = 0; meeeleeepee < 8; meeeleeepee++){
    meeeleeepee += random(8);
  for(int merlorpo = 0; merlorpo < meeeleeepee; merlorpo++){
    merlorpo += random(meeeleeepee);
  for(int redic = 0; redic < 5; redic++){
  for(int freq = 0; freq < 12; freq++){
        freq ^= random(meeeleeepee);
  for(int i = 0; i < merlorpo * 90; i++){
     delayMicroseconds(freq/(redic^merlorpo));
     analogWrite(A14,i^merlorpo);
     redic += random(meeeleeepee);}}}}}
 }
 
 
 
 
void RANDOMODULOFM(){
   
byte octave = 1;
byte beat = 0;
byte sahrate = 4;
byte beatrate = 2;
byte beatlength = 16;

unsigned long loopcounts;
  
  if(loopcounts > 40000){
     octave = random(16);
     beat = random(16);
     sahrate = random(64);
     beatrate = random(64);
     beatlength = random(64);
     loopcounts = 0;}

  if(millis() % sahrate == 0){
    beat = (beat+beatrate) % beatlength;
    octave = beat;}
  
  analogWrite(A14, (micros() / octave) % 256);  
  
  loopcounts++;
}



void BASEKETBALLS(){
  for(int measure = 0; measure < 8; measure++){
  for(int loopy = 0; loopy < 16; loopy++){
   
    if(measure == 0 || measure == 4){
      for(int i = 0; i < 255; i++){
        analogWrite(A14,i^loopy);}}
      
    int skunkmusket = loopy%measure;
    if(skunkmusket < 5){
       delay(skunkmusket*10);}
    for(int meeeleeepee = 0; meeeleeepee < 1; meeeleeepee++){
      meeeleeepee += (skunkmusket*5);
    for(int merlorpo = 0; merlorpo < meeeleeepee; merlorpo++){
      merlorpo += max(meeeleeepee,skunkmusket);
    for(int redic = 0; redic < skunkmusket; redic++){
    for(int freq = 0; freq < 12; freq++){
       freq ^= (meeeleeepee/5);
    for(int i = 0; i < merlorpo * 30 ; i++){
       delayMicroseconds(freq/(redic^merlorpo)*100);
       analogWrite(A14,i^merlorpo);
       redic %= (meeeleeepee);
       if(redic > 3){
         delayMicroseconds((freq*redic%merlorpo)/16);}
       if(skunkmusket < 2){
         delayMicroseconds((freq%redic^merlorpo)/4);}
       }}}}}}}       
}
