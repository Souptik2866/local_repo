#include <stdio.h>
int main()
{
    const int max_marks = 67;
    int marks, true;
    printf("enter your marks : ");
    scanf_s("%d", &marks);
    int determine = marks > 80 ? 1 : 0;
    if (determine == 1)
    {
        printf("you have scored high");
    }
    else if (determine == 0)
    {
        int determine = marks >= 50 && marks <= 80 ? 1 : 0;
        if (determine == 1)
        {
            printf("you have scored moderately");
        }
        else
        {
            printf("you have done worse!!");
        }
    }
}