//perfect no = sum ots divisors is equal to that no

#include<stdio.h>
int main()
{
    int i,j,n,sum;
    printf("Enter the number of n: ");
    scanf("%d",&n);

    printf("Perfect numbers from 1 and %d are: \n", n);

    for(i = 1; i <= n; i++)
    {
    sum = 0;
        for(j = 1;j <= i/2; j++)
        {
            if(i % j == 0)
            {
            sum = sum + j;
            }
        }
         if(sum == i)
        {
          printf("%d ", i);
        }   
    }
    return 0;
}


