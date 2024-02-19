#include <stdio.h>

void main() {
	int x, y, resul; // Declarar las variables de tipo entero

	// Leer x
	printf("Introduzca el dividendo: ");
	scanf("%d",&x);

	// Leer y
	printf("\nIntroduzca el divisor: ");
	scanf("%d",&y);
	
	// Escriba entre paréntesis la expresión para evaluar si 
	// el primer número es divisible por el segundo
	if(x % y == 0 ){
        // imprimir el mensaje indicando que el primer número
		// si es divisible por el segundo número, utilizar el modificador
		// de formato %d para imprimir cada número entero
		printf("\n\n si es divisible %d %d",x,y);
        resul = (x / y);
        printf("\n\n El Resultado es: %d", resul);
    }else{
        // imprimir el mensaje indicando que el primer número
		// NO es divisible por el segundo número, utilizar el modificador
		// de formato %d para imprimir cada número entero
		printf("\n\n los numeros no son divisibles entre si %d / %d",x,y);
    }
}
