#include<stdio.h>
#include<conio.h>

// void sum(int a, int b)
// {
//    int sum=a+b;
//    printf("Sum=%d\n", sum);
// }
// int main()
// {
//     sum(4,6);
//     sum(125689,485126);
// }
// void cube(int a)
// {
//    int cube=a*a*a;
//    printf("cube=%d\n",cube );
// }
// int main()
// {
//     cube(5);
    
// }
// void num(int num)
// {
//    if(num % 3 && num % 5)
//    {
//         printf("Number is divisible by both 3 & 5");
//    }
//    else
//    {
//         printf("Number is not divisible by both 3 & 5");
//    }
// }
// int main()
// {
//     num(9);
    
// }

int main()
{
    int num;

    printf("Enter the number:");
    scanf("%d", &num);
    
    if(num % 3==0 && num % 5==0)
   {
        printf("Number is divisible by both 3 & 5");
   }
   else
   {
        printf("Number is not divisible by both 3 & 5");
   }

}