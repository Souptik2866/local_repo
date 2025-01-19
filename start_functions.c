#include <stdio.h>              // standard input/output header library.
int sum(long int a, long int b) // defining a function named as "sum" with parameters 'a' and 'b'.
{
    return a + b; // returning the function to where it was called.
}
int main() // main function.
{
    long int num_1, num_2, c;
    printf("Enter number 1 : ");
    scanf("%d", &num_1);
    printf("Enter number 2 : ");
    scanf("%d", &num_2);
    c = sum(num_1, num_2);             // calling statement with parameters num_1,num_2.
    printf("the addition is : %d", c); // printing the value of c.
    return 0;
}