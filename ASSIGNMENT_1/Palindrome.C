#include<stdio.h>
int main()
{
    int x = 786;
    int Ld = x % 10;
    int Fd = x / 100;
    if(Ld == Fd)
    {
        printf("The no is palindrome");
    }
    else
    {
        printf("The no is not palindrome");
    }
}