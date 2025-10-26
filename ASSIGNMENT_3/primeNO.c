#include<stdio.h>
void isPrime();
int main()
{
    isPrime();
}
void isPrime()
{
    int num = 7,flag=0;
    for(int i = 2; i < num; i++)
    if(num % i == 0)
    {
        flag = 1;
        break;
    }
    if(flag == 0)
    printf("The num is prime");
    else
    printf("num is not prime");
}
