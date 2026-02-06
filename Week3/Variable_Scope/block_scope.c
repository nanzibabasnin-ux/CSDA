#include <stdio.h>

int global = 5;  // Global scope - visible everywhere

int main()
{
    int local = 10;  // Local scope - visible only in main()

    printf("Global: %d\n", global);  // ✓ Works!
    printf("Local: %d\n", local);    // ✓ Works!
    return 0;
}

void another_function()
{
    printf("Global: %d\n", global);  // ✓ Still works!
    printf("Local: %d\n", local);    // ✗ ERROR! Can't see main's local
}
