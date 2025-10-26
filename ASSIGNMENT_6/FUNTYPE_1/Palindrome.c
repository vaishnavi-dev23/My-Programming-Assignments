#include<stdio.h>
void palindrome();
int main()
{
    palindrome();
}
void palindrome()
{
    int x = 565;
    int Fd = x / 100;
    int Ld = x % 10;
    if(Fd == Ld)
    printf("The no is palindrome");
    else
    printf("The no is not palindrome");
}