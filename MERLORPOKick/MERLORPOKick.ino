

void setup(){
}

void loop(){

   for(int redic = 0; redic < 20; redic++){
    for(int freq = 0; freq < 20; freq++){
      for(int i = 0; i < redic * 90; i++){
        delayMicroseconds(freq/(redic^4));
        analogWrite(A14,i);}}}}
