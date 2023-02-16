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

// Function to create blocks

void create_Block(int height)
{
    // Rows
    for (int i = 0; i < height; i++)
    {

        // Spaces #1
        for (int j = height - 1; j > i; j--)
        {
            printf(" ");
        }
        // Hashes #1
        for (int k = i; k >= 0; k--)
        {
            printf("#");
        }

        // Middle part
        printf("  ");

        // Hashes #2
        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }

        // New line
        printf("\n");
    }
}