

void setup(){
}

void loop(){
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
     
    
     redic += random(meeeleeepee);
     
     //analogWrite(A14,meeeleeepee^512);
   }}}}}}
