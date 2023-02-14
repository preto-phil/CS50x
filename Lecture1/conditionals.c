#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("Give us a X = ");
    int y = get_int("Give us a Y = ");
    if (x > y)
    {
        printf("X is larger than Y\n");
    } 
    else if (x < y)
    {
        printf("Y is larger than X\n");
    }
    else 
    {
        printf("X is equal to Y\n");
    }
}