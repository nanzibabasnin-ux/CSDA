#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        numbers[i] = get_int("Enter number %i: ", i + 1);
    }

    //printf("Array elements:\n");

    for (int i = 0; i < 5; i++)
    {
        //printf("%i\n", numbers[i]);
        sum = sum + numbers[i];
    }
    //printf("%d", sum);
    float avg = sum/5;

    printf("%2.f\n", avg);

    return 0;
}
