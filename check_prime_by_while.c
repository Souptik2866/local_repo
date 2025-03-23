#include <stdio.h>
int check_prime(int N)
{
    int i = 2;
    for (i; i < N; i++)
    {
        if (N % i == 0)
        {
            printf("its not a prime number");
            return 0;
        }
    }
    printf("its a prime number");
}

int main()
{
    int N;
    printf("enter the number");
    scanf_s("%d", &N);
    check_prime(N);
}