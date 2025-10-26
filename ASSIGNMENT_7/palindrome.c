#include<stdio.h>
void palindrome(int*);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    palindrome(&num);
}
void palindrome(int *num)
{
     int Ld = *num % 10;
    int Fd = *num / 100;
    if(Ld == Fd)
    {
        printf("The num is palindrome");
    }
    else
    {
        printf("The num is not palindrome");
    }
}
