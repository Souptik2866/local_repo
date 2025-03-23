#include <stdio.h>
double sum_till_zero(double N) // function definition.
{
    double S = 0;
    do
    {
        printf("enter a number : ");
        scanf_s("%d", &N);
        S += N; // summing up the numbers entered.
    } while (N != 0);
    return S;
}

int main()
{
    printf("welcome to do sum until you enter zero!\n");
    double number, result;
    result = sum_till_zero(number); // function calling statement
    printf("%d is the total sum", result);
    return 0;
}