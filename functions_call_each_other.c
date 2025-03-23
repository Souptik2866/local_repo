#include <stdio.h>
float result(float num_1, float num_2)
{
    return num_1 + num_2;
}

float multiply(float z, float r)
{
    float x = result(z, r);
    return x;
}

float print(float t, float s)
{
    float i = multiply(t, s);
    return i;
}

float add(float x, float y)
{
    float w = print(x, y);
    return w;
}

int main()
{
    float a, b, d;
    printf_s("enter value of a\nenter value of b:");
    scanf_s("%f \n %f", &a, &b);
    d = add(a, b);
    printf("the sum is %f", d);
    return 0;
}