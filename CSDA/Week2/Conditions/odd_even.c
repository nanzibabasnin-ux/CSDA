// Program: Check whether a number is odd or even
// Concept: if...else statement

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = get_int("Enter an integer: ");

    // True if remainder is 0
    if (number % 2 == 0)
    {
        printf("%d is an even number.\n", number);
    }
    else
    {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}
