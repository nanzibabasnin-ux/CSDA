#include <cs50.h>
#include <stdio.h>

long long factorial(int n);

int main(void)
{
    int n = get_int("Enter a non-negative integer: ");

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    printf("%d! = %lld\n", n, factorial(n));
}

// Recursive function
long long factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
