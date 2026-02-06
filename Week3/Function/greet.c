#include <cs50.h>
#include <stdio.h>

// function prototype
string greet(string name);

int main(void)
{
    string user = get_string("What is your name? ");

    // call the function and store the returned value
    string message = greet(user);

    // print the returned greeting
    printf("%s\n", message);
}

// function definition
// takes a name and returns a greeting string
string greet(string name)
{
    return "Hello!";
}
