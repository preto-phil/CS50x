#include <cs50.h>
#include <stdio.h>

long number;

int main(void)
{
    number = get_long("Choose a number! ");
    printf("Number: %li \n", number);

    if (number >= 340000000000000 && number < 350000000000000 || number >= 370000000000000 && number < 380000000000000)
    {
        printf("AMEX\n");
    }

    else if (number >= 5000000000000000 && number < 6000000000000000)
    {
        printf("MASTERCARD\n");
    }

    else if (number >= 4000000000000000 && number < 5000000000000000 || number >= 4000000000000 && number < 5000000000000)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}

// American express

    // 15 digits
    // begin met 34 of 37
    // legit return =

// Mastercard

    // 16 digits
    // begin met 51 - 55
    // legit return = MASTERCARD\n

// Visa

    // 13 of 16 digits
    // begin met 40 - 49
    // legit return = VISA\n

// if not valid

    // return INVALID


/*

Take number

    cut off last number for even numbers
    cut off second to last number for odd numbers



*/