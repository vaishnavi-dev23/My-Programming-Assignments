//Armstrong no/narcissistic no = sum of it's digits powered to the count of digits is equal to that no
#include<stdio.h>
int main()
{
    int n = 153;
    int rem,sum = 0,temp=n;
    while(n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }
    if(sum == temp)
    printf("The no is armstrong");
    else
    printf("The no is not armstrong");
}