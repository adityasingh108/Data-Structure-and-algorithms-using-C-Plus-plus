#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

void displayTime()
{
    time_t rawTime;
   struct tm *timeInfo;
   time(&rawTime);
   timeInfo = localtime(&rawTime); 
   // print time date and hour in format 00:00:00
   printf("Current local time and date: %02d:%02d:%02d ", timeInfo->tm_hour, timeInfo->tm_min, timeInfo->tm_sec);
    printf("Current local time and date: %02d:%02d:%02d ", timeInfo->tm_hour, timeInfo->tm_min, timeInfo->tm_sec);
}

int main()
{
    while (1)
    {
        system("cls");
        displayTime();
        sleep(1);
    }
    return 0;
    
}