void setup(){}

void loop(){
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
