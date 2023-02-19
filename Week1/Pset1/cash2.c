#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents, int quarters);
int calculate_nickels(int cents, int quarters, int dimes);
int calculate_pennies(int cents, int quarters, int dimes, int nickels);

int quarters;
int dimes;
int nickels;
int pennies;

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    int cents;
    do
    {
        cents = get_int("Cents: ");
    }
    while (cents < 1);
    return cents;
}

int calculate_quarters(int cents)
{
    // TODO
    if (cents >= 25)
    {
        
        for (int i = amount; amount >= 25; i -= 25)
        {
            quarters += 1;
            amount -= 25; 
        }
        printf("Quarters: %i \n", quarters);

    }
}

int calculate_dimes(int cents, int quarters)
{
    // TODO
    dimes = (cents - quarters*25) / 10;
    return dimes;
}

int calculate_nickels(int cents, int quarters, int dimes)
{
    // TODO
    nickels = (cents - (quarters * 25) - (dimes * 10) ) / 5;
    return nickels;
}

int calculate_pennies(int cents, int quarters, int dimes, int nickels)
{
    // TODO
    pennies = (cents - (quarters * 25) - (dimes * 10) - (nickels * 5)) / 1;
    return pennies;
}





/*

#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents, int quarters);
int calculate_nickels(int cents, int quarters, int dimes);
int calculate_pennies(int cents, int quarters, int dimes, int nickels);

int quarters;
int dimes;
int nickels;
int pennies;

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    int cents;
    do
    {
        cents = get_int("Cents: ");
    }
    while (cents < 1);
    return cents;
}

int calculate_quarters(int cents)
{
    // TODO

    quarters = cents / 25;

    return quarters;
}

int calculate_dimes(int cents, int quarters)
{
    // TODO
    dimes = (cents - quarters*25) / 10;
    return dimes;
}

int calculate_nickels(int cents, int quarters, int dimes)
{
    // TODO
    nickels = (cents - (quarters * 25) - (dimes * 10) ) / 5;
    return nickels;
}

int calculate_pennies(int cents, int quarters, int dimes, int nickels)
{
    // TODO
    pennies = (cents - (quarters * 25) - (dimes * 10) - (nickels * 5)) / 1;
    return pennies;
}


/* 
#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    int cents;
    do
    {
        cents = get_cents("Cents: ");
    }
    while (cents < 1);
    return cents;
}

int calculate_quarters(int cents)
{
    // TODO

    for (int i = cents; i >= 25; i -= 25)
    {
        int quarters = 0;
        quarters += 1;
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    // TODO
    for (int i = cents; i >= 10; i -= 10)
    {
        int dimes = 0;
        dimes += 1;
    }
    return dimes;
}

int calculate_nickels(int cents)
{
    // TODO
    for (int i = cents; i >= 5; i -= 5)
    {
        int nickels = 0;
        nickels += 1;
    }
    return nickels;
}

int calculate_pennies(int cents)
{
    // TODO
    for (int i = cents; i >= 1; i -= 1)
    {
        int pennies = 0;
        pennies += 1;
    }
    return pennies;
}

*/