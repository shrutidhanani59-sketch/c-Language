#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char letter[100]; 

    printf("Enter the letter:");
    scanf("%s", &letter);

    char *p;
    p=&letter;

    int length=p;
    printf("%d", strlen(p));
}