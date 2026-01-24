#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Take input from the user
    int age = get_int("Enter your age: ");

    // We are asking two questions at once
    // Is age >= 18?
    // Is age <= 25?
    // This is how a program is able to make complex decisions
    printf("age >= 18 && age <= 25: %i\n", age >= 18 && age <= 25);

    return 0;
}
