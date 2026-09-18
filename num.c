#include<stdio.h>
#include<conio.h>

int main()
{
    // for( int i=1; i<=50; i++)
    // {
    //     printf("i=%d\n", i);
    // }

    // for(int i=1; i<=50; i++)
    // {
    // if(i%2==0)
    // {
    //     printf("i=%d\n", i);
    // }
    // }

    // for(char i='a'; i<='z'; i++)
    // {
    //     printf("i= %c\n", i);
    // }

    // int num=123;
    // int count=0;

    // while (num!=0)
    // {
    //     num=num/10;
    //     count++;
    // }
    //  printf("Total Digit= %d\n", count);

    int num=145;
    int sum=0;

    while(num!=0)
    {
        int digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    printf("sum= %d", sum);
    
}