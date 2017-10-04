#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


/**
 * Schrijf een programma dat 20 gehele getallen genereert tussen 100 en 120 (grenzen inbegrepen) en
 * deze ook op het scherm toont. Daarna worden alle getallen die niet gekozen werden, in stijgende
 * volgorde uitgeschreven. Kijk kritisch na!
 * Heb je de grenzen en het aantal te genereren getallen in constanten bewaard?
*/

int random_integer(int, int);

int main()
{
    const int LENGTH = 20;
    const int MIN = 100;
    const int MAX = 120;

    int i;
    int random_getal;
    bool aanwezigheidstabel[LENGTH];
    
    srand ( time(NULL) );

    for(i = 0; i < LENGTH; i++) {
        aanwezigheidstabel[random_getal - MIN] = true;
    }

    for(i = LENGTH-1; i >= 0; i--) {
        if(aanwezigheidstabel[i] == false) {
            printf("%d ", i + MIN);
        }
    }
    
    printf("\n\n DONE \n");

    return 0;
}

int random_integer(int min, int max)
{
    return min + rand() % (max-min+1);
}
