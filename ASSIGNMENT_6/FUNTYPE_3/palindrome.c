#include<stdio.h>
void palindrome(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    palindrome(num);
}
void palindrome(int x)
{
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