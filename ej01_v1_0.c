#include <stdio.h>

int main(){
    float x=0, y=0, prom=0; // Declarar las variables de tipo real

    printf("Programa que calcula la media de dos numeros \n\n");

    // Leer x
    printf("Introduzca el primer numero: ");
     scanf(" %f",&x);
    // Solicitar el valor y asignar a la variable x

    // Leer y
    printf("\nIntroduzca el segundo numero: ");
     scanf(" %f",&y);
    // Solicitar el valor y asignar a la variable y
 
    // Calcular la media
    prom = (x + y)/ 2;

	// Imprimir el resultado en pantalla
    printf("\n El promedio es: %f", prom);   

    return 0;
}
