#include<stdio.h>
int main()
{
    int sum = 0,arr[5];
    printf("Enter the elements of an array: ");
    for(int i = 0; i<5 ; i++)
    {
    scanf("%d",&arr[i]);
     sum = sum + arr[i];
    }
    printf("The sum of the given numbers is:%d\n",sum);
}