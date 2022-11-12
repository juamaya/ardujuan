int Columnas[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, A4,A5};   
int Filas[] = {A0,A1,A2,A3};
int contador;
int time=20;
int veces=3;
int tiempo=500;
int tiempo1=150;
int EXT[] = {0, 1, 2, 3, 7,11,A5, A4,13,12,8, 4,5,6,10,9};  
int Columnas_delante[] = { 3,7,11, A5};
int time1=50;
int serpi[] = {0, 1, 2, 3, 7,11,A5, A4,13,12,8, 4,5,6,10,9};  

int Columnas1[] = {0, 1, 2, 3 }; 
int Columnas2[] = {  4, 5, 6, 7 }; 
int Columnas3[] = {  8, 9, 10, 11 }; 
int Columnas4[] = {  12, 13, A4,A5}; 


int Columnas11[] = {  3,  7,  11, A5};
int Columnas12[] = {  2,   6,   10,   A4, };
int Columnas13[] = {  1,  5,  9,   13 };
int Columnas14[] = {0,  4,   8,  12,  };




void setup(){

   
for (int contador = 0; contador < 16; contador++){
  pinMode(Columnas[contador], OUTPUT); }
   
for (int contador = 0; contador < 4; contador++){
  pinMode(Filas[contador], OUTPUT); }
}

