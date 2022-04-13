#include <stdio.h>
#include <stdlib.h>
#include "informarCalculos.h"
void informarCalculos(float descuento, float aumento, float bitcoin, float unitario)
{
    printf("A-Precio con tarjeta de debito: %.2f\n", descuento);
    printf("B-Precio con tarjeta de credito: %.2f\n", aumento);
    printf("C-Precio pagando con bitcoin: %.2f\n", bitcoin);
    printf("D-Precio unitario %.2f\n\n", unitario);
}
