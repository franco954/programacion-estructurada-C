#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
    int num1 = 0;
    int num2 = 0;
    int resultado = 0;

    printf("Ingresar el primer valor: ");
    scanf("%d", &num1);
    printf("Ingresar el segundo valor: ");
    scanf("%d", &num2);

    resultado = num1 + num2;
    printf("El resultado de la suma es: %d", resultado);

    return 0;
}
