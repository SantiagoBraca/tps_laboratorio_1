#include <stdio.h>
#include <stdlib.h>
#include "menus.h"
int menu()
{
    int opcion;

    printf("****Menu de opciones****\n\n");
    printf("1. Ingresar Kilometros\n");
    printf("2. Ingresar Precio de Vuelos\n");
    printf("3. Calcular todos los costos\n");
    printf("4. Informar Resultados\n");
    printf("5. Carga forzada de datos\n");
    printf("6. Salir\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}
int submenu()
{
    int opcion;

    printf("<<<<Submenu precios de vuelos>>>>\n\n");
    printf("Por favor, elija la empresa con la que viajara.\n");
    printf("1. Aerolineas\n");
    printf("2. Latam\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}
