

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
    float cateto1, cateto2, hipotenusa;
    printf("Ingrese el valor del primer cateto: ");
    scanf("%f", &cateto1);
    printf("Ingrese el valor del segundo cateto: ");
    scanf("%f", &cateto2);
    hipotenusa = sqrt(cateto1*cateto1 + cateto2*cateto2);
    printf("La hipotenusa del triangulo es: %f", hipotenusa);
    return 0;
}
