void setup() {
  pinMode(5,INPUT);
  pinMode(4,INPUT);
  pinMode(2,INPUT);
  pinMode(3,INPUT);

  pinMode(13,OUTPUT);//a
  pinMode(12,OUTPUT);//b
  pinMode(11,OUTPUT);//c
  pinMode(10,OUTPUT);//d
  pinMode(9,OUTPUT);//e
  pinMode(8,OUTPUT);//f
  pinMode(7,OUTPUT);//g
  pinMode(6,OUTPUT);//.
}

void loop() {
  //se supone que esto es 0 
  if(!digitalRead(4)&&!digitalRead(5)&&!digitalRead(2)&&!digitalRead(3)){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,HIGH);//d
    digitalWrite(9,HIGH);//e
    digitalWrite(8,HIGH);//f
    digitalWrite(7,LOW); //g
  }
  //se supone que esto es 1 
  if(!digitalRead(4)&&!digitalRead(5)&&!digitalRead(2)&&digitalRead(3)){
    digitalWrite(13,LOW);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,LOW);//d
    digitalWrite(9,LOW);//e
    digitalWrite(8,LOW);//f
    digitalWrite(7,LOW); //g
  }
    //se supone que esto es 2
  if(!digitalRead(4)&&!digitalRead(5)&&digitalRead(2)&&!digitalRead(3)){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,LOW);//c
    digitalWrite(10,HIGH);//d
    digitalWrite(9,HIGH);//e
    digitalWrite(8,LOW);//f
    digitalWrite(7,HIGH); //g
  }
    //se supone que esto es 3 
  if(!digitalRead(4)&&!digitalRead(5)&&digitalRead(2)&&digitalRead(3)){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,HIGH);//d
    digitalWrite(9,LOW);//e
    digitalWrite(8,LOW);//f
    digitalWrite(7,HIGH); //g
  }
    //se supone que esto es 4
  if(!digitalRead(4)&&digitalRead(5)&&!digitalRead(2)&&!digitalRead(3)){
    digitalWrite(13,LOW);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,LOW);//d
    digitalWrite(9,LOW);//e
    digitalWrite(8,HIGH);//f
    digitalWrite(7,HIGH); //g
  }
    //se supone que esto es 5 
  if(!digitalRead(4)&&digitalRead(5)&&!digitalRead(2)&&digitalRead(3)){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,LOW);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,HIGH);//d
    digitalWrite(9,LOW);//e
    digitalWrite(8,HIGH);//f
    digitalWrite(7,HIGH); //g
  }
    //se supone que esto es 6 
  if(!digitalRead(4)&&digitalRead(5)&&digitalRead(2)&&!digitalRead(3)){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,LOW);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,HIGH);//d
    digitalWrite(9,HIGH);//e
    digitalWrite(8,HIGH);//f
    digitalWrite(7,HIGH); //g
  }
    //se supone que esto es 7
  if(!digitalRead(4)&&digitalRead(5)&&digitalRead(2)&&digitalRead(3)){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,LOW);//d
    digitalWrite(9,LOW);//e
    digitalWrite(8,LOW);//f
    digitalWrite(7,LOW); //g
  }
    //se supone que esto es 8
  if(digitalRead(4)&&!digitalRead(5)&&!digitalRead(2)&&!digitalRead(3)){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,HIGH);//d
    digitalWrite(9,HIGH);//e
    digitalWrite(8,HIGH);//f
    digitalWrite(7,HIGH); //g
  }
    //se supone que esto es 9
  if(digitalRead(4)&&!digitalRead(5)&&!digitalRead(2)&&digitalRead(3)){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,LOW);//d
    digitalWrite(9,LOW);//e
    digitalWrite(8,HIGH);//f
    digitalWrite(7,HIGH); //g
  }
    //se supone que esto es A
  if(digitalRead(4)&&!digitalRead(5)&&digitalRead(2)&&!digitalRead(3)){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,LOW);//d
    digitalWrite(9,HIGH);//e
    digitalWrite(8,HIGH);//f
    digitalWrite(7,HIGH); //g
  }
      //se supone que esto es B
  if(digitalRead(4)&&!digitalRead(5)&&digitalRead(2)&&digitalRead(3)){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,HIGH);//d
    digitalWrite(9,HIGH);//e
    digitalWrite(8,HIGH);//f
    digitalWrite(7,HIGH); //g
    digitalWrite(6,HIGH);//.EL PUNTO INDICA LA " b "
  }
      //se supone que esto es C
  if(digitalRead(4)&&digitalRead(5)&&!digitalRead(2)&&!digitalRead(3)){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,LOW);//b
    digitalWrite(11,LOW);//c
    digitalWrite(10,HIGH);//d
    digitalWrite(9,HIGH);//e
    digitalWrite(8,HIGH);//f
    digitalWrite(7,LOW); //g
  }
      //se supone que esto es D
  if(digitalRead(4)&&digitalRead(5)&&!digitalRead(2)&&digitalRead(3)){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,HIGH);//d
    digitalWrite(9,HIGH);//e
    digitalWrite(8,HIGH);//f
    digitalWrite(7,LOW); //g
    digitalWrite(6,HIGH);// el . señala la D
  }
      //se supone que esto es E
  if(digitalRead(4)&&digitalRead(5)&&digitalRead(2)&&!digitalRead(3)){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,HIGH);//d
    digitalWrite(9,LOW);//e
    digitalWrite(8,LOW);//f
    digitalWrite(7,HIGH); //g
  }
      //se supone que esto es F
  if(digitalRead(4)&&digitalRead(5)&&digitalRead(2)&&digitalRead(3)){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,LOW);//b
    digitalWrite(11,LOW);//c
    digitalWrite(10,LOW);//d
    digitalWrite(9,HIGH);//e
    digitalWrite(8,HIGH);//f
    digitalWrite(7,HIGH); //g
  }
  // Y ASI UN SISTEMA SEXAGESIMAL 
}