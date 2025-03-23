#include <stdio.h>
void grade(int point)
{
    if (point > 90)
    {
        printf("A");
    }
    else if (point >= 75 && point <= 90)
    {
        printf("B");
    }
    else if (point >= 60 && point <= 75)
    {
        printf("C");
    }
    else if (point >= 30 && point <= 60)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
}

int main()
{
    int marks;
    printf("enter the marks : ");
    scanf_s("%d", &marks);
    grade(marks);
}