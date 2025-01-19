#include <stdio.h>                   // standard input/output library
long int sum(long int a, long int b) // defining a function named as sum with parameters a and b.
{
    return a + b; // returning the function where it was called with valus entered by the user.
}
int main() // main function.
{
    long int c, num_1, num_2;
    printf("enter number 1 : ");
    scanf("%d", &num_1);
    printf("enter number 2 : ");
    scanf("%d", &num_2);
    c = sum(num_1, num_2);              // function calling statement with values enetered by the user.
    printf("The Addition Is : %d ", c); // printing the value after adding.
    return 0;
}
