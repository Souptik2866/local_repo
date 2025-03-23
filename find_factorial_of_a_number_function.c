#include <stdio.h>
int factorial(int N)
{
    int i, result = 1;
    for (i = 1; i <= N; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int number, output;
    printf("Enter the number : ");
    scanf_s("%d", &number);
    output = factorial(number);
    printf("the factorial of the number is %d", output);
    return 0;
}