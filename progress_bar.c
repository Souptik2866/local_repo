#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
const int max_task = 10;
void clear_screen()
{
#ifdef _Win32
    system("cls");
#else
    system("clear");
#endif
}
typedef struct
{
    int id;
    int progress;
    int step;
} Task;
void print(Task task)
{
    int task_no;
    const int bar_length = 10;
    printf("Task %d : [ ", task.id);
    int bars_to_show = (task.progress * bar_length) / 100;
    for (int i = 0; i < bar_length; i++)
    {
        if (i < bars_to_show)
        {
            printf("=");
        }
        else
        {
            printf(" ");
        }
    }
    printf("]");
    printf("%d%%\n", task.progress);
}

int main()
{
    int task_no, progress = 0, i;
    Task task[max_task];
    for (i = 0; i < max_task; i++)
    {
        task[i].id = i + 1;
        task[i].progress = 0;
        task[i].step = rand() % 5 + 1;
    }
    int task_incomplete = 1;
    while (task_incomplete)
    {
        task_incomplete = 0;
        printf("\033[H\033[J");
        for (i = 0; i < max_task; i++)
        {
            task[i].progress += task[i].step;
            if (task[i].progress > 100)
            {
                task[i].progress = 100;
            }
            else if (task[i].progress < 100)
            {
                task_incomplete = 1;
            }
            print(task[i]);
        }
        sleep(1);
    }
    printf("All tasks are completed !");
}