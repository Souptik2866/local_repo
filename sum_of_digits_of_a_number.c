#include <stdio.h>
int sum_of_digits(int N)
{
    int i, a, b, c, sum = 0;
    while (N > 0)
    {
        int digit = N % 10;
        sum += digit;
        N = N / 10;
    }
    return sum;
}

int main()
{
    int number, result;
    printf("enter the number");
    scanf_s("%d", &number);
    result = sum_of_digits(number);
    printf("the sum of digits is %d", result);
}