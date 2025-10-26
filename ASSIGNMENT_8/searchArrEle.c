#include<stdio.h>
int main()
{
    int arr[5],num,found = 0;
    printf("Enter th elements of an array:\n");
    for(int i = 0; i < 5; i++)
    scanf("%d",&arr[i]);

    printf("Enter the element to search: ");
    scanf("%d",&num);
    for(int i = 0; i < 5; i++)
    {
     if(num == arr[i])
     {
     printf("elements is found at index %d",i);
     found = 1;
     break;
    }
    
   }
   if(found == 0)   
   printf("Element is not found");
}    