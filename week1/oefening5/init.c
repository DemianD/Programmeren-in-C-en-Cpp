#include <stdio.h>

/**
 * Deze code levert, in tegenstelling tot vorige oefening, wel de gevraagde output. Toch levert deze
 * amper meer punten op dan de vorige oplossing. Waarom?
*/

int main()
{
    int macht = 1;
    int i;

    /* Er wordt gekozen voor 20. Een random getal. */
    for (i = 0; i < 20; i++)
    {
        printf("%d ", macht);
        macht *= 2;
        if (macht > 10000)
        {
            break;
        }
    }

    return 0;
}
