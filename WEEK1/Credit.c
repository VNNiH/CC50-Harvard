#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    long cardNumber = get_long("Card-Number: ");
    printf("Your card Number = %li\n", cardNumber);
    char cardStr[17];
    sprintf(cardStr, "%ld", cardNumber);
    int firstDigit = cardStr[0] - '0';
    int twoDigits = (cardStr[0] - '0') * 10 + (cardStr[1] - '0');
    size_t length = strlen(cardStr);
    int somaDigitosRemanes = 0;
    int produtoAlternado = 0;
    int checkNumber = 0;
    int checkSum;
    for (size_t i = 0; i < length; i++)
    {
        int digit = cardStr[i] - '0';
        if (i % 2 == 0)
        {
            produtoAlternado = digit * 2;
            if (produtoAlternado >= 10)
            {
                checkNumber += (produtoAlternado % 10) + (produtoAlternado / 10);
            }
            else
            {
                checkNumber += produtoAlternado;
            }
        }
        else
        {
            somaDigitosRemanes += digit;
        }
    }
    checkSum = somaDigitosRemanes + checkNumber;
       if (checkSum % 10 == 0)
       {
        if (firstDigit == 4)
        {
            printf("VISA\n");
        }
        else if (twoDigits == 34 || twoDigits == 37)
        {
            printf("AMEX\n");
        }
        else if (twoDigits >= 51 && twoDigits <= 55)
        {
            printf("MASTER\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
