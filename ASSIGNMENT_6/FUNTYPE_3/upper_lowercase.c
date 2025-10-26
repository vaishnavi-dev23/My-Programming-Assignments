#include<stdio.h>
void upperLowerCase(char ch);
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    upperLowerCase(ch);
}
void upperLowerCase(char ch)
{
   if(ch >= 'A' && ch <= 'Z')
    {
        printf("Upperchase");
    }
    else
    {
        printf("Lowercase");
    }
}