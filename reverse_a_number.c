#include <stdio.h>
int reverse(int N)
{
    int copy, reverse = 0;
    copy = N;
    while (copy > 0)
    {
        reverse = (reverse * 10) + copy % 10;
        copy /= 10;
    }
    printf("the reverse of %d is %d", N, reverse);
}

int main()
{
    int number;
    printf("enter a number");
    scanf_s("%d", &number);
    reverse(number);
}