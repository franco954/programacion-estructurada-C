

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){

    float num1, num2, suma, resta, producto;
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);
    suma = num1 + num2;
    resta = num1 - num2;
    producto =  num1 * num2;
    printf("La suma de los numeros es: %f, la resta: %f y el producto: %f", suma, resta, producto);
    return 0;
}














