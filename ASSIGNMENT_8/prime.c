#include<stdio.h>
void main()
{
    int arr[10],flag = 0,i;
    printf("Enter elements of an array:\n");
    for(i = 0; i < 10; i++)
    scanf("%d",&arr[i]);
    for(i = 0; i < 10; i++)
    {   
     for(int j = 2;j < i; j++)
     if(i % j == 0)
      {
        flag = 1;
        break;
      }
     }
      if(flag == 0)
     printf("%d",i);
}