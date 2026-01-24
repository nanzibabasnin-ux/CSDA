#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Take input from the user
    int a = get_int("Enter first number: ");
    int b = get_int("Enter second number: ");

    // Use operators on the input values
    printf("Addition: %i\n", a + b);
    printf("Subtraction: %i\n", a - b);
    printf("Multiplication: %i\n", a * b);
    printf("Division: %i\n", a / b);

    return 0; //tells the operating sys that the program finished successfully
    
}
