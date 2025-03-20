#include <stdio.h>
typedef struct
{
    int sum;
    int difference;
    int multiply;
    int divide;
} results;

int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    if (a < b)
    {
        return a - b;
    }
    else
    {
        return b - a;
    }
}

int multiply(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    if (b == 0)
    {
        printf("zero division error");
    }
    else
    {
        return a / b;
    }
}

results arithmetic_operation(int x, int y)
{
    results res;
    res.sum = add(x, y);
    res.difference = subtract(x, y);
    res.multiply = multiply(x, y);
    res.divide = divide(x, y);
    return res;
}

int main()
{
    int num_1, num_2, result;
    printf("enter number 1 :");
    scanf("%d", &num_1);
    printf("enter number 2 :");
    scanf("%d", &num_2);
    results output = arithmetic_operation(num_1, num_2);
    printf("sum is %d\n", output.sum);
    printf("difference is %d\n", output.difference);
    printf("sum is %d\n", output.multiply);
    printf("sum is %d", output.divide);

    return 0;
}