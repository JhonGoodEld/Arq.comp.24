void setup() {
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
//INPUTS de los bus de control 
  pinMode(5,INPUT);
  pinMode(6,INPUT);

  pinMode(13,OUTPUT);
  //salida de las operaciones 
  pinMode(7,OUTPUT);
  //acarreos 
  pinMode(8,OUTPUT);
  //ERROR
  pinMode(9,OUTPUT);
  //NEGATIVO
}
void loop() { 
//SUMA 
//              0                0               1                (0/1)+           (0/1)
if((!digitalRead(2)&&!digitalRead(3)&&digitalRead(4))&&(digitalRead(5)^digitalRead(6))){
  digitalWrite(13,HIGH);
}else{
  digitalWrite(13,LOW);
  if(digitalRead(5)&&digitalRead(6)){
    digitalWrite(12,HIGH);
  }else {
    digitalWrite(12,LOW);
  }
}
//SUMA ACARREO
//              0                0               1                (0/1)+           (0/1)
if((!digitalRead(2)&&!digitalRead(3)&&digitalRead(4))&&(digitalRead(5)&&digitalRead(6))){
  digitalWrite(7,HIGH);
}else{
  digitalWrite(7,LOW);
}

//RESTA  
//              0                1               0                (0/1)-           (0/1)
if((!digitalRead(2)&&digitalRead(3)&&!digitalRead(4))&&(digitalRead(5)^digitalRead(6))){
  digitalWrite(13,HIGH);
}else{
  digitalWrite(13,LOW);
}

//RESTA  NEGATIVO
//              0                1               0                (0/1)-           (0/1)
if((!digitalRead(2)&&digitalRead(3)&&!digitalRead(4))&&(digitalRead(5)&&!digitalRead(6))){
  digitalWrite(9,HIGH);
}else{
  digitalWrite(9,LOW);
}
//MULTIPLICACION  
//              0                1               1                (0/1)*           (0/1)
if((!digitalRead(2)&&digitalRead(3)&&digitalRead(4))&&(digitalRead(5)&&digitalRead(6))){
  digitalWrite(13,HIGH);
}else{
  digitalWrite(13,LOW);
}
//DIVISION   
//              1                0               0                (0/1)   /        (0/1)
if((digitalRead(2)&&!digitalRead(3)&&!digitalRead(4))&&(!digitalRead(5)^digitalRead(6))){
  digitalWrite(13,HIGH);
}else{
  digitalWrite(13,LOW);
}
//DIVISION ERROR
//              1                0               0                (0/1)   /        (0/1)
if((digitalRead(2)&&!digitalRead(3)&&!digitalRead(4))&&(!digitalRead(5)&&digitalRead(6))){
  digitalWrite(8,HIGH);
}else{
  digitalWrite(8,LOW);
}
//AND
//              1                0               1                (0/1)&           (0/1)
if((digitalRead(2)&&!digitalRead(3)&&digitalRead(4))&&(digitalRead(5)&&digitalRead(6))){
  digitalWrite(13,HIGH);
}else{
  digitalWrite(13,LOW);
}
//OR 
//              1               1               0                (0/1)||           (0/1)
if((digitalRead(2)&&digitalRead(3)&&!digitalRead(4))&&(digitalRead(5)||digitalRead(6))){
  digitalWrite(13,HIGH);
}else{
  digitalWrite(13,LOW);
}
//xOR    
//              1               1               1                (0/1)   ^        (0/1)
if((digitalRead(2)&&digitalRead(3)&&digitalRead(4))&&(digitalRead(5)^digitalRead(6))){
  digitalWrite(13,HIGH);
}else{
  digitalWrite(13,LOW);
}

}
