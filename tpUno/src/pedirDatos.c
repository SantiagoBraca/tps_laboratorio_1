#include <stdio.h>
#include <stdlib.h>
#include "pedirDatos.h"

float kilometrosIngresados()
{
    float kilometros;

    printf("Ingrese kilómetros\n");
    scanf("%f", &kilometros);

    return kilometros;
}
float viajeAerolineas()
{
    float aerolineas;

    printf("Ingrese precio de vuelos Aerolineas\n");
    scanf("%f", &aerolineas);

    return aerolineas;
}
float viajeLatam()
{
    float latam;

    printf("Ingrese precio de vuelos Latam\n");
    scanf("%f", &latam);

    return latam;
}



