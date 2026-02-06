#include <cs50.h>
#include <stdio.h>

// function prototype
bool valid_triangle(float a, float b, float c);

int main(void)
{
    float x = get_float("Enter side 1: ");
    float y = get_float("Enter side 2: ");
    float z = get_float("Enter side 3: ");

    if (valid_triangle(x, y, z))
    {
        printf("Valid triangle\n");
    }
    else
    {
        printf("Invalid triangle\n");
    }
}

// function definition
bool valid_triangle(float a, float b, float c)
{
    // all sides must be positive
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return false;
    }

    // triangle inequality theorem
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        return false;
    }

    return true;
}
