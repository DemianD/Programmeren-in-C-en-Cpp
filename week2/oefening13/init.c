#include <stdio.h>

/*
 * Schrijf een functie met naam index_van(...), die de (kleinste) index teruggeeft 
 * van de plaats waarop een gegeven re ̈eel getal in een gegeven array van re ̈ele getallen gevonden wordt. 
 * Indien het getal niet aanwezig is, wordt er -1 teruggegeven. Bepaal zelf aantal en aard van de parameters.
 * Wat verandert er als de gegeven array met zekerheid geordend is? (Niet uitwerken, wel netjes formuleren.)
*/

int index_van(const int[], int, int);

int main()
{
    int lengthOfArray;
    int result;
    int getallen[] = {5, 4, 3, 1, 8, 10, 3, 8};

    lengthOfArray = sizeof(getallen)/sizeof(char);

    result = index_van(getallen, lengthOfArray, 1);

    printf("Index = %d", result);
}

int index_van(const int getallen[], int lengthOfArray, int zoekwaarde) 
{
    int i;
    int kleinsteIndex;

    for(i = 0; i < lengthOfArray; i++) {
        if(getallen[i] == zoekwaarde) {
            return i;
        }
    }

    return -1;
}
