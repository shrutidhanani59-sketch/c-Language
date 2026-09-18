#include<stdio.h>
#include<conio.h>

int main()
{
    int a=10;
    printf("Size of a is %zu\n", sizeof(a));

    char b='i';
    printf("Size of b is %zu\n", sizeof(b));

    float c=45.6;
    printf("Size of c is %zu\n", sizeof(c));

    int d="ram";
    printf("Size of d is %zu", sizeof(d));
}