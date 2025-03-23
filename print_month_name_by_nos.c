#include <stdio.h>
const char *show_month(int month)
{
    switch (month)
    {
    case 1:
        return "JANUARY";
        break;
    case 2:
        return "FEBRUARY";
        break;
    case 3:
        return "MARCH";
        break;
    case 4:
        return "APRIL";
        break;
    case 5:
        return "MAY";
        break;
    case 6:
        return "JUNE";
        break;
    case 7:
        return "JULY";
        break;
    case 8:
        return "AUGUST";
        break;
    case 9:
        return "SEPTEMBER";
        break;
    case 10:
        return "OCTOBER";
        break;
    case 11:
        return "NOVEMBER";
        break;
    case 12:
        return "DECEMBER";
        break;
    default:
        printf("please enter vaules between (1-12).");
    }
}

int main()
{
    int month;
    printf("enter month number : ");
    scanf_s("%d", &month);
    const char *name = show_month(month);
    printf_s("%s", name);
}