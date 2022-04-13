#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"
float pagoConDebito(float precio)
{
    float precioConDescuento;
    float descuento;

    descuento=10;

    precioConDescuento=(float)precio-((descuento/100)*precio);

    return precioConDescuento;
}

float pagoConCredito(float precio)
{
    float interes;
    float precioConInteres;

    interes=25;

    precioConInteres=(float)precio+((interes/100)*precio);

    return precioConInteres;
}

float pagoConBitcoin(float precio)
{
    float bitcoin;
    float precioConBitcoin;

    bitcoin=476547737;
    precioConBitcoin=bitcoin/precio;

    return precioConBitcoin;

}

float precioPorKilometro(float precio, float kilometros)
{
    float valorUnitario;

    valorUnitario=(float)precio/kilometros;

    return valorUnitario;
}

float diferenciaDePrecios(float aerolineas, float latam)
{
    float diferencia;

    diferencia=(float)latam-aerolineas;

    return diferencia;
}
