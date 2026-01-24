// Program: Check if a number is negative
// Concept: Simple if statement

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = get_int("Enter an integer: ");

    // True if number is less than 0
    if (number < 0)
    {
        printf("You entered a negative number.\n");
    }

    printf("The if statement is easy.\n");

    return 0;
}
