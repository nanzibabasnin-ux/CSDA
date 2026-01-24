// Program: Factorial using a loop
// Concept: for loop + accumulation
// Concept: Repeated multiplication using a loop
//
// Factorial definition:
// factorial of n = n × (n-1) × (n-2) × ... × 1
// Example: 4! = 4 × 3 × 2 × 1 = 24

#include <cs50.h>
#include <stdio.h>

int main(void)
{   // Take input from the user
    int num = get_int("Enter a non-negative integer: ");
    // We start factorial at 1
    // Why?
    // Because multiplying by 0 would make everything 0
    int factorial = 1;
    // This loop repeats multiplication
    // i starts from 1 and goes up to num

    for (int i = 1; i <= num; i++)
    {
        // Multiply the current factorial value by i
        factorial *= i;
    }
     // Print the final result

    printf("Factorial of %i is %i\n", num, factorial);

    return 0;
}
