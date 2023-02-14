#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string first = get_string("What is your first name? ");
    string last = get_string("What is your surname? ");
    printf("Hello, %$ %$\n", first, last);
}