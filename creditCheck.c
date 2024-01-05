#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // prompt for credit card number
    long long card_number;
    do
    {
        // get long gets large ints
        card_number = get_long("Number: ");
    }
    // shortest card numbers are 13 digits
    while (card_number < 12);

    // Setting variables
    // temp card number
    long long temp_n = card_number;
    // sum1 stores even based digits not doubled
    // sum2 stores odd based digits that are doubled
    int sum1 = 0, sum2 = 0;
    // stores current digit i is counter
    int digit, i = 0;

    // iterates through each digit
    while (temp_n > 0)
    {
        // get last digit of number using mod op %
        digit = temp_n % 10;

        // checks if current position is even
        if (i % 2 == 0)
        {
            // if it is it adds to total of sum1
            sum1 += digit;
        }
        else
        {
            // if odd it is multiplied by 2
            digit *= 2;
            // adds new product to sum2 
            sum2 += digit / 10 + digit % 10;
        }
        // removes the last digit of temp_n
        temp_n /= 10;
        // iterates through loop again
        i++;
    }
    // calcuales if last digit in sum is equal to 0
    if ((sum1 + sum2) % 10 == 0)
    {
        // checks first two digits of cards if is statement was true
        if ((card_number >= 340000000000000 && card_number < 350000000000000) ||
            (card_number >= 370000000000000 && card_number < 380000000000000))
        {
            printf("AMEX\n");
        }
        else if (card_number >= 5100000000000000 && card_number < 5600000000000000)
        {
            printf("MASTERCARD\n");
        }
        else if ((card_number >= 4000000000000 && card_number < 5000000000000) ||
                 (card_number >= 4000000000000000 && card_number < 5000000000000000))
        {
            printf("VISA\n");
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
