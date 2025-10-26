#include<stdio.h>
int main()
{
    int num = 121;
    int Ld = num % 10;
    int Fd = num / 100;
    if(Ld == Fd)
    printf("The num is palindrome");
    else
    printf("The num is not palindrome");
}