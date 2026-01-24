// Program: Grade calculator
// Concept: if...else if...else ladder

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int marks = get_int("Enter marks: ");

    if (marks >= 80)
    {
        printf("Grade: A\n");
    }
    else if (marks >= 60)
    {
        printf("Grade: B\n");
    }
    else if (marks >= 50)
    {
        printf("Grade: C\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}
