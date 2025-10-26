#include<stdio.h>
void vowelconsonant(char ch);
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
}
void vowelconsonant(char ch)
{
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        char lower = (ch >= 'A' && ch <= 'Z')? ch + 32 : ch;

        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
        {
            printf("%c is a vowel.\n",ch);
        }
        else
        {
            printf("%c is a consonant.\n",ch);
        }
    }
    else
    {
        printf("Invalid input! Please enter an alphabet.\n");
    }
}
