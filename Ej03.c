#include <stdio.h>

int main() {
    int num;

    printf("Introduzca un numero entre 1 y 100: ");
    scanf("%d", &num);

    if (num >= 1 && num <= 100){
        if (num % 3 == 0 && num % 5 == 0){
            printf("FizzBuzz\n");
        }else if(num % 3 == 0){
            printf("Fizz\n");
        }else if(num % 5 == 0){
            printf("Buzz\n");
        }
    return 0;
}
