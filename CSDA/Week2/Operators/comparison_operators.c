#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Take input from the user
    int marks = get_int("Enter marks: ");

    printf("marks >= 50: %i\n", marks >= 50);
    printf("marks == 100: %i\n", marks == 100);
    printf("marks != 0: %i\n", marks != 0);

    // These expressions do not give out results as numbers
    // They give true (1) or false (0)

    return 0;
}
