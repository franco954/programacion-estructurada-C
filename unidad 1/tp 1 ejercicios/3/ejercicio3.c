#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int resultado = 0;

    printf("Ingresar primer valor: ");
    scanf("%d", &num1);
    printf("Ingresar segundo valor: ");
    scanf("%d", &num2);
    printf("Ingresar tercer valor: ");
    scanf("%d", &num3);

    resultado = num1 + num2 + num3;

    printf("El valor total de la suma es: %d", resultado);


    return 0;
}
