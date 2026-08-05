#include <cs50.h>
#include <stdio.h>

int collatz(int n);

int main(void)
{
    int n = get_int("Number: ");

    printf("Steps: %i\n", collatz(n));
}

// Returns the number of steps required to reach 1
int collatz(int n)
{
    // Base case
    if (n == 1)
    {
        return 0;
    }

    // Recursive case
    if (n % 2 == 0)
    {
        return 1 + collatz(n / 2);
    }
    else
    {
        return 1 + collatz(3 * n + 1);
    }
}
