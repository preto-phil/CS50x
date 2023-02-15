#include <cs50.h>
#include <stdio.h>

int get_startPop(void);
int get_endPop(void);
void calculation(int n, int j);

int main(void)
{
    int n = get_startPop();
    int j = get_endPop();
    calculation(n ,j);
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

int get_endPop(void)
{
    int j = get_int("End Size: ");
    return j;
}

// Calculate the number of years it takes

void calculation(int n, int j)
{
    long y = 0;
    for (int i = n; i <= j; i += (i/3 - i/4))
    {
        //printf("Years: %li \n", y += 1);
        y += 1;
    }
    printf("Years: %li \n", y);
}