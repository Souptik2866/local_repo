#include <stdio.h>
int main()
{
    int number;
    float floating = number;
    printf_s("enter the number : ");
    scanf_s("%d", &number);
    printf("th eno. as integer is %d\n", number);
    printf("the number converted in float %f\n4", floating);
    printf("the conversion is %f", (float)number);
}