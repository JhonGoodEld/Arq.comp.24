  String ms1 = "Introduzaca el operando de sus digitos ";
  int opA[4];
  int tok=0;
  String op;
  int presta=0;

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);//a
  pinMode(12,OUTPUT);//b
  pinMode(11,OUTPUT);//c
  pinMode(10,OUTPUT);//d
  pinMode(9,OUTPUT);//e
  pinMode(8,OUTPUT);//f
  pinMode(7,OUTPUT);//g
//op A
  pinMode(5,INPUT);//dec
  pinMode(4,INPUT);//unidad
//op B 
  pinMode(3,INPUT);//dec
  pinMode(2,INPUT);//unid
  Serial.println(ms1);
}

void loop()
{  
      while (Serial.available()==0){delay(10);}
      op= Serial.readStringUntil('\n');
      op.trim();
      if(op.equalsIgnoreCase("suma")){
        //suma de unidades
        if(digitalRead(4)&&digitalRead(2)){
          opA[1]=1;
          opA[0]=0;
        } else{
          opA[0]=digitalRead(4)^digitalRead(2);
        }
          tok=opA[1];
        //suma decenas 
        if(digitalRead(3)&&digitalRead(5)){
          opA[2]=1;
          opA[1]=(digitalRead(3)&&digitalRead(5))&&(tok);
        }else{
          opA[1]=(digitalRead(3)^digitalRead(5)||tok);
        }
          Serial.println("El valor binario resultante de la "+ op +" es : ");
          Serial.print(opA[3]);
          Serial.print(opA[2]);
          Serial.print(opA[1]);
          Serial.println(opA[0]);
          Serial.println("Revise en el display la traduccion decimal de su valor ");
          trad();          


      } else{ 
        if(op.equalsIgnoreCase("resta")){
        //resta unidades
        if(digitalRead(4)^digitalRead(2)){
           opA[0]=1;
           if((digitalRead(4)==0)&&(digitalRead(5)==0)){
            tok=1;
           }else{
            presta=1;
           }
        } else{
            opA[0]=0;
            }
        //resta decenas
        if(digitalRead(5)^digitalRead(3)){
          opA[1]=1;
          if(presta==1){
            tok=1;
            opA[1]=0;
          }else{
            opA[1]=1;
          }
        }else{
          opA[1]=0;
        }
          if(tok==1){

          Serial.println("El valor binario resultante de la "+ op +" es : ");
          Serial.print(opA[3]);
          Serial.print(opA[2]);
          Serial.print(opA[1]);
          Serial.println(opA[0]);
          Serial.println("Revise en el display la traduccion decimal de su valor ");
          Serial.println("NEGATIVO");
          trad();
          }else{
            
          Serial.println("El valor binario resultante de la "+ op +" es : ");
          Serial.print(opA[3]);
          Serial.print(opA[2]);
          Serial.print(opA[1]);
          Serial.println(opA[0]);
          Serial.println("Revise en el display la traduccion decimal de su valor ");
          trad();
          }

      }else{
        if(op.equalsIgnoreCase("multiplicacion")){
        //
        if(digitalRead(4)&&digitalRead(2)){
          opA[0]=1;
        } else{
          opA[0]=0;
        }
        if(digitalRead(2)&&digitalRead(5)){
          tok=1;
        }else{
          tok=0;
        }
        if(digitalRead(3)&&digitalRead(4)){
          opA[1]=1;
        }else{
          opA[1]=0;
        }
        if(digitalRead(3)&&digitalRead(5)){
          opA[2]=1;
        }else{
          opA[2]=0;
        }
        if((opA[1]==1)&&(tok==1)&&(opA[2]==1)){
          opA[3]=1;
          opA[2]=0;
          opA[1]=0;
        }else{
          opA[3]=0;
        }

          Serial.println("El valor binario resultante de la "+ op +" es : ");
          Serial.print(opA[3]);
          Serial.print(opA[2]);
          Serial.print(opA[1]);
          Serial.println(opA[0]);
          Serial.println("Revise en el display la traduccion decimal de su valor ");
          trad();

      
      }else{
        if(op.equalsIgnoreCase("division")){
        //
        int dividend = (digitalRead(5) << 1) | digitalRead(4);
        int divisor = (digitalRead(3) << 1) | digitalRead(2);
    
    if (divisor == 0) {
      Serial.println("Error: Division por cero");
    } else {
      int quotient = 0;
      int remainder = dividend;

      for (int i = 1; i >= 0; --i) {
        if ((remainder >> i) >= divisor) {
          remainder -= (divisor << i);
          quotient |= (1 << i);
        }
      }

      opA[3] = 0;
      opA[2] = 0;
      opA[1] = (quotient >> 1) & 1;
      opA[0] = quotient & 1;

      Serial.println("El valor binario resultante de la " + op + " es : ");
      Serial.print(opA[3]);
      Serial.print(opA[2]);
      Serial.print(opA[1]);
      Serial.println(opA[0]);
      Serial.println("Revise en el display la traduccion decimal de su valor ");
      trad();
    }

      }else{
        Serial.println("Introduzca un operando valido (suma, resta, multiplicacion, division) ");
        }
      }
      }
      }
}
    void zero(){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,HIGH);//d
    digitalWrite(9,HIGH);//e
    digitalWrite(8,HIGH);//f
    digitalWrite(7,LOW); //g}  
    }
    void un(){
    digitalWrite(13,LOW);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,LOW);//d
    digitalWrite(9,LOW);//e
    digitalWrite(8,LOW);//f
    digitalWrite(7,LOW); //g
    }
    void deux(){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,LOW);//c
    digitalWrite(10,HIGH);//d
    digitalWrite(9,HIGH);//e
    digitalWrite(8,LOW);//f
    digitalWrite(7,HIGH); //g
    }
    void trois(){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,HIGH);//d
    digitalWrite(9,LOW);//e
    digitalWrite(8,LOW);//f
    digitalWrite(7,HIGH); //g
    }
    void quatre(){
      digitalWrite(13,LOW);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,LOW);//d
    digitalWrite(9,LOW);//e
    digitalWrite(8,HIGH);//f
    digitalWrite(7,HIGH); //g
    }
    void cinq(){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,LOW);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,HIGH);//d
    digitalWrite(9,LOW);//e
    digitalWrite(8,HIGH);//f
    digitalWrite(7,HIGH); //g
    }
    void six(){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,LOW);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,HIGH);//d
    digitalWrite(9,HIGH);//e
    digitalWrite(8,HIGH);//f
    digitalWrite(7,HIGH); //g
    }
    void sept(){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,LOW);//d
    digitalWrite(9,LOW);//e
    digitalWrite(8,LOW);//f
    digitalWrite(7,LOW); //g
    }
    void huit(){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,HIGH);//d
    digitalWrite(9,HIGH);//e
    digitalWrite(8,HIGH);//f
    digitalWrite(7,HIGH); //g
    }
    void neuf(){
    digitalWrite(13,HIGH);//a
    digitalWrite(12,HIGH);//b
    digitalWrite(11,HIGH);//c
    digitalWrite(10,LOW);//d
    digitalWrite(9,LOW);//e
    digitalWrite(8,HIGH);//f
    digitalWrite(7,HIGH); //g
    }
    void trad(){
      if(opA[0]==0 && opA[1]==0 && opA[2]==0 && opA[3]==0){
        zero();
      }else{
        if(opA[0]==1 && opA[1]==0 && opA[2]==0 && opA[3]==0){
          un();
        }else{
          if(opA[0]==0 && opA[1]==1 && opA[2]==0 && opA[3]==0){
            deux();
          }else{
            if(opA[0]==1 && opA[1]==1 && opA[2]==0 && opA[3]==0){
              trois();
            }else{
              if(opA[0]==0 && opA[1]==0 && opA[2]==1 && opA[3]==0){
                quatre();
              }else{
                if(opA[0]==1 && opA[1]==0 && opA[2]==1 && opA[3]==0){
                  cinq();
                }else{
                  if(opA[0]==0 && opA[1]==1 && opA[2]==1 && opA[3]==0){
                    six();
                  }else{
                    if(opA[0]==1 && opA[1]==1 && opA[2]==1 && opA[3]==0){
                      sept();
                    }else{
                      if(opA[0]==0 && opA[1]==0 && opA[2]==0 && opA[3]==1){
                        huit();
                      }else{
                        if(opA[0]==1 && opA[1]==0 && opA[2]==0 && opA[3]==1){
                          neuf();
                        }else{}
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }

    }
