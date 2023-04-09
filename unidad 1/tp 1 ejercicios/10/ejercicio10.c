#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[]){

    const int sueldo = 500;
    const int vehiculoVendido = 50;
    int valorVehiculo, cantidadVendida;
    float comisionVenta, sueldoFinal;

    printf("Ingrese el valor del vehiculo: ");
    scanf("%d", &valorVehiculo);
    printf("Cuantos vehiculos vendio?");
    scanf("%d", &cantidadVendida);

    comisionVenta = ((valorVehiculo / 100) * 10) * cantidadVendida;
    sueldoFinal = (vehiculoVendido * cantidadVendida) + sueldo + comisionVenta;

    printf("El sueldo final del empleado es de: %f", sueldoFinal);

    return 0;
}
