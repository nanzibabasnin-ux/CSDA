// Program: Compare two integers
// Concept: Nested if...else

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number1 = get_int("Enter first integer: ");
    int number2 = get_int("Enter second integer: ");

    if (number1 >= number2)
    {
        if (number1 == number2)
        {
            printf("Result: %d = %d\n", number1, number2);
        }
        else
        {
            printf("Result: %d > %d\n", number1, number2);
        }
    }
    else
    {
        printf("Result: %d < %d\n", number1, number2);
    }

    return 0;
}
