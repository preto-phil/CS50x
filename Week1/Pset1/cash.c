#include <stdio.h>
#include <cs50.h>

void cash();

int main(void)
{
    cash();
}

void cash()
{

// Declare variables

int quarters = 0;
 
int dimes = 0;

int nickels = 0;

int pennies = 0;

int amount;

// Get amount

do 
{
    amount = get_int("What is the amount? ");
}
while (amount < 1);


// Execute function only when amount is larger than 0

do
{


// If statement for when amount larger than 25

if (amount >= 25)
{
    
    for (int i = amount; amount >= 25; i -= 25)
    {
        quarters += 1;
        amount -= 25; 
    }
    printf("Quarters: %i \n", quarters);

} else if (amount >= 10)
{
    for (int i = amount; amount >= 10; i -= 10)
    {
    dimes += 1;
    amount -= 10;
    }
    printf("Nickels: %i \n", dimes);

} else if (amount >= 5)
{
    for (int i = amount; amount >= 5; i -= 5)
    {
    nickels += 1;
    amount -= 5;
    }
    printf("Nickels: %i \n", nickels);

} else if (amount >= 1)
{
    for (int i = amount; amount >= 1; i -= 1)
    {
    pennies += 1;
    amount -= 1;
    }
    printf("Pennies: %i \n", pennies);
}

}
while (amount > 0);

int coinAmount = quarters + dimes + nickels + pennies;
printf("Amount of coins: %i \n", coinAmount);




}



