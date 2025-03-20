#include <stdio.h>
int main()
{
    int number;
    float floating = number;
    printf("enter the number : ");
    scanf("%d", &number);
    printf("th eno. as integer is %d\n", number);
    printf("the number converted in float %f\n", floating);
    printf("the conversion is %f", (float)number);
}