#include <cs50.h>
#include <stdio.h>

// Initialize functions

int get_startPop(void);
int get_endPop(int n);
void calculation(int n, int j);

// Mian function that will call other functions

int main(void)
{
    int n = get_startPop();
    int j = get_endPop(n);
    calculation(n, j);
}


// Prompt starting population size

int get_startPop(void)
{
    int n;
    do
    {
        n = get_int("Starting Size: ");
    }
    while (n < 9);
    return n;
}


// Prompt for end population size

int get_endPop(int n)
{
    int j;
    do
    {
        j = get_int("End Size: ");
    }
    while (j < n);
    return j;
}

// Calculate the number of years it takes

void calculation(int n, int j)
{
    long y = 0;
    for (int i = n; i < j; i += (i / 3 - i / 4))
    {
        y += 1;
    }
    printf("Years: %li \n", y);
}