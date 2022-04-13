/*
 BRACAMONTE SANTIAGO RAMIRO
 Div: 1A
 Trabajo Practico 1:

Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
para ofrecerlos a sus clientes.
Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
Para ello el programa iniciará y contará con un menú de opciones:

1. Ingresar Kilómetros: ( km=x)
2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
- Precio vuelo Aerolíneas:
- Precio vuelo Latam:
3. Calcular todos los costos:
a) Tarjeta de débito (descuento 10%)
b) Tarjeta de crédito (interés 25%)
c) Bitcoin (1BTC -> 4.765.477.37 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
4. Informar Resultados
“Latam:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
Aerolíneas:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
La diferencia de precio es : r “
5. Carga forzada de datos
6. Salir*/

#include <stdio.h>
#include <stdlib.h>
#include "menus.h"
#include "pedirDatos.h"
#include "validaciones.h"
#include "calculos.h"
#include "informarCalculos.h"

int main()
{
	setbuf(stdout, NULL);

    int salir;
    int kilometros;
    int kilometrosDeViaje;
    int aerolineas;
    int precioAerolineas;
    int latam;
    int precioLatam;
    int flagKilometros;
    int flagAerolineas;
    int flagLatam;
    int flagCalculos;
    float creditoAerolineas;
    float debitoAerolineas;
    float bitcoinAerolineas;
    float precioUnitarioAerolineas;
    float creditoLatam;
    float debitoLatam;
    float bitcoinLatam;
    float precioUnitarioLatam;
    float diferencia;

    flagKilometros=0;
    flagAerolineas=0;
    flagLatam=0;
    flagCalculos=0;
    salir='n';

    do
    {
        switch(menu())
        {
            case 1://1. Ingresar Kilómetros: ( km=x)
                kilometros=kilometrosIngresados();
                kilometrosDeViaje=kilometrosConfirmados(kilometros, &flagKilometros);
            break;
            case 2://2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
                if(flagKilometros==1)
               {
                   switch(submenu())
                   {
                        case 1:
                            aerolineas=viajeAerolineas();
                            precioAerolineas=aerolineasConfirmado(aerolineas, &flagAerolineas);
                        break;
                        case 2:
                            latam=viajeLatam();
                            precioLatam=latamConfirmado(latam, &flagLatam);
                        break;
                        default:
                            printf("Error, ingrese un valor correcto(1 para Aerolineas, 2 para Latam)\n");
                        break;
                    }
                }
                else
                {
                    printf("No podemos cargar el precio si no sabemos cual es la cantidad de kilometros a viajar primero\n");
                }
            break;
            case 3://3. Calcular todos los costos:
                if(flagAerolineas==1 && flagLatam == 1)
                {
                    debitoAerolineas=pagoConDebito(precioAerolineas);
                    creditoAerolineas=pagoConCredito(precioAerolineas);
                    bitcoinAerolineas=pagoConBitcoin(precioAerolineas);
                    precioUnitarioAerolineas=precioPorKilometro(precioAerolineas, kilometrosDeViaje);
                    debitoLatam=pagoConDebito(precioLatam);
                    creditoLatam=pagoConCredito(precioLatam);
                    bitcoinLatam=pagoConBitcoin(precioLatam);
                    precioUnitarioLatam=precioPorKilometro(precioLatam, kilometrosDeViaje);
                    diferencia=diferenciaDePrecios(precioAerolineas, precioLatam);
                    printf("Calculos realizados correctamente!\n");
                    flagCalculos=1;
                }
                else
                {
                   printf("No podemos calcular todos los costos si no sabemos los precios primero\n");
                }
            break;
            case 4://4. Informar Resultados
                if(flagCalculos==1)
                {
                    printf("KMs Ingresados: %d \n\n", kilometrosDeViaje);
                    printf("Precio Aerolineas: %d\n", precioAerolineas);
                    informarCalculos(debitoAerolineas, creditoAerolineas, bitcoinAerolineas, precioUnitarioAerolineas);
                    printf("Precio Latam: %d\n", precioLatam);
                    informarCalculos(debitoLatam, creditoLatam, bitcoinLatam, precioUnitarioLatam);
                    printf("Diferencia de precio(Latam - Aerolineas) %.2f\n", diferencia);
                    flagKilometros=0;
                    flagAerolineas=0;
                    flagLatam=0;
                    flagCalculos=0;
                }
                else
                {
                    printf("No podemos informar los calculos si no se ha calculado primero\n");
                }
            break;
            case 5://5. Carga forzada de datos
                kilometrosDeViaje=kilometrosConfirmados(7090, &flagKilometros);
                precioAerolineas=aerolineasConfirmado(162965, &flagAerolineas);
                precioLatam=latamConfirmado(159339, &flagLatam);
                debitoAerolineas=pagoConDebito(precioAerolineas);
                creditoAerolineas=pagoConCredito(precioAerolineas);
                bitcoinAerolineas=pagoConBitcoin(precioAerolineas);
                precioUnitarioAerolineas=precioPorKilometro(precioAerolineas, kilometrosDeViaje);
                debitoLatam=pagoConDebito(precioLatam);
                creditoLatam=pagoConCredito(precioLatam);
                bitcoinLatam=pagoConBitcoin(precioLatam);
                precioUnitarioLatam=precioPorKilometro(precioLatam, kilometrosDeViaje);
                diferencia=diferenciaDePrecios(precioAerolineas, precioLatam);

                printf("KMs Ingresados: %d \n\n", kilometrosDeViaje);
                printf("Precio Aerolineas: %d\n", precioAerolineas);
                informarCalculos(debitoAerolineas, creditoAerolineas, bitcoinAerolineas, precioUnitarioAerolineas);
                printf("Precio Latam: %d\n", precioLatam);
                informarCalculos(debitoLatam, creditoLatam, bitcoinLatam, precioUnitarioLatam);
                printf("Diferencia de precio(Latam - Aerolineas) %.2f\n", diferencia);

            break;
            case 6://6. Salir
                salir='s';
            break;
            default:
                printf("Opcion invalida \n\n");
            break;
        }
    }while(salir!='s');
    return 0;
}
