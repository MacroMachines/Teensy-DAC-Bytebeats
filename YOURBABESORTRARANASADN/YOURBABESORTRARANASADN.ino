

void setup(){
}

void loop(){
  int skunkmusket = random(10);
  if(skunkmusket < 5){
       delay(skunkmusket*10);}
  for(int meeeleeepee = 0; meeeleeepee < 1; meeeleeepee++){
    meeeleeepee += random(skunkmusket*5);
  for(int merlorpo = 0; merlorpo < meeeleeepee; merlorpo++){
    merlorpo += random(meeeleeepee);
  for(int redic = 0; redic < skunkmusket; redic++){
  for(int freq = 0; freq < 12; freq++){
        freq ^= random(meeeleeepee/5);
  for(int i = 0; i < merlorpo * 30 ; i++){
     delayMicroseconds(freq/(redic^merlorpo));
     analogWrite(A14,i^merlorpo);
     redic += random(meeeleeepee);
     if(redic > 3){
       delayMicroseconds(freq*redic%merlorpo);}
     if(skunkmusket < 2){
       delayMicroseconds(freq%redic^merlorpo);}
     
     //analogWrite(A14,meeeleeepee^512);
   }}}}}}
