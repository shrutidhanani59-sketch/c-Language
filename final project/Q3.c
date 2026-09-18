#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    int b;
    int c;

    int largest;

    printf("Enter value of a:");
    scanf("%d", &a);

    printf("Enter value of b:");
    scanf("%d", &b);

    printf("Enter value of c:");
    scanf("%d",&c);

    largest=(a>b)?((a>c)?a:c):((b>c)?b:c);

    printf("The largest number is :%d", largest);
}