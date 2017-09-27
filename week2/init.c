#include <stdio.h>

/**
 * Schrijf een programma dat alle (gehele) getallen van 0 tot en met 64 uitschrijft. Per regel komt
 * zowel octale, decimale, als hexadecimale voorstelling van ´e´en getal. Zorg ervoor dat de getallen
 * rechts gealligneerd zijn, dus zo:
*/
int main()
{
    int counter;

    for (counter = 0; counter <= 64; counter = counter + 1)
    {
        printf("%8d %8o %8x \n", counter, counter, counter);
    }

    return 0;
}
