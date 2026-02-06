#include <cs50.h>
#include <stdio.h>

// function prototype
void print_triangle(int n);

int main(void)
{
    int height = get_int("Height: ");

    print_triangle(height);
}

// function definition
void print_triangle(int n)
{
    // outer loop controls rows
    for (int i = 1; i <= n; i++)
    {
        // inner loop prints the same number i, i times
        for (int j = 1; j <= i; j++)
        {
            printf("%i ", i);
        }
        printf("\n");
    }
}
