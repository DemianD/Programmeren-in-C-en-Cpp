#include <stdio.h>

/**
 * Schrijf een procedure die alle elementen van een gegeven array met lettertekens, 
 * een plaats naar links schuift. Het eerste karakter komt achteraan. Roep deze procedure drie keer aan op de array
 * 
 * char rij[] = {'s','a','p','a','p','p','e','l'};
 * 
 * Aangezien je de array verschillende keren moet uitschrijven, voorzie je hiervoor uiteraard een procedure.
 * Voor de snelle geest: argumenteer waarom de voorgestelde oplossing niet altijd even effici ̈ent is, 
 * en welk (ander) nadeel een effici ̈entere methode dan weer heeft.
*/

void schuif_naar_links(char[], int);
void print(const char[], int);

int main()
{
    int lengthOfArray;
    char rij[] = {'s','a','p','a','p','p','e','l'};

    lengthOfArray = sizeof(rij)/sizeof(char);

    schuif_naar_links(rij, lengthOfArray);
    print(rij, lengthOfArray);

    schuif_naar_links(rij, lengthOfArray);
    print(rij, lengthOfArray);

    schuif_naar_links(rij, lengthOfArray);
    print(rij, lengthOfArray);
}

void schuif_naar_links(char rij[], int lengthOfArray)
{
    int i;
    char firstValue = rij[0];

    for(i = 0; i < lengthOfArray - 1; i++) {
        rij[i] = rij[i + 1];
    }

    rij[lengthOfArray - 1] = firstValue;
}

void print(const char rij[], int lengthOfArray) 
{
    int i;

    for(i = 0; i < lengthOfArray; i++) {
        printf("%c ", rij[i]);
    }

    printf("\n");
}
