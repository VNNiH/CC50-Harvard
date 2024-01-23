#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int initialPop;
    do
    {
        initialPop = get_int("Start Population Size: ");
    } while (initialPop < 9);

    int finalPop;
    do
    {
        finalPop = get_int("End Population Size: ");
    } while (finalPop <= initialPop);

    int nPop = initialPop;
    int years = 0;

    while (finalPop > nPop)
    {
        int bornP = nPop / 3;
        int dieP = nPop / 4;
        nPop = nPop + bornP - dieP;
        years++;
    }

    printf("Years: %i\n", years);
}