void loop(){
  
  for (int i= 0; i< 1000; i++){
    RandLed();
    }
    
    
    HOLAJUAN();
    
    
     SECUENCIA_SERPIENTE_B();
     GIRO();
      for (int i= 0; i < 50 ;i++){
   RandLed_LENTO();
    }
  
     
      GIRO_A();
    
    SECUENCIA_SERPIENTE_A();   
  for (int i= 0; i< 5; i++){
    EQUIS();
    }
    for (int i= 0; i< 2; i++){   
     delante_V2();
    } 
    
    
  for (int i= 0; i< 500; i++){
    RandLed();
    }

   
     delante_H();
    
    
     delante_V();
        delante_H1();
        
      for (int i= 0; i< 10 ; i++){    
      delante_V1(); 
}
   
   for (int i= 0; i< 10; i++){
 CUBO_B();}
 
     
  
  
  
   for (int i= 0; i< 2; i++){
  
  SECUENCIA_SERPIENTE();
 
  
   secuencia_A();
   SECUENCIA_SERPIENTE_ROJA();
  
   }
  
 
  
 
   
     
   for (int i= 0; i< 5; i++){
 CUBO();}
 
 
   for (int i= 0; i < 50 ;i++){
   RandLed_LENTO();
    }
  
  for (int i= 0; i< 10; i++){
 CUBO_A();
   }  
    
  
 
  
  for (int i= 0; i< 2; i++){
secuencia_A();
 
secuencia_B();
secuencia_C();

  }


  for (int i= 0; i< 1000; i++){
    RandLed();
    }
  
 
  
  
  
  
  for (int i = 0; i < 1000; i++){
    RandLed();
    }
   
     for (int i= 0;i < veces; i++){ 
      
      
   H();
    }
    
   for (int i = 0; i<veces;i++){  
   O();
    }  
    
      for (int i= 0; i<veces; i++){  
   L();
    }  
    
      for (int i= 0; i < veces; i++){  
   A();
    }
    
     for (int i= 0; i < 1000;i++){
    RandLed();
    }
    
   
      for (int i = 0; i< veces; i++){  
   J();
    }
    
      for (int i = 0; i < veces;i++){  
  U();
    }
     
     for (int i = 0; i <veces;i++){  
   A();
    }  
    
      
     for (int i = 0;i < veces; i++){  
  N();
    } 
  
    
     for (int i= 0; i < 1000;i++){
    RandLed();
    }  
   for (int i= 0; i< 3;i++){  
    secuencia_CUADRADO() ;
    
   }
    
   


    
}


 
   void SECUENCIA_SERPIENTE(){
  
patron_Filas(1,0,0,0);
  
  int time=50;
     
for (int contador = 0; contador < 16; contador++){
 digitalWrite(EXT[contador] , 1);
   delay(time );
    digitalWrite(EXT[contador] , 0);
   delay(time ); 
 }
 for (int contador = 0; contador < 16; contador++){
 digitalWrite(EXT[contador] , 1);
   delay(time );
    
 }
 
  for (int contador = 0; contador < 16; contador++){
 digitalWrite(EXT[contador] ,0);
   delay(time );
     
 }
 
  for (int contador = 0; contador < 16; contador++){
 digitalWrite(EXT[contador] , 1);
   delay(time );
    
 }
  }
  
  
   void SECUENCIA_SERPIENTE_A(){
  
     
 
    for (int i= 0; i<4 ; i++){
       digitalWrite(Filas[i], HIGH);
       delay(time);
 
     
for (int contador = 0; contador < 16; contador++){
 digitalWrite(serpi[contador] , 1);
   delay(time );
    digitalWrite(serpi[contador] , 0);
   delay(time );
   
   
   
   
 }
 
      
for (int contador = 15; contador >=0  ; contador--){
 digitalWrite(serpi[contador] , 1);
   delay(time );
    digitalWrite(serpi[contador] , 0);
   delay(time ); 
 }
 
   delay(time ); 
 
  
     digitalWrite(Filas[i], LOW);  
 
 
  }
  
   }
 
 
   void SECUENCIA_SERPIENTE_B(){
  
     
 
    for (int i= 0; i<4 ; i++){
       digitalWrite(Filas[i], HIGH);
       delay(time);
 
     
for (int contador = 0; contador < 16; contador++){
 digitalWrite(serpi[contador] , 1);
   delay(time );
  
   
   
 }
 
    for (int contador = 15; contador >=0  ; contador--){
 digitalWrite(serpi[contador] , 1);
   delay(time );
    digitalWrite(serpi[contador] , 0);
   delay(time ); 
 }   

  
     digitalWrite(Filas[i], LOW);  
 
 
  }
  
   }
 
 
 
  void SECUENCIA_SERPIENTE_ROJA(){
  
patron_Filas(0,0,1,0);
  
  int time=50;
     
for (int contador = 0; contador < 16; contador++){
 digitalWrite(EXT[contador] , 1);
   delay(time );
    digitalWrite(EXT[contador] , 0);
   delay(time ); 
 }
 for (int contador = 0; contador < 16; contador++){
 digitalWrite(EXT[contador] , 1);
   delay(time );
    
 }
 
  for (int contador = 0; contador < 16; contador++){
 digitalWrite(EXT[contador] ,0);
   delay(time );
  }
   for (int contador = 0; contador < 16; contador++){
 digitalWrite(EXT[contador] , 1);
   delay(time );
    
 } 
   
   
    
 }
 


 void delante_H(){
 
   
  for (int i= 0; i<4; i++){
  digitalWrite(Filas[i], HIGH);
  for (int i= 0; i<4 ; i++){
    digitalWrite( Columnas_delante[i], HIGH);
  delay(time1 );
   digitalWrite( Columnas_delante[i], LOW);
  delay(time1);
  
    }
  digitalWrite( Filas[i], LOW);
 
 
 }
 }
 
 
  void delante_H1(){
 
   
  for (int i= 0; i<4; i++){
  digitalWrite(Filas[i], HIGH);
  for (int i= 0; i<4 ; i++){
    
    
    digitalWrite( Columnas_delante[i], HIGH);
  delay(time1 );
  
    }
    digitalWrite( Filas[i], LOW);
   delay(time1 );
 }
 }
 
  void delante_V(){
 
   
  for (int i= 0; i<4; i++){
     digitalWrite( Columnas_delante[i], HIGH); 
    for (int i= 0; i<4 ; i++){
       digitalWrite(Filas[i], HIGH);
       delay(time1);
       digitalWrite( Filas[i], LOW);
       delay(time1);
  
    }
 
  digitalWrite( Columnas_delante[i], LOW);
 
 }
 
  }
  void delante_V1(){
 
   
 
     digitalWrite( Columnas_delante[0], HIGH); 
    for (int i= 0; i<4 ; i++){
       digitalWrite(Filas[i], HIGH);
       delay(time1);
        
    }
   
  for (int i= 3; i>=0; i--){
        
        digitalWrite( Filas[i], LOW);
    
       delay(time1);
  
    }
 
  
 
   delay(time1);
 
 
 
 
 }


 void delante_V2(){
 
   
  for (int i= 0; i<4 ; i++){
     digitalWrite( Columnas_delante[i], HIGH); 
    for (int i= 0; i<4 ; i++){
       digitalWrite(Filas[i], HIGH);
       delay(time1);
        digitalWrite( Filas[i], LOW);
    
       delay(time1);  
    }
   
  for (int i= 3; i>=0; i--){
         digitalWrite(Filas[i], HIGH);
       delay(time1);
        digitalWrite( Filas[i], LOW);
    
       delay(time1);
  
    }
 
  
 
   delay(time1);
 
 
  }
 
 }


