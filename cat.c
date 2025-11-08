#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);         // prototype method name
void meow(int n);                   // prototype method name

int main(void)                      // main method
{

      int times = get_positive_int();   // method get_positive_int is used to check if its a positve integer
      meow(times);                      // sends the value to the method called meow

}

void meow(int times)                    // printing method
{
    {
       for(int i = 0; i < times; i++)      // using the input of the main method its used to control as the user wants

    printf("meow\n");
}
}

int get_positive_int(void)             // checking integers method
{
    int n;
    do
    {
        n = get_int("Number: ");        // getting the integer from user
    }
    while (n < 1);                      // check if its a positve integer
    return n;                           // returns the integer
}
