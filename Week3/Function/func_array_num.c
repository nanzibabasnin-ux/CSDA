#include <cs50.h>
#include <stdio.h>

// function prototype
// tells the compiler that a function named print_triangle exists
// it takes an integer array and an integer
void print_triangle(int arr[], int n);

int main(void)
{
    // ask the user for the height of the triangle
    int n = get_int("Height: ");

    // create an array of size n
    // this array will store numbers from 1 to n
    int numbers[n];

    // fill the array with values
    // numbers[0] = 1, numbers[1] = 2, ..., numbers[n-1] = n
    for (int i = 0; i < n; i++)
    {
        numbers[i] = i + 1;
    }

    // pass the array and its size to the function
    print_triangle(numbers, n);
}

// function definition
// this function prints a number triangle
void print_triangle(int arr[], int n)
{
    // outer loop controls the number of rows
    for (int i = 0; i < n; i++)
    {
        // inner loop controls how many numbers are printed per row
        // row 0 -> prints 1 number
        // row 1 -> prints 2 numbers
        // row 2 -> prints 3 numbers
        for (int j = 0; j <= i; j++)
        {
            // print numbers from the array starting at index 0
            printf("%i ", arr[j]);
        }

        // move to the next line after each row
        printf("\n");
    }
}
