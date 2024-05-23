void setup() {
pinMode (A0,INPUT);

pinMode (2,OUTPUT);
pinMode (3,OUTPUT);
pinMode (4,OUTPUT);
pinMode (5,OUTPUT);
Serial.begin(9600);

}

void loop() {
    
  Serial.println(analogRead(A0));
  if((analogRead(A0)>0)&& (analogRead(A0<350))){
    digitalWrite(2,HIGH);
    delay(300);
  }else{
    digitalWrite(2,LOW);
    delay(300);
  }
  if((analogRead(A0)>350)&& (analogRead(A0<650))){
    digitalWrite(3,HIGH);
    delay(300);
  }else{
    digitalWrite(3,LOW);
    delay(300);
  }
  if((analogRead(A0)>650)&& (analogRead(A0<950))){
    digitalWrite(4,HIGH);
    delay(300);
  }else{
    digitalWrite(4,LOW);
    delay(300);
  }
  if((analogRead(A0)>950)&& (analogRead(A0<1250))){
    digitalWrite(5,HIGH);
    delay(300);
  }else{
    digitalWrite(5,LOW);
    delay(300);
  }

}

