#include <stdio.h>
int main()
{
    int number;
    printf("WELCOME TO ZIDDI POSITIVE NUMBER CHECK\n");
    do
    {
        printf("enter a number : ");
        scanf_s("%d", &number);
    } while (number <= 0);
    printf("you have successfully entered a positive no which is %d", number);
    return 0;
}