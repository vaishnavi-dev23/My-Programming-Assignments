#include<stdio.h>
int main()
{
    int arr[10],ele;
    printf("Enter elements of an array:\n");
    for(int i = 0; i < 10; i++)
    scanf("%d",&arr[i]);

    printf("Enter the element to find odd or even: ");
    scanf("%d",&ele);
    {
        if(ele % 2 == 0)
        {
        printf("%d is even",ele);
        }
        else
        {
        printf("%d is odd",ele);
        }
    }
}    