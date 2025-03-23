#include <stdio.h>
void multiplication_table(int number)
{
    int i = 1, result;
    while (i != 11)
    {
        result = number * i;
        printf("%d\n", result);
        i++;
    }
}
int main()
{
    int number;
    printf("enter the number");
    scanf_s("%d", &number);
    multiplication_table(number);
    return 0;
}