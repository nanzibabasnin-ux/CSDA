#include <cs50.h>
#include <stdio.h>

// function prototype
void print_pattern(int n);

int main(void)
{
    int height = get_int("Height: ");

    print_pattern(height);
}

// function definition
void print_pattern(int n)
{
    // outer loop controls rows
    for (int i = 1; i <= n; i++)
    {
        // inner loop prints numbers from 1 to i
        for (int j = 1; j <= i; j++)
        {
            printf("%i", j);
        }
        printf("\n");
    }
}
