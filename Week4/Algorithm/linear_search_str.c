#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // An array of strings
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    // Search for string
    string s = get_string("String: ");

    for (int i = 0; i < 6; i++)

    {   printf("Steps: %i\n",i);
        if (strcmp(strings[i], s) == 0)// when we are using the strcmp function, if both strings are equal to eachother it returns a '0'
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");
    return 0;
}
