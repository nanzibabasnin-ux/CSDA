// Implements a phone book without using structs

#include <cs50.h>   // For get_string()
#include <stdio.h>  // For printf()
#include <string.h> // For strcmp()

int main(void)
{
    // Array storing names
    string names[] = {"Kelly", "David", "John"};

    // Array storing phone numbers
    // Each number corresponds to the name at the same index
    string numbers[] = {"+1-617-495-1000", "+1-617-495-1000", "+1-949-468-2750"};

    // Ask user to enter a name to search
    string name = get_string("Name: ");//target name

    // Loop through all names (Linear Search)
    for (int i = 0; i < 3; i++)
    {
        // strcmp compares two strings
        // It returns 0 when both strings are equal
        if (strcmp(names[i], name) == 0)//
        {
            // If name is found, print the corresponding phone number
            printf("Found %s\n", numbers[i]);

            // Exit program successfully
            return 0;
        }
    }

    // If name was not found after checking all entries
    printf("Not found\n");

    // Exit program indicating failure
    return 1;
}
