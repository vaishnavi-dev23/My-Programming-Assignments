#include<stdio.h>
int main()
{
    int num = 12345,sum;
    int Ld = 12345 % 10;
    int Fd = 12345 / 10000;
    sum = Fd + Ld;
    printf("The sum of first digit and last digit is %d",sum);
}