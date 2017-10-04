#include <stdio.h>

/*
 * Schrijf voor het eerste deel van deze oefening ENKEL een hoofdprogramma, 
 * geen functies of procedures. (Houd je hier aan, of je mist de clou van de oefening.)
 * 
 * 1. Maak in het hoofdprogramma een array aan waarin elk element een karakter is. 
 * Vul deze array bij declaratie op als volgt:
 * 
 * letters [] = {'p','o','r','e','o','i','f','o','i','e','c','i','i',':',
                       'a','-','t','('};
 * Bepaal de lengte van de array zonder te tellen (zie theorie)! 
 * Schrijf nu (in het hoofdprogramma) alle karakters uit die op een even positie in de array staan.
 * 
 * Schrijf nu een procedure schrijf_even_posities(array) die alle karakters uitschrijft die op 
 * een even positie in de gegeven array staan. Roep deze procedure op in het hoofdpro- gramma 
 * en test uit. Wat merk je, en wat is daar de reden van? Los op door een extra parameter te voorzien.
*/

void schrijf_even_posities(const char[], int lengthOfArray);
void divider();

int main()
{
    int lengthOfArray;
    int i;
    char letters[] = {'p','o','r','e','o','i','f','o','i','e','c','i','i',':','a','-','t','('};

    lengthOfArray = sizeof(letters)/sizeof(char);

    printf("Length of the array: %d \n", lengthOfArray);

    for(i = 0; i < lengthOfArray; i = i + 2) {
        printf("%c", letters[i]);
    }

    divider();

    schrijf_even_posities(letters, lengthOfArray);
}

void schrijf_even_posities(const char letters[], int lengthOfArray) 
{
    int i = 0;

    printf("Length of the array: %d \n", lengthOfArray);
    
    for(i = 0; i < lengthOfArray; i = i + 2) {
        printf("%c", letters[i]);
    }
}

void divider() 
{
    printf("\n\n---------------------\n\n");
}
