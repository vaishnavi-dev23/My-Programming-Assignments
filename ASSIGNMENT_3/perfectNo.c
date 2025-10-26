//perfect no = sum of it's divisiors is equal to that no
#include<stdio.h>
int main()
{
    int num=28,sum = 0;
    for(int i = 1;i < num;i++)
    {
        if(num % i == 0)
        sum = sum + i;
    }
    if(sum == num)
    printf("The num is perfect");
    else
    printf("The num is not perfect");
}