#include<stdio.h>
#include<conio.h>

int main()
{
  int num;

  printf("Enter the number:");
  scanf("%d", &num);

  if(num>0)
  {
    if(num % 2 == 0)
    {
        printf("Number is positive even");
    }
    else
    {
        printf("Number is positive odd");
    }
  }
  else if(num<0)
  {
    printf("Number is nagative");
  }
  else
  {
    printf("Number is zero");
  }
}