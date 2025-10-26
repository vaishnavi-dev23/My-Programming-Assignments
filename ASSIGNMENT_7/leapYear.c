#include<stdio.h>
void leapYear(int*);
void main()
{
  int year;
  printf("Enter the year: ");
  scanf("%d",&year);
  leapYear(&year);
}
void leapYear(int *year)
{
    if ((*year % 4 == 0 && *year % 100 != 0 ) || (*year % 400 == 0))
        printf("The year is leap year.\n");
    else
        printf("The year is not leap year");
}