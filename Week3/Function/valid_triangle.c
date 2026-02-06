#include<stdio.h>
#include<cs50.h>

string valid1_triangle(int a, int b, int c);//function declaration

int main()
{
   int x = get_int("Enter side: ");
   int y = get_int("Enter side: ");
   int z = get_int("Enter side: ");
   string valid1 = valid1_triangle(x,y,z);
   printf("%s", valid1);
   return 0;

}

string valid1_triangle(int a, int b, int c)
{
    if(a>0 && b>0 && c>0)
    {
        if(a+b>c || b+c>a || a+c>b)
        {
            return "Valid Triangle";
        }
        else
        {
            return "Invalid Triangle";
        }
    }
    else
    {
        return "Invalid Triangle";
    }


}

