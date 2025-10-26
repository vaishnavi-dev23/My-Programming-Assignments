//strong no = sum of the factorial of it's digit is equal to the no itself
#include<stdio.h>
int main()
{
    int n = 145,temp,rem,fact,sum = 0;
    temp = n;
    while(n>0)
    {
        rem = n % 10;
        fact = 1;
        for(int i = 1; i <= rem; i++)
        fact = fact * i;
        sum = sum + fact;
        n = n / 10;
    }

      if(temp == sum)
      printf("The num is strong");
      else
      printf("The num is not strong");
}