#include<stdio.h>
#include<conio.h>

int main()
{
    int a[5]={10,20,30,40,50};

    // int *p;
    // int *p1;
    // int *p2;
    // p= &a[0];
    // p1= &a[1];
    // p2= &a[2];

    // printf("%u =>%d\n", p, *p);
    // printf("%u =>%d\n", p1, *p1);
    // printf("%u =>%d\n", p2, *p2);

    int *p;
    p= &a;

    for(int i=0; i<=4; i++)
    {
        printf("%u=> %d", p+i, *(p+i));
        printf("\n");
    }
    
}