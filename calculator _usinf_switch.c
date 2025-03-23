#include <stdio.h>
#include <math.h>
int add()
{
    int a, b;
    return a + b;
}
int main()
{
    int num_1, num_2, sum, operations;
    printf("Enter the 1st number:\nEnter the 2nd number\n");
    scanf_s("%d\n%d", &num_1, &num_2);
    printf("enter operation 1: +\n2: -\n3: *\n4: /\n 5: %\n6: **");
    scanf("%d", &operations);

    switch (operations)
    {
    case 1:
        printf("the sum is %d", num_1 + num_2);
        break;
    case 2:
        printf("the difference is %d", num_1 - num_2);
        break;
    case 3:
        printf("the multiply is %d", num_1 * num_2);
        break;
    case 4:
        printf("the division is %d", num_1 / num_2);
        break;
    case 5:
        printf("the remainder is %d", num_1 % num_2);
        break;
    case 6:
        printf("%d to the power of %d  is %d ", num_1, num_2, pow(num_1, num_2));
        break;
    }
}