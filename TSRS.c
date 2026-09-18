#include<stdio.h>
#include<conio.h>
int cube(int num)
{
    
    int cube=num*num*num;
    return cube;
}
int main()
{
  int result1=cube(5);
  printf("%d", result1);
}