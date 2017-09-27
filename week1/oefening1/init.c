#include <stdio.h>

/**
 * Schrijf een programma dat volgende tekst op het scherm brengt (delay bij uitschrijven van de
 * verschillende getallen is niet nodig). (En wat als we laten aftellen vanaf 100? Heb je de output
 * 10 9 8 7 6 5 4 3 2 1 hardgecodeerd? Niet doen!)
*/
int main()
{
    int counter;

    printf("Hello world! \n");

    for (counter = 10; counter > 0; counter = counter - 1)
    {
        printf("%d ", counter);
    }

    printf("\n");
    printf("START");

    return 0;
}
