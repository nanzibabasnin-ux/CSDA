#include <cs50.h>
#include <stdio.h>

int main()
{
    // Take input from the user
    int x = get_int("Enter a number: ");

    x = x + 1;
    printf("x is %i\n", x);

    x += 5;
    printf("x is %i\n", x);

    x++;
    printf("x is %i\n", x);

    x--;
    printf("x is %i\n", x);

    // Different ways to write the same idea

    return 0;
}
