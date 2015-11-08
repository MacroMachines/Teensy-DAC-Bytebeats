

void setup(){
}

void loop(){
  for(int meeeleeepee = 0; meeeleeepee < 8; meeeleeepee++){
  for(int merlorpo = 0; merlorpo < meeeleeepee; merlorpo++){
  for(int redic = 0; redic < 5; redic++){
  for(int freq = 0; freq < 12; freq++){
  for(int i = 0; i < merlorpo * 90; i++){
     delayMicroseconds(freq/(redic^merlorpo));
     analogWrite(A14,i^merlorpo);
     //analogWrite(A14,meeeleeepee^512);
   }}}}}}
