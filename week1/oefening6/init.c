#include <stdio.h>
#include <math.h>
/**
 * Bij het berekenen van de sinus van een gegeven hoek, gebruikt je computer of zakrekenmachine
 * onderstaande reeksontwikkeling
 * 
 * Schrijf een programma dat de sinus berekent van 0.23 radialen. Opgelet: we kijken naar ef-
 * ficientie van je berekeningen! Vergelijk dit met het resultaat van de ingebouwde sinusfunctie
 * uit de bibliotheek math.h.
 */

double globalPowResult = 1;
double globalPowTillThe = 0;

double globalPow(double radial, int tillThe)
{
    int i;

    /* E.g. if the globalPowTillThe was 5, and our tillThe is 7, we only need to do it twice. */
    int howMuchMore = tillThe - globalPowTillThe;

    for (i = 0; i < howMuchMore; i = i + 1)
    {
        globalPowResult = globalPowResult * radial;
    }

    /* Set the globalTillThe to the new TillThe */
    globalPowTillThe = tillThe;
    
    return globalPowResult;
}

int factorial(int i)
{
    if (i == 0)
    {
        return 1;
    }

    return i * factorial(i - 1);
}

double sinusStep(int n, double radial)
{
    int tillThe = 2 * n + 1;
    double result = globalPow(radial, tillThe) / factorial(tillThe);

    /* If it's even, (-1)^n will be positive. Else it will be negative */
    if(n % 2 == 0) {
        return result;
    }

    return -result;
}

int main()
{
    int n = 0;
    double radial = 0.23;
    double total = 0;
    double result;

    /* Why can't we use while(true) ? */
    while(1) {
        result = sinusStep(n, radial);

        /* We do the calculation of total+result twice. Can this harm the performance? */
        if(total == total + result) {
            break;
        }

        total = total + result;
        n = n + 1;
    }
    
    printf("De sinus via de eigen methode: %30.45f \n", total);
    printf("De sinus via de math library:  %30.45f \n", sin(radial));
}