void secuencia_A(){

 

   patron_Filas(1,0,0,0);

for (int j = 0; j < 16; j++){
  
    digitalWrite(Columnas[j], HIGH);
  delay(30 );

}
 
for (int j = 0; j < 16; j++){
  
    digitalWrite(Columnas[j], LOW);
  delay(30 );

}
  
 
 patron_Filas(0,0,0,0);


}

void secuencia_B(){

 

   patron_Filas(0,0,1,0);

for (int j = 0; j < 16; j++){
  
    digitalWrite(Columnas[j], HIGH);
  delay(30 );

}
 
for (int j = 0; j < 16; j++){
  
    digitalWrite(Columnas[j], LOW);
  delay(30 );

}
  
 
 patron_Filas(0,0,0,0);


}
 

void secuencia_C(){

 

   patron_Filas(0,0,0,1);

for (int j = 0; j < 16; j++){
  
    digitalWrite(Columnas[j], HIGH);
  delay(30 );

}
 
for (int j = 0; j < 16; j++){
  
    digitalWrite(Columnas[j], LOW);
  delay(30 );

}
  
 
 patron_Filas(0,0,0,0);


}


 
void HOLAJUAN() {

 H();
 delay(tiempo);
 O();
  delay(tiempo);
 L();
  delay(tiempo);
 A();
  delay(tiempo);
J();
 delay(tiempo);
 U();
  delay(tiempo);
A();
 delay(tiempo);
N();
 delay(tiempo);
}

   void RandLed()
{
int RandFila = random(0,4);
int RandColumna = random(0,16);
   
digitalWrite(Filas[RandFila], HIGH);
digitalWrite(Columnas[RandColumna], HIGH);
   
delay(1);
   
digitalWrite(Filas[RandFila], LOW);
digitalWrite(Columnas[RandColumna], LOW);
   
delay(1);
}

 
    void RandLed_LENTO()
{
int RandFila = random(0,4);
int RandColumna = random(0,16);
   
digitalWrite(Filas[RandFila], HIGH);
digitalWrite(Columnas[RandColumna], HIGH);
   
delay(50);
   
digitalWrite(Filas[RandFila], LOW);
digitalWrite(Columnas[RandColumna], LOW);
   
delay(50);
}

 
  
 

