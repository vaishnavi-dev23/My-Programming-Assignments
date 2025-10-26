#include<stdio.h>
void upperlowercase(char*);
void main()
{
    char* ch;
    printf("Enter a character: ");
    scanf("%C",&*ch);
    upperlowercase(&*ch);
}
void upperlowercase(char* ch)
{
    if(*ch >= 'A' && *ch <= 'Z')
    {
        printf("Upperchase");
    }
    else
    {
        printf("Lowercase");
    }
}