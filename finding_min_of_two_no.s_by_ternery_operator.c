#include <stdio.h>
int main()
{
    int number;
    printf_s("ENTER NUMBER:");
    scanf_s("%d", &number);

    int result = number % 2 == 0 ? number : 0; // ternery operator.
    if (result == number)                      // if true
    {
        printf("%d is even", number);
    }
    else // if false
    {
        printf("%d is odd", number);
    }
    return 0;
}