void secuencia_CUADRADO() {
  
  patron_Filas( 1,0,0,0); 
 Columnas_EXTERIOR(1,1,1,1,1,1,1,1,1,1,1,1 );
   delay(tiempo1);
 Columnas_EXTERIOR( 0,0,0,0, 0,0,0,0, 0,0,0,0 );
   delay(tiempo1 );
 
  
  
  patron_Filas( 0,0,0,1);
  
  
     Columnas_INTERIOR(  1,1,1,1);
    delay(tiempo1);  
   
  Columnas_INTERIOR(  0,0,0,0);
    delay(tiempo1);
    
   patron_Filas( 0,0,1,0); 
 Columnas_EXTERIOR(1,1,1,1,1,1,1,1,1,1,1,1 );
   delay(tiempo1);
 Columnas_EXTERIOR( 0,0,0,0, 0,0,0,0, 0,0,0,0 );
   delay(tiempo1 );
 
  
  patron_Filas( 1,0,0,0);
  
  
     Columnas_INTERIOR(  1,1,1,1);
    delay(tiempo1);  
   
  Columnas_INTERIOR(  0,0,0,0);
    delay(tiempo1);
 
 
   patron_Filas( 0,0,1,0);
  

    
 Columnas_EXTERIOR(1,1,1,1,1,1,1,1,1,1,1,1 );
   delay(tiempo1);
 Columnas_EXTERIOR( 0,0,0,0, 0,0,0,0, 0,0,0,0 );
   delay(tiempo1 );
 
   
   patron_Filas( 0,0,0,1);
  
  
     Columnas_INTERIOR(  1,1,1,1);
    delay(tiempo1);  
   
  Columnas_INTERIOR(  0,0,0,0);
    delay(tiempo1);
    
  patron_Filas( 1,0, 0,0);
  

    
 Columnas_EXTERIOR(1,1,1,1,1,1,1,1,1,1,1,1 );
   delay(tiempo1);
 Columnas_EXTERIOR( 0,0,0,0, 0,0,0,0, 0,0,0,0 );
   delay(tiempo1 );
 
     
   patron_Filas( 0,0,1,0);
  
  
     Columnas_INTERIOR(  1,1,1,1);
    delay(tiempo1);  
   
  Columnas_INTERIOR(  0,0,0,0);
    delay(tiempo1);   
}

void H() {
 
   patron_Filas(1,0,0,0);
   H(1,1,1,1,1,1,1,1,1,1 );
    delay(tiempo);
   
   H(0,0,0,0,0,0,0,0,0,0 );   
}


void O() {
 
 patron_Filas(1,0,0,0);
   O(1,1,1,1,1,1,1,1,1,1,1,1 );
    delay(tiempo);
   
   O(0,0,0,0,0,0,0,0,0,0,0,0 );    
}



void L() {
 
 patron_Filas(1,0,0,0);
  L(1,1,1,1,1,1,1);
  
   delay(tiempo);
   L(0,0,0,0,0,0,0);    
}

void A() {
 
   patron_Filas(1,0,0,0);
   A(1,1,1,1,1,1,1,1,1,1,1,1 );
    delay(tiempo);
   
   A(0,0,0,0,0,0,0,0,0,0,0,0 );    
}

void J() {
 
  patron_Filas(1,0,0,0);
   J(1,1,1,1,1,1,1,1  );
   
    delay(tiempo);
   J(0,0,0,0,0,0,0,0  );    
}


void U() {
 
 patron_Filas(1,0,0,0);
  U(1,1,1,1,1,1,1,1,1,1  );
  
   delay(tiempo);
   U(0,0,0,0,0,0,0,0,0,0  );    
}


void N() {
 
   patron_Filas(1,0,0,0);
   N(1,1,1,1,1,1,1,1,1,1 );
   
   delay(tiempo); 
   N(0,0,0,0,0,0,0,0,0,0 );   
}



