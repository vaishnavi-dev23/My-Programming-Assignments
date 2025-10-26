#include<stdio.h>
void uppercaseLowercase();
int main()
{
    uppercaseLowercase();
}
void uppercaseLowercase()
{
    char ch = 'c';
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Upperchase");
    }
    else
    {
        printf("Lowercase");
    }
}
