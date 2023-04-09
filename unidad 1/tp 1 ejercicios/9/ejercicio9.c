

#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
    const int valorhora = 10;
    int horastrabajadas, sueldo;


    printf("Ingrese las horas trabajas: ");
    scanf("%d", &horastrabajadas);
    sueldo = horastrabajadas *  valorhora;
    printf("El sueldo del empleado es:  %d pesos", sueldo);


    return 0;
}
