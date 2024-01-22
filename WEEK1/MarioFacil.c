#include <cs50.h>
#include <stdio.h>

int get_height_int(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    return n;
}

int valuei(int i)
{
    for (int z = 0; z < i; z++)
    {
        printf(" ");
    }
    return i;
}

int main(void)
{
    int height = get_height_int();

    for (int i = 1; i <= height; i++)
    {
        valuei(height - i);

        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}
