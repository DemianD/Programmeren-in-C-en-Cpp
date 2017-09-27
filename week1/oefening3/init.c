#include <stdio.h>

/*
 * Gegeven volgend programmafragment, als oplossing voor oefening 1. Dit levert de gevraagde
 * output. Het levert echter op een examen geen punten op. Waarom niet?
 */

int i;

int main()
{
    for (i = 10; i > 0; i--)
    {
        if (i == 10)
        {
            printf("Hello world!\n");
        }
        printf("%d ", i);
        if (i == 1)
        {
            printf("\nSTART");
        }
    }
}

// Onnodige IF ELSE statements. Je zou deze gewoon erboven/eronder kunnen plaatsen.
// De If Elses worden telkens gecontroleerd.