void EQUIS() {
 
  patron_Filas(1,0,0,0);
  EQUIS(1,1,1,1,1,1,1,1  );
    delay(100);
   
  EQUIS(0,0,0,0,0,0,0,0  );  
 delay(100);

}

  void CUBO(){
patron_Filas(1,0,1,0);
patron_Columnas(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1);
delay(100);
patron_Columnas(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
delay(100);
} 
   
 void CUBO_A(){
    int frecuencia=50;
patron_Filas(1,0,0,0);
patron_Columnas(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1);
delay(frecuencia);
patron_Columnas(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
delay(frecuencia);
patron_Filas(0,1,0,0);
patron_Columnas(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1);
delay(frecuencia);
patron_Columnas(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
delay(frecuencia);
patron_Filas(0,0,1,0);
patron_Columnas(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1);
delay(frecuencia);
patron_Columnas(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
delay(frecuencia);
patron_Filas(0,0,0,1);
patron_Columnas(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1);
delay(frecuencia);
patron_Columnas(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
delay(frecuencia);
patron_Filas(0,0,1,0);
patron_Columnas(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1);
delay(frecuencia);
patron_Columnas(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
delay(frecuencia);
patron_Filas(0,1,0,0);
patron_Columnas(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1);
delay(frecuencia);
patron_Columnas(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
delay(frecuencia);
}   


void CUBO_B(){
   
 int frecuencia_1=30;
  
 digitalWrite( Filas[3] ,0);
 digitalWrite( Filas[0] ,1);
 
   digitalWrite( Columnas[3] , 1);
    digitalWrite( Columnas[15] , 1);
 delay(frecuencia_1);
  digitalWrite( Columnas[3] , 0);
    digitalWrite( Columnas[15] , 0);
  
 delay(frecuencia_1);
 
  
 digitalWrite( Filas[0] ,0); 
 digitalWrite( Filas[1] ,1);
 
  digitalWrite( Columnas[3] , 1);
   digitalWrite( Columnas[15] , 1);
 delay(frecuencia_1);
  digitalWrite( Columnas[3] , 0);
    digitalWrite( Columnas[15] , 0);
 delay(frecuencia_1);
 
 
 digitalWrite( Filas[1] ,0); 
 digitalWrite( Filas[2] ,1);
 
  digitalWrite( Columnas[3] , 1);
     digitalWrite( Columnas[15] , 1);
 delay(frecuencia_1);
  digitalWrite( Columnas[3] , 0);
    digitalWrite( Columnas[15] , 0);
 delay(frecuencia_1);
 
 digitalWrite( Filas[2] ,0); 
 digitalWrite( Filas[3] ,1);
 
  digitalWrite( Columnas[3] , 1);
     digitalWrite( Columnas[15] , 1);
 delay(frecuencia_1);
  digitalWrite( Columnas[3] , 0);
   digitalWrite( Columnas[15] , 0);
 delay(frecuencia_1);
  
 
 }




   
    void patron_Filas(int n0,int n1,int n2,int n3 ){
    digitalWrite( Filas[0] , n0);
    digitalWrite( Filas[1] , n1);
    digitalWrite( Filas[2] , n2);
    digitalWrite( Filas[3] , n3);
  }
  
  
  void patron_Columnas(int a0,int a1,int a2,int a3,int a4,int a5,int a6,int a7,int a8,int a9,int a10,int a11,int a12,int a13,int a14,int a15){
     digitalWrite( Columnas[0] , a0);
    digitalWrite( Columnas[1] , a1);
    digitalWrite( Columnas[2] , a2);
    digitalWrite( Columnas[3] , a3);
   digitalWrite( Columnas[4] , a4);
    digitalWrite( Columnas[5] , a5);
    digitalWrite( Columnas[6] , a6);
    digitalWrite( Columnas[7] , a7);
    digitalWrite( Columnas[8] , a8);
    digitalWrite( Columnas[9] , a9);
    digitalWrite( Columnas[10] , a10);
    digitalWrite( Columnas[11] , a11);
    digitalWrite( Columnas[12] , a12);
    digitalWrite( Columnas[13] , a13);
     digitalWrite(Columnas[14] , a14);
    digitalWrite( Columnas[15] , a15);
   
   
  }
  
  void H(int a0,int a1,int a2,int a3, int a5 ,int a9,int a12,int a13,int a14,int a15){
     digitalWrite( Columnas[0] , a0);
    digitalWrite( Columnas[1] , a1);
    digitalWrite( Columnas[2] , a2);
    digitalWrite( Columnas[3] , a3);
    digitalWrite( Columnas[5] , a5);
    digitalWrite( Columnas[9] , a9);
    digitalWrite( Columnas[12] , a12);
    digitalWrite( Columnas[13] , a13);
     digitalWrite(Columnas[14] , a14);
    digitalWrite( Columnas[15] , a15);
   
    
   
  }
  
    void O(int a0,int a1,int a2,int a3,int a4  ,int a7,int a8 ,int a11,int a12,int a13,int a14,int a15){
      
    digitalWrite( Columnas[0] , a0);
    digitalWrite( Columnas[1] , a1);
    digitalWrite( Columnas[2] , a2);
    digitalWrite( Columnas[3] , a3);
    digitalWrite( Columnas[4] , a4);
    digitalWrite( Columnas[7] , a7);
    digitalWrite( Columnas[8] , a8);
    digitalWrite( Columnas[11] , a11);
    digitalWrite( Columnas[12] , a12);
    digitalWrite( Columnas[13] , a13);
    digitalWrite(Columnas[14] , a14);
    digitalWrite( Columnas[15] , a15);
   
 
   
  }
  
  
  
    void L(int a0,int a1,int a2,int a3 ,int a7  ,int a11, int a15)
    {
     digitalWrite( Columnas[0] , a0);
    digitalWrite( Columnas[1] , a1);
    digitalWrite( Columnas[2] , a2);
    digitalWrite( Columnas[3] , a3);
    digitalWrite( Columnas[7] , a7);
    digitalWrite( Columnas[11] , a11);
    digitalWrite( Columnas[15] , a15);
  
  }
  
  
    void A(int a0,int a1,int a2,int a3,int a4  ,int a6,int a8 ,int a10,int a12,int a13,int a14,int a15){
      
    digitalWrite( Columnas[0] , a0);
    digitalWrite( Columnas[1] , a1);
    digitalWrite( Columnas[2] , a2);
    digitalWrite( Columnas[3] , a3);
    digitalWrite( Columnas[4] , a4);
    digitalWrite( Columnas[6] , a6);
    digitalWrite( Columnas[8] , a8);
    digitalWrite( Columnas[10] , a10);
    digitalWrite( Columnas[12] , a12);
    digitalWrite( Columnas[13] , a13);
    digitalWrite(Columnas[14] , a14);
    digitalWrite( Columnas[15] , a15);
    
  }
  
  
  void J( int a2,int a3, int a7, int a11,int a12,int a13,int a14,int a15){
    
    digitalWrite( Columnas[2] , a2);
    digitalWrite( Columnas[3] , a3);
    digitalWrite( Columnas[7] , a7);
    digitalWrite( Columnas[11] , a11);
    digitalWrite( Columnas[12] , a12);
    digitalWrite( Columnas[13] , a13);
    digitalWrite(Columnas[14] , a14);
    digitalWrite( Columnas[15] , a15);
   
  } 
  
    void U(int a0,int a1,int a2,int a3  ,int a7  ,int a11,int a12,int a13,int a14,int a15){
    digitalWrite( Columnas[0] , a0);
    digitalWrite( Columnas[1] , a1);
    digitalWrite( Columnas[2] , a2);
    digitalWrite( Columnas[3] , a3);
    digitalWrite( Columnas[7] , a7);
    digitalWrite( Columnas[11] , a11);
    digitalWrite( Columnas[12] , a12);
    digitalWrite( Columnas[13] , a13);
    digitalWrite(Columnas[14] , a14);
    digitalWrite( Columnas[15] , a15);
   
 
   
  }
  
    
  void N(int a0,int a1,int a2,int a3 ,int a5 ,int a10 ,int a12,int a13,int a14,int a15){
    digitalWrite( Columnas[0] , a0);
    digitalWrite( Columnas[1] , a1);
    digitalWrite( Columnas[2] , a2);
    digitalWrite( Columnas[3] , a3);
    digitalWrite( Columnas[5] , a5);
    digitalWrite( Columnas[10] , a10);
    digitalWrite( Columnas[12] , a12);
    digitalWrite( Columnas[13] , a13);
    digitalWrite(Columnas[14] , a14);
    digitalWrite( Columnas[15] , a15);

  }
  
  
  
    void  Columnas_EXTERIOR(int a0,int a1,int a2,int a3,int a4,int a7,int a8,int a11,int a12,int a13,int a14,int a15 ){
    
    digitalWrite( Columnas[0] , a0);
    digitalWrite( Columnas[1] , a1);
    digitalWrite( Columnas[2] , a2);
    digitalWrite( Columnas[3] , a3);
    digitalWrite( Columnas[4] , a4);
    digitalWrite( Columnas[7] , a7);
    digitalWrite( Columnas[8] , a8);
    digitalWrite( Columnas[11] , a11);
    digitalWrite( Columnas[12] , a12);
    digitalWrite( Columnas[13] , a13);
    digitalWrite(Columnas[14] , a14);
    digitalWrite( Columnas[15] , a15);
    
    
    }
    
    
   void  Columnas_INTERIOR(int a5,int a6,int a9,int a10  ){
    digitalWrite( Columnas[5] , a5);
    digitalWrite( Columnas[6] , a6);
    digitalWrite( Columnas[9] , a9);
    digitalWrite( Columnas[10] , a10);
  }
  
  
  
  
  
  void EQUIS(int a0, int a3, int a5,int a6 , int a9,int a10 ,int a12, int a15){
    
    digitalWrite( Columnas[0] , a0);
    digitalWrite( Columnas[3] , a3);
    digitalWrite( Columnas[5] , a5);
    digitalWrite( Columnas[6] , a6);
    digitalWrite( Columnas[9] , a9);
    digitalWrite( Columnas[10] , a10);
    digitalWrite( Columnas[12] , a12);
    digitalWrite( Columnas[15] , a15);
   
  
  }
  
  
  
  void patron_Columnas1(int a0,int a1,int a2,int a3 ){
     digitalWrite( Columnas[0] , a0);
    digitalWrite( Columnas[1] , a1);
    digitalWrite( Columnas[2] , a2);
    digitalWrite( Columnas[3] , a3);
    
   
  }
  
 void patron_Columnas2( int a4,int a5,int a6,int a7 ){
      
   digitalWrite( Columnas[4] , a4);
    digitalWrite( Columnas[5] , a5);
    digitalWrite( Columnas[6] , a6);
    digitalWrite( Columnas[7] , a7);
    
   
  }
   void patron_Columnas3( int a8,int a9,int a10,int a11  ){
      
    digitalWrite( Columnas[8] , a8);
    digitalWrite( Columnas[9] , a9);
    digitalWrite( Columnas[10] , a10);
    digitalWrite( Columnas[11] , a11);
    
   
  }
  
   void patron_Columnas4( int a12,int a13,int a14,int a15){
     
    digitalWrite( Columnas[12] , a12);
    digitalWrite( Columnas[13] , a13);
     digitalWrite(Columnas[14] , a14);
    digitalWrite( Columnas[15] , a15);
   
   
  }
  
  
  void GIRO(){
  for (int i = 0;i < 10; i++){
     int tiempo1=40 ;   
for (int i = 0;i < 4; i++){
  digitalWrite(  Filas[i] , HIGH);
  
   patron_Columnas1( 1,1,1,1);
     delay(tiempo1);
    digitalWrite(  Filas[i] , LOW);
  }
    patron_Columnas1( 0,0,0,0 );
    
    
  digitalWrite(  Filas[3] ,HIGH);    
       delay(tiempo1);
    patron_Columnas2( 1,1,1,1);     
     delay(tiempo1);
   patron_Columnas2( 0,0,0,0 );      
      delay(tiempo1);
   patron_Columnas3( 1,1,1,1);      
    delay(tiempo1);
   patron_Columnas3( 0,0,0,0 );       
      delay(tiempo1);
  digitalWrite(  Filas[3] ,LOW); 
   delay(tiempo1);
  
  
for (int i = 3;i >=0;  i--){
  digitalWrite(  Filas[i] , HIGH);
  
   patron_Columnas4( 1,1,1,1);
     delay(tiempo1);
    digitalWrite(  Filas[i] , LOW);
  }
   patron_Columnas4( 0,0,0,0 );
  
  
  
      
  digitalWrite(  Filas[0] ,HIGH);    
       delay(tiempo1);
    patron_Columnas3( 1,1,1,1);     
     delay(tiempo1);
   patron_Columnas3( 0,0,0,0 );      
      delay(tiempo1);
   patron_Columnas2( 1,1,1,1);      
    delay(tiempo1);
   patron_Columnas2( 0,0,0,0 );       
      delay(tiempo1);
  digitalWrite(  Filas[0] ,LOW); 
   delay(tiempo1);
  
  }
  }  
 
 
    
  void patron_Columnas11( int a3, int a7, int a11, int a15){
   
    digitalWrite( Columnas[3] , a3);
 
    digitalWrite( Columnas[7] , a7);
 
    digitalWrite( Columnas[11] , a11);
   
    digitalWrite( Columnas[15] , a15);
   
  }
  void patron_Columnas12( int a2, int a6, int a10, int a14 ){
   
    digitalWrite( Columnas[2] , a2);
   
    digitalWrite( Columnas[6] , a6);
    
    digitalWrite( Columnas[10] , a10);
 
     digitalWrite(Columnas[14] , a14);
 
   
   
  }   
  
   void patron_Columnas13( int a1, int a5, int a9, int a13 ){
  
    digitalWrite( Columnas[1] , a1);
    
    digitalWrite( Columnas[5] , a5);
 
    digitalWrite( Columnas[9] , a9);
 
    digitalWrite( Columnas[13] , a13);
   
   
   
  }
  
  
   void patron_Columnas14(int a0, int a4, int a8, int a12 ){
     digitalWrite( Columnas[0] , a0);
   
   digitalWrite( Columnas[4] , a4);
  
    digitalWrite( Columnas[8] , a8);
  
    digitalWrite( Columnas[12] , a12);
 
   
   
  }
  
    void GIRO_A(){
        int tiempo1=40 ; 
      
    for (int i = 0;i < 10; i++){
     
for (int i = 0;i < 4; i++){
  digitalWrite(  Filas[i] , HIGH);
  
   patron_Columnas11( 1,1,1,1);
     delay(tiempo1);
    digitalWrite(  Filas[i] , LOW);
  }
    patron_Columnas11( 0,0,0,0 );
    
    
  digitalWrite(  Filas[3] ,HIGH);    
       delay(tiempo1);
    patron_Columnas12( 1,1,1,1);     
     delay(tiempo1);
   patron_Columnas12( 0,0,0,0 );      
      delay(tiempo1);
   patron_Columnas13( 1,1,1,1);      
    delay(tiempo1);
   patron_Columnas13( 0,0,0,0 );       
      delay(tiempo1);
  digitalWrite(  Filas[3] ,LOW); 
   delay(tiempo1);
  
  
for (int i = 3;i >=0;  i--){
  digitalWrite(  Filas[i] , HIGH);
  
   patron_Columnas14( 1,1,1,1);
     delay(tiempo1);
    digitalWrite(  Filas[i] , LOW);
  }
   patron_Columnas14( 0,0,0,0 );
  
  
  
      
  digitalWrite(  Filas[0] ,HIGH);    
       delay(tiempo1);
    patron_Columnas13( 1,1,1,1);     
     delay(tiempo1);
   patron_Columnas13( 0,0,0,0 );      
      delay(tiempo1);
   patron_Columnas12( 1,1,1,1);      
    delay(tiempo1);
   patron_Columnas12( 0,0,0,0 );       
      delay(tiempo1);
  digitalWrite(  Filas[0] ,LOW); 
   delay(tiempo1);
  
    }
  }  
  
    
  
