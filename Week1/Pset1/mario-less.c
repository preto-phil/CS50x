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
    while (height < 1 || height > 8);
    return height;
}

//// Function to create blocks


// If statement version
/* 
void create_Block(int height)
{
    for (int i = 1; i <= height; i++)
    {    
        for (int j = height; j > 0; j--)
        {
            if (j > i)
            {
                printf(" ");
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
*/

// For loop version

void create_Block(int height)
{
    // Rows
    for (int i = 0; i < height; i++)
    {    
        // Spaces
        for (int j = height - 1; j > i; j--)
        {
            printf(" ");
        }
        // Hashes
        for (int k = i; k >= 0; k--)
        {
            printf("#");
        }
        // New line
        printf("\n");
    }
}