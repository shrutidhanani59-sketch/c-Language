#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    int factorial=1;

    printf("Enter the number:");
    scanf("%d", &num);

    for(int i=1; i<=num; i++)
    {
       factorial= factorial*i;
    }

    printf("factorial is %d is: %d", num, factorial);
}