#include <stdio.h>
int main()
{
    int num, reverse = 0;
    int copy = num;
    printf("enter a number :");
    scanf_s("%d", &num);
    while (copy > 0)
    {
        reverse = (reverse * 10) + copy % 10;
        copy /= 10;
    }
    if (reverse == copy)
    {
        printf("%d", reverse);
    }
    else
    {
        printf("its not a palindrome number");
    }
    return 0;
}