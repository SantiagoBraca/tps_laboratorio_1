#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"

float kilometrosConfirmados(float kms, int* pFlagKilometros)
{
    float kilometros;

    if(kms>1)
    {
        kilometros=kms;
        *pFlagKilometros=1;
    }
    else
    {
        if(kms<-1)
        {
            printf("No se puede ingresar kilometros negativos\n");
        }
        else
        {
            if(kms==0)
            {
                printf("No se puede ingresar 0 kilometros\n");
            }
            else
            {
                printf("No se puede ingresar 0 kilometros\n");
            }
        }
    }
    return kilometros;
}

float aerolineasConfirmado(float precioAerolineas, int* pFlagAerolineas)
{
    float aerolineas;

    if(precioAerolineas>0)
    {
        *pFlagAerolineas=1;
        aerolineas=precioAerolineas;
    }
    else
    {
        if(precioAerolineas<=0)
        {
            printf("Este precio no es correcto\n");
        }
        else
        {
            printf("No se puede viajar gratis\n");
        }
    }
    return aerolineas;
}

float latamConfirmado(float precioLatam, int* pFlagLatam)
{
    int latam;

    if(precioLatam>1)
    {
        latam=precioLatam;
        *pFlagLatam=1;
    }
    else
    {
        if(precioLatam<=-1)
        {
            printf("Este precio no es correcto\n");
        }
        else
        {
            printf("No se puede viajar gratis\n");
        }
    }
    return latam;
}
