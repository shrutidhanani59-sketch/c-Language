#include<stdio.h>
#include<conio.h>

int main()
{
    int a=5;
    int *p;
    p = &a;

    printf("Address of %u\n", p);

    int b=5;
    int *p2;
    p = &b;

    printf("Address of %u", p2+1);

   
}