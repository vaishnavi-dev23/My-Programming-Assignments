#include<stdio.h>
int main()
{   
    int n,i,temp,sum=0,rem,count,res,j;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    printf("Armstrong numbers from 1 to %d are: \n",n);

    for(i = 1;i <= n;i++)
    {
        temp = i;
        sum = 0;
        count = 0;

        while(temp > 0)
        {
            count ++;
            temp = temp / 10;
        }
        temp = i;
        while(temp > 0){
        rem = temp % 10;
        res = 1;
        for(j = 1; j <= count; j++)
        {
            res = res * rem;
        }
        sum = sum + res;
        temp = temp / 10;
    }
    if(sum == i)
     printf("%d ", i);
}    
    printf("\n");
    return 0;
}