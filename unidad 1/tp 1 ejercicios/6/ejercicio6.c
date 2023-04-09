#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
    float lado1, lado2, lado3, diagonal, perimetro, semiperimetro, area;
    printf("Ingrese el valor del primer lado: ");
    scanf("%f", &lado1);
    printf("Ingrese el valor del segundo lado: ");
    scanf("%f", &lado2);
    printf("Ingrese el valor del tercer lado: ");
    scanf("%f", &lado3);
    diagonal = sqrt(pow(lado1, 2) + pow(lado2, 2) + pow(lado3, 2));
    perimetro = lado1 + lado2 + lado3;
    semiperimetro = perimetro / 2;
    area = sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado3));
    printf("La diagonal principal del triangulo es: %f\n", diagonal);
    printf("El perímetro del triangulo es: %f\n", perimetro);
    printf("El área del triangulo es: %f\n", area);
    return 0;
}