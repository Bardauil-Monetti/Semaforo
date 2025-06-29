#include <Arduino.h>
int semaforo1[3] = {5, 6, 7}; // verde, amarillo, rojo
int semaforo2[3] = {12, 15, 14}; // verde, amarillo, rojo
void semaforo (int luces[3], int rojo, int amarillo, int verde){
    digitalWrite(luces[0], rojo);
    digitalWrite(luces[1], amarillo);
    digitalWrite(luces[2], verde);
}
void setup()
{
    for(int i = 0; i < 3; i++) {
        pinMode(semaforo1[i], OUTPUT);
        pinMode(semaforo2[i], OUTPUT);
    }

}

void loop(){
  semaforo(semaforo1, 1, 0, 0);
  semaforo(semaforo2, 0, 0, 1);
  delay(5000); 
  
  semaforo(semaforo1, 0, 1, 0);
  delay(5000);

  semaforo(semaforo1, 0, 0, 1);
  semaforo(semaforo2, 1, 0, 0);
  delay(5000); 

  semaforo(semaforo2, 0, 1, 0);
  delay(5000);
}
//Este codigo es el de princio de año, nos olvidamos de subirlo antes
