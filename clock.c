#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    char display[100];
    int choice;

    printf("Choose the time format\n1: 12HR format(default)\n2: 24HR format\nEnter your choice:");
    scanf_s("%d", &choice);
    time_t now = time(&now);
    struct tm *current_time;
    current_time = localtime(&now);
    while (1)
    {
        if (choice == 1)
        {
            strftime(display, sizeof(display), "%I: %M : %S %p ", current_time);
            printf("current time : %s", display);
        }
        else if (choice == 2)
        {
            strftime(display, sizeof(display), " %d %A %B  %H: %M : %S  %Y", current_time);
            printf("current time : %s \n", display);
        }
        else
        {
            printf("wrong choice");
        }

#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
        sleep(1);
    }
}
