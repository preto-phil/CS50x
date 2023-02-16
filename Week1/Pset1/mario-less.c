#include <cs50.h>
#include <stdio.h>

int get_amount(void);
void create_Block(int height);

int main(void)
{
    int height = get_amount();
    create_Block(height);
}

// Prompt height

int get_amount(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0 && height > 9);
    return height;
}

// Function to create blocks

void create_Block(int height)
{
    for (int i = 1; i <= height; i++)
    {    
        for (int j = height; j > 0; j--)
        {
            if (j > i)
            {
                printf("*");
            }
        }
        for (int j = height; j > 0; j--)
        {
            if (j <= i)
            {
                printf("#");
            }
        }
        printf("\n");
    }
}