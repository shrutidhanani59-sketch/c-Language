#include <stdio.h>
#include <conio.h>

int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");
    for (int i = 1; i <= 5; i++)
    {
        // space
        for (int s = 1; s <= 5 - i; s++)
        {
            printf(" ");
        }

        // star
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
     printf("\n");
    for (int i = 5; i >= 1; i--)
    {
        // space
        for (int s = 1; s <= 5 - i; s++)
        {
            printf(" ");
        }

        // star
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}