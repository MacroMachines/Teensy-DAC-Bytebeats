void setup(){}


void loop(){
  for(int mod = 0; mod < 10; mod++){
  for(int freq = 0; freq < 100; freq++){
  for(float i = 0; i < 360; i++){
    analogWrite(A14,(tan(i))*4095);
    delayMicroseconds(freq/mod);}}}
}
