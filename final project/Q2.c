#include<stdio.h>
#include<conio.h>

int main()
{
    int units;
    int bill;
    printf("Enter the Units:");
    scanf("%d", &units);

    if(units<=100)
    {
       bill=units*2;
       printf("%d", bill);
    }
    else if(units>100 && units<200)
    {
        bill=units*3;
        printf("%d", bill);
    }
    else
    {
        bill=units*5;
        printf("%d", bill);
    }
}