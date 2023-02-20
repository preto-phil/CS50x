#include <cs50.h>
#include <stdio.h>

long number;

int main(void)
{
    number = get_long("Choose a number! ");
    printf("Number: %li \n", number);

    // American express
    if (number == isdigit())
    {
        if (number >= 340000000000000 && number < 350000000000000 || number >= 370000000000000 && number < 380000000000000)
        {
            printf("AMEX\n");
        }

        if (number >= 5000000000000000 && number < 60000000000000)
        {
            printf("MASTERCARD\n");
        }

        if (number >= 4000000000000000 && number < 50000000000000 || number >= 4000000000000 && number < 50000000000)
        {
            printf("VISA\n");
        }
    }
    printf("Invalid \n");
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