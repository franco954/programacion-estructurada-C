#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){
    
    char empleado[20];
    int valor, horas, sueldo;
    printf("Nombre del empleado: ");
    fgets(empleado, 20, stdin);
    printf("Ingrese el valor x hora: ");
    scanf("%d", &valor);
    printf("Ingrese las horas trabajadas: ");
    scanf("%d", &horas);
    sueldo = valor * horas;
    printf("El sueldo del empleado %s es de: %d", empleado, sueldo);
    return 0;
}
