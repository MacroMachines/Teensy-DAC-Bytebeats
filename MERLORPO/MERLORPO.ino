

void setup(){
}

void loop(){
  for(int merlorpo = 0; merlorpo < 50; merlorpo++){
   for(int redic = 0; redic < 20; redic++){
    for(int freq = 0; freq < 20; freq++){
      for(int i = 0; i < merlorpo * 90; i++){
        delayMicroseconds(freq/(redic^merlorpo));
        analogWrite(A14,i);}}}}}
