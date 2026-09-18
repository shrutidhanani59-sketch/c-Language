#include<stdio.h>
#include<conio.h>

int main()
{
    // implicit
   int a = 10; 
   float b = 10.5;
   
   float sum=a+b;
   printf("sum is: %f", sum);

    // explicit

    int a = 10;
    float b = 10.5;

    float sum=a+(int)b;
    printf("sum is: %f", sum);

   

    float x;
    float y;
    float sum;

    printf("Enter the value of X:");
    scanf("%f", &x);

    printf("Enter the value of Y:");
    scanf("%f", &y);

    sum=(x+y)*2;

    printf("Sum is: %f", sum);

    float x;
    float y;
    float sum;

    printf("Enter the value of X:");
    scanf("%f", &x);

    printf("Enter the value of Y:");
    scanf("%f", &y);

    sum=(x-y)*2;

    printf("Sum is: %f", sum);

    float x;
    float y;
    float sum;

    printf("Enter the value of X:");
    scanf("%f", &x);

    printf("Enter the value of Y:");
    scanf("%f", &y);

    sum=(x*y)*3;

    printf("Sum is: %f", sum);

    int a;

    printf("Enter the number of a:");
    scanf("%d", &a);
    if(a>0)
    {
        printf("Number is positive:");
    }
    else if(a==0)
    {
        printf("Number is zero");
    }
    else
    {
        printf("Number is nagitive:");
    }
}
