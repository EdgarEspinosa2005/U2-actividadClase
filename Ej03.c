#include <stdio.h>

int main(){
    float x, y, prom; // Declarar las variables de tipo real

    printf("Programa que calcula la media de dos numeros \n\n");
    

    // Leer x
    printf("Introduzca el primer numero: ");
    // Solicitar el valor y asignar a la variable x
    scan("%f", %x);

    // Leer y
    printf("\nIntroduzca el segundo numero: ");
    // Solicitar el valor y asignar a la variable y
     scan("%f", %y);
 
    // Calcular la media
    prom = (  x + y )/ 2;

	// Imprimir el resultado en pantalla

     printf("El resultado de la media de %f y %f es %f\n: ",x, y, prom);
   

    return 0;
}
