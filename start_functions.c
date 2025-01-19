#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int c;
    c = add(4, 5);
    printf("the addition is %d", c);
    return 0;
}