#include <stdio.h>
#include <cs50.h>

// const int n = 5;
int n = 0;

int number();
float average(int array[]);

int main(void)
{
    n = number();

    int scores[n];
    for (int i = 0; i < n; i++)
    {
       scores[i] = get_int("score: ");
    }
    

    printf("Average: %f\n", average(scores));
}

float average(int array[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return sum / (float) n;
    
}

int number()
{
    return get_int("Enter Number of tests ");
}

////// second iteration

// {
//     int scores[3];

//     scores[0] = get_int("Score: ");
//     scores[1] = get_int("Score: ");
//     scores[2] = get_int("Score: ");

//     printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3 );
// }

//// first iteration

// {
//     int score1 = 72;
//     int score2 = 73;
//     int score3 = 33;

//     printf("Average: %f\n", (score1 + score2 + score3) / 3.0 );
// }