#include <cs50.h>
#include <stdio.h>

// function prototype
bool is_prime(int n);

int main(void)
{
    int number = get_int("Enter a number: ");

    if (is_prime(number))
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Not a prime number\n");
    }
}

// function definition
bool is_prime(int n)
{
    // prime numbers must be greater than 1
    if (n <= 1)
    {
        return false;
    }

    // check divisibility from 2 to n-1
    for (int i = 2; i < n; i++)
    {
        if (n %  i== 0)
        {
            return false;
        }
    }

    return true;
}
