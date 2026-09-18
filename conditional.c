#include<stdio.h>
#include<conio.h>

int main()
{
    int age;

    printf("Enter your age:");
    scanf("%d", &age);

    if(age>18)
    {
        printf("Yourn can vote.");
    }
    else if(age==18) 
    {
       printf("Your are exact 18 yeras old.");
    }
    else
    {
        printf("Your cannot vote");
    }

    
}