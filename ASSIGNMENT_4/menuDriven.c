#include<stdio.h>
int main()
{
    int num,choice,temp,rev,sum,digit,i,flag,rem;

    printf("Enter a number: ");
    scanf("%d",&num);
    
    do
    {
        printf("-----MENU-----\n");
        printf("1.Check even or odd\n");
        printf("2.Check prime or not\n");
        printf("3.Check positive,negative or zero\n");
        printf("4.Check palindrome or not\n");
        printf("5.Reverse the number\n");
        printf("6.Find sum of digits\n");
        printf("7.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
        case 1:
            if(num % 2 == 0)
            printf("%d is even\n",num);
            else
            printf("%d odd\n",num);
            break;

        case 2:
            flag = 0;
            for(i = 2; i <= num/2; i++)
            {
                if(num % i == 0)
                {
                flag = 1;
                break;
                }
            }
            if(flag == 0)
            printf("%d is a prime number\n",num);
            else
            printf("%d is not a prime number\n",num);
            break;

        case 3:
            if(num < 0)
            printf("%d is negative\n",num);
            else if("num > 0")
            printf("%d is positive\n",num);
            else
            printf("%d is zero",num);
            break;

        case 4:
            temp = num;
            rev = 0;
            while(temp != 0)
            {
              rem = num % 10;
              rev = rev * 10 + rem;
              temp = temp / 10;
            }
            if(num == rev)
            printf("%d is a palindrome\n",num);
            else
            printf("%d is not a palindrome\n",num);
            break;


        case 5:                                          
            temp = num;                  //store original num
                rev = 0;
            while(temp != 0)
            {   
                rem = temp % 10;        //extract last digit
                rev = rev  * 10 + rem;  //build reverse number
                temp=temp / 10;         //remove last digit 
            }
            printf("Reverse of %d is %d\n", num, rev);
            break;


        case 6:
            temp = num;
            sum = 0;
            while(temp != 0)
            {
                sum = sum + temp % 10;
                temp = temp / 10;
            }
            printf("sum of digits in %d is %d\n",num,sum);
            break;

        case 7:
            printf("Exit program\n");
            break;

        default:
            printf("Please enter a valid choice....\n");
        }
        
    }
    while(choice != 7);
    return 0;
}