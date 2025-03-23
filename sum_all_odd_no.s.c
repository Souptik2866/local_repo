#include <stdio.h>
void sum(int number) // defining function named sum
{
    int i, result = 0;
    for (i = 1; i <= number; i++)
    {
        if (i % 2 != 0)
        {
            result += i;
        }
    }
    printf("the sum of all the odds from 1 to %d is %d", number, result); // final rtesult to be printed.
}

int main()
{
    int N, final;
    printf("PRINT SUM OF ALL ODDS FROM 1 TO N");
    printf("enter the number upto sum of only odds to be calculated");
    scanf_s("%d", &N); // no. upto which sum of all the odds to be done.
    sum(N);            // calling sum function
    return 0;
}