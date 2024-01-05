#include <stdio.h>
#include <cs50.h>

int main(void)
{
     int n;
     // do will repeat loop until n >= 1 
     do
     {
        n = get_int("size: ");
     }
     while (n < 1);


    // loop that prints grid of bricks 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }   
        printf("\n");
    }
   
}