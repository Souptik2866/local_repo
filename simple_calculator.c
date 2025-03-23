#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void calculator(int num_1, int num_2) // definition of the function
{
    int n, result;

    do
    {
        printf("choose one of the following options : \n");
        printf("Add :1 \nSubtract : 2\nMultiply : 3\nDivide : 4\nModulus : 5 \nPower : 6\nExit : 7\n");
        printf("enter the 1st number : ");
        scanf("%d", &num_1);
        printf("enter the 2st number : ");
        scanf("%d", &num_2);
        printf("Enter your choice : ");
        scanf("%d", &n);
        if (n == 1) // addition
        {
            printf("\t   result of operation is : %d\n", num_1 + num_2);
        }
        else if (n == 2) // subtraction
        {

            printf("\t   result of operation is : %d\n", num_1 - num_2);
        }
        else if (n == 3) // multiplication
        {
            printf("\t   result of operation is : %d\n", num_1 * num_2);
        }
        else if (n == 4) // division
        {
            if (num_2 == 0)
            {
                printf("\t   cannot be divided by zero!!\n");
            }
            else
            {
                printf("\t   result of operation is : %d\n", num_1 / num_2);
            }
        }
        else if (n == 5) // modulation
        {
            if (num_2 == 0)
            {
                printf("\t   ERROR IN CALCULATION!!\n");
            }
            else
            {
                printf("\t   result of operation is : %d\n", num_1 % num_2);
            }
        }
        else if (n == 6) // powering
        {
            int power = pow(num_1, num_2);
            printf("\t\t\tresult of operation is : %d\n", power);
        }
        else if (n == 7)
        {
            break;
        }

    } while (n != 7);
}

int main()
{
    int a, b, result;
    printf("welcome to the world of cacluations :\n ");
    calculator(a, b); // called function.
    return 0;
}