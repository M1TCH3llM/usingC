#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Whats Your Name? ");
    int age = get_int("what is your age? ");

    long number = get_long("What is your Phone Number? ");

    printf("Age is %i. Name is %s. Phone # is %ld.\n", age, name, number);
}