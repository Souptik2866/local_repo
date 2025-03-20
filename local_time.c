#include <stdio.h>
#include <time.h>

int main()
{
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];

    // Get the current time
    time(&rawtime);

    // Convert to local time
    timeinfo = localtime(&rawtime);

    // Format the time into a string
    strftime(buffer, sizeof(buffer), "Today is %A, %B %d, %Y. Time: %I:%M:%S %p", timeinfo);

    // Print the formatted string
    printf("%s\n", buffer);

    return 0;
}