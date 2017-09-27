#include <stdio.h>
#include <math.h>

/**
 * Gegeven de opgave schrijf alle machten van 2 (beginnend bij 2^0 = 1), kleiner dan 10.000 uit.
 * Onderstaande code is foutief. Geef aan hoe je op zicht ziet dat er iets loos is.
 */

int main()
{
    /* Start al vanaf 1. Zou 0 moeten zijn. */
    int macht = 1;

    /* Als je macht op 0 zet, dan zal de maal op regel 16 niet meer werken */
    while (macht < 10000)
    {
        macht = pow(macht, 2);
        printf("%d ", macht);
    }
    return 0;
}
