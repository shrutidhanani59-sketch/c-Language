#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    int remainder;
    int reversed=0;

    printf("Enter the number:");
    scanf("%d", &num);

    printf("original Number: %d\n", num);

    while (num!=0)
    {
        remainder = num % 10;          
        reversed = reversed * 10 + remainder; 
        num = num / 10;
    }

    printf("Reversed Number: %d\n", reversed);
    
}