void setup() {
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  if(digitalRead(2)^digitalRead(3)){
    digitalWrite(13,HIGH);
  }else{
    digitalWrite(13,LOW);
  }
  if(digitalRead(2)&digitalRead(3)){
    digitalWrite(12,HIGH);
  }else{
    digitalWrite(12,LOW);
  }
}
