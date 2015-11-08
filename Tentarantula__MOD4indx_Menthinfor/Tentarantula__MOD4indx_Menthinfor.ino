void setup(){}

void loop(){
  
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
         analogWrite(A14,i^loopy);}
       }}}}}}}       
}
