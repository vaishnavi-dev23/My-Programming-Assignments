#include<stdio.h>
void evenOdd();
int main()
{
    evenOdd();
}
void evenOdd()
{
    int num = 350;
    if (num % 2 == 0)
    printf("num is even");
    else
    printf("num is odd");
}