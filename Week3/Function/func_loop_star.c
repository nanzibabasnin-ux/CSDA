#include <cs50.h>
#include <stdio.h>

// function prototype
void print_stars(int n);

int main(void)
{
    int height = get_int("Height: ");

    print_stars(height);
}

// function definition
void print_stars(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
