#include <stdio.h>

int main(int argc, char const *argv[]) {
    float lado1, lado2, lado3, perimetro;

    printf("Ingrese el primer lado del triangulo: ");
    scanf("%f", &lado1);

    printf("Ingrese el segundo lado del triangulo: ");
    scanf("%f", &lado2);

    printf("Ingrese el tercer lado del triangulo: ");
    scanf("%f", &lado3);

    perimetro = lado1 + lado2 + lado3;

    printf("El perimetro del triangulo es: %f\n", perimetro);

    return 0;
}