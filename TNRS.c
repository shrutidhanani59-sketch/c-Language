#include<stdio.h>
#include<conio.h>
int suqure()
{
   int num;
   printf("Enter the num:");
   scanf("%d", &num);

   int sq=num*num;
   return sq;
}

int main()
{
   int result=suqure();
   printf("%d", result);
}