#include<stdio.h>
void evenOdd(int);
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    evenOdd(num);
}
void evenOdd(int x)
{
   if(x % 2 == 0)
    {
        printf("The no is even");
    }
    else
    {
        printf("The no is odd");
    }
}