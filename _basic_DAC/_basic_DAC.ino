void setup(){}

void loop(){
  
  for(int i = 0; i < 4096; i++){
    analogWrite(A14,i);
  }
}
