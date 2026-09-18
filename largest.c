#include<stdio.h>
#include<conio.h>

int main()
{
    // int a;
    // int b;
    // int c;

    // printf("Enter the value of a:");
    // scanf("%d", &a);
    // printf("Enter the value of b:");
    // scanf("%d", &b);
    // printf("Enter the value of c:");
    // scanf("%d", &c);

    // if(a>b)
    // {
    //    if(a>c)
    //    {
    //     printf("%d is largest", a);
    //    }
    //    else{
    //     printf("%d is largest", c);
    //    }
    // }
    // else
    // {
    //     if(b>c)
    //     {
    //         printf("%d is largest", b);
    //     }
    //     else
    //     {
    //         printf("%d is largest", c);
    //     }

    // }

    // int num;
  

    // printf("Enter the value of num:");
    // scanf("%d", &num);
    

    // (num%2==0)?printf("Even"):printf("Odd");

    // int score;

    // printf("Enter Your Score:");
    // scanf("%d", &score);

    // if(score>=90)
    // {
    //     printf("A.");
    // }
    // else if(score>=80) 
    // {
    //     printf("B");
    // }
    // else if(score>=70)
    // {
    //     printf("C");
    // }
    // else if(score>=60)
    // {
    //     printf("D");
    // }
    // else if(score>=50)
    // {
    //     printf("E");
    // }
    // else
    // {
    //     printf("F");
    // }
//    minimum number

int a;
int b;
int c;

printf("Enter the value of a:");
scanf("%d", &a);

printf("Enter the value of b:");
scanf("%d", &b);

printf("Enter the value of c:");
scanf("%d", &c);

if(a<b)
{
    if(a<c)
    {
        printf("%d is small", a);
    }
    else
    {
        printf("%d is small", c);
    }
}
else
{
    if(b<c)
    {
        printf("%d is small", b);
    }
    else
    {
        printf("%d is small", c);
    }
}
}