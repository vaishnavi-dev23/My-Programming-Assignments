//factorial of a number = product of all positive integers less than or equal to that no
#include<stdio.h>
int main()
{
    int n = 5,fact = 1;
    for(int i = 1;i <= n;i++)
    fact = fact * i;
    printf("factorial of a no is %d",fact);
}