#include <stdio.h>
int main ()
{
    int hours,seconds,minutes;
    printf("seconds:");
    scanf("%d",&seconds);
    hours = seconds/3600;
    minutes = (seconds%3600)/60;
    seconds = seconds%60;
    printf("%d:%d:%d",hours,minutes,seconds);
    return 0 ;


}