int LDR=A0;//la lectura de la fotoresistencia es analogica
int led=13;//led indicador visual de lectura de arduino segun la LDR
int LDRvalor=0;//valor con el que comenza la lectura del LDR

//declaramos los estados de los pines en este caso el led
void setup() 
{
  Serial.begin(9600);//inicializamos el puerto serial a 9600 baudios
  Serial.println("intensidad de luz en valor decimal segun LDR");
  pinMode(led,OUTPUT);//definimos el estado del pin 13 como de salida
}

//definimos el bucle de lectura del LDR
void loop() 
{
 LDRvalor=analogRead(LDR);//Bautizamos la lectura del LDR como LDRvalor y leemos la señal analogica 
 digitalWrite(led,HIGH);//cuando el LDR tiene valor prende el led 
 delay(100);//y lo hace durante X segundos
 //delay(LDRvalor);
 digitalWrite(led,LOW);//cuando LDR no tiene valor apaga led
 delay(100);//y lo hace durante X segundos
 //delay(LDRvalor);
 Serial.print("oscuro  "); 
 Serial.println(LDRvalor,DEC);
}
