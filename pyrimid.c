#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;

    do
    {
        n = get_int("height: ");
    }
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int l = 0; l < n - i - 1; l++)
        {
            printf(" ");
        }

        for (int j = -1; j < i; j++)
        {
            printf("#");
        }

        printf("  ");

        for (int r = 0; r <= i; r++)
        {
            printf("#");
        }

        printf("\n");
    }
}
