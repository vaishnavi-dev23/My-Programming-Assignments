#include<stdio.h>
int main()
{
    int a = 10;
    int b = 50;
    int temp;
    printf("The values of a and b before swapping are %d and %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("The valus of a and b after swapping are %d and %d",a,b);
    return 0;
}