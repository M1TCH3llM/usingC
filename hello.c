// imports standard input and out put library
#include <stdio.h>
#include <cs50.h>

int main(void)
{
// string defines awswer type
// get_string is function to promped type input from user
  string answer = get_string("what is your name? ");

// %s inserts value from additional argument
      printf("hello, %s\n", answer);

}