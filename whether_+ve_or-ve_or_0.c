#include <stdio.h>
void check(int number); // function prototype

int main()
{
    int number, result;
    printf("enter the number : ");
    scanf_s("%d", &number);
    check(number); // function called
}
void check(int number) // function defined.
{
    if (number > 0)
    {
        printf("it is a positive number");
    }
    else if (number < 0)
    {
        printf("It is a negative number");
    }
    else
    {
        printf("the number is '0'");
    }
}