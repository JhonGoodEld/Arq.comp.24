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
  if((analogRead(A0)>0)&& (analogRead(A0<200))){
    digitalWrite(2,HIGH);
    delay(3000);
  }
  if((analogRead(A0)>200)&& (analogRead(A0<400))){
    digitalWrite(3,HIGH);
    delay(3000);
  }
  if((analogRead(A0)>400)&& (analogRead(A0<600))){
    digitalWrite(4,HIGH);
    delay(3000);
  }
  if((analogRead(A0)>600)&& (analogRead(A0<800))){
    digitalWrite(5,HIGH);
    delay(3000);
  }

}

