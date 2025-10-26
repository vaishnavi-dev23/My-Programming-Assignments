#include<stdio.h>
int main()
{
    int min = 90;
    int hour = min / 60;
    int rem_min = min % 60;
    printf("The time 90 minutes is equal to %d hour %d minutes",hour,rem_min);
    return 0;
}