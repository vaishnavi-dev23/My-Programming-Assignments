#include<stdio.h>
void leapYear();
int main()
{
    leapYear();
}
void leapYear()
{
    int year  = 2004;
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    printf("The year is leap year");
    else
    {
        printf("The year is not leap year");
    }
}
