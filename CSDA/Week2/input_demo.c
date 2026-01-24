#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int age = get_int("Enter your age: ");
    float height = get_float("Enter your height (in meters): ");
    char grade = get_char("Enter your grade: ");
    string name = get_string("Enter your name: ");

    printf("\n--- User Information ---\n");
    printf("Name: %s\n", name);
    printf("Age: %i\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
