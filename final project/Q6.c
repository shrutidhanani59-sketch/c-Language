#include<stdio.h>
#include<conio.h>

int main()
{
   int num;
   int sum=0;
   int i=1;

  
    ptintf("Enter the number:");
    scanf("%d", &num);

   do
   {
    printf("%d", i);
    sum=sum+i;
    i++;
   }while (i<=num);

   printf("Sum=%d", sum);
   
}