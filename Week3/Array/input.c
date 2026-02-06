#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int values[5];//declaration

    // Take input using get_int
    for (int i = 0; i < 5; i++)
    {
        values[i] = get_int("Enter value %i: ", i + 1);
    }

    // Print output
    printf("\nYou entered:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", values[i]);
    }

    return 0;
}
