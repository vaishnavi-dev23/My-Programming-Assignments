#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);

    if( age >= 0 && age < 12)
    {
    printf("This is child");
    }
    else if(age>=12 && age<=19)
    {
    printf("This is teenager");
    }
    else if(age >= 20 && age<=59)
    {
    printf("Adult");
    }
    else if(age >= 60)
    {
    printf("senior");
    }
    else
    {
    printf("Enter proper age");
    }
}