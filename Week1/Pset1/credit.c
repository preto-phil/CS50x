#include <cs50.h>
#include <stdio.h>

long number;
long digits;

int main(void)
{
    number = get_long("Choose a number: ");
    printf("Number: %li \n", number);

    long num = number;
    int modA;
    int modB;
    int sumA = 0;
    int sumB = 0;
    int digA;
    int digB;


    long digits = 0;
    for (long i = number; i > 0; i /= 10)
    {
        digits = digits + 1;
    }
    printf("Digits: %li \n", digits);


    do
    {
        
        modA = num % 10;
        num = num / 10;
        sumA = sumA + modA;

        modB = num % 10;
        num = num / 10;
        
        modB = modB * 2;
       
        if (modB > 9)
        {
            modB = 1 + (modB % 10);
        }

        sumB = sumB + modB;

    } 
    while (num > 0);
    printf("SumA: %i \n", sumA);
    printf("SumB: %i \n", sumB);
    printf("ModA: %i \n", modA);
    printf("ModB: %i \n", modB);


    int total = sumA + sumB;
    printf("Total: %i \n", total);

    if (number >= 340000000000000 && number < 350000000000000 || number >= 370000000000000 && number < 380000000000000)
    {
        printf("AMEX\n");
        if (total % 10 != 0)
        {
            printf("INVALID\n");
        }
    }

    else if (number >= 5000000000000000 && number < 5600000000000000)
    {
        printf("MASTERCARD\n");
        if (total % 10 != 0)
        {
            printf("INVALID\n");
        }
    }

    else if (number >= 4000000000000000 && number < 5000000000000000 || number >= 4000000000000 && number < 5000000000000)
    {
        printf("VISA\n");
        if (total % 10 != 0)
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
