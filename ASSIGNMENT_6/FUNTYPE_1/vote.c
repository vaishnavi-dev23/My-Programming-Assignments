#include<stdio.h>
void eligibleVote();
int main()
{
    eligibleVote();
}
void eligibleVote()
{
    int age = 23;
    if(age >= 18)
    printf("The person is eligible to vote");
    else printf("Person is not eligible to vote");
}