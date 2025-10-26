#include<stdio.h>
void ageCheck(int age);
void main()
{
    int age;
    printf("Enter the age of a person: ");
    scanf("%d",&age);
    ageCheck(age);

}
void ageCheck(int age)
{
    if(age >= 18)
    printf("The person is eligible to vote.\n");
    else 
    printf("Person is not eligible to vote.\n");
}