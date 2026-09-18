#include<stdio.h>
#include<conio.h>
void add(float first, float second)
{
    float sum=first+second;
    printf("Addition of %0.2f and %0.2f if %0.2f", sum);   
}

void minus(float first, float second)
{
    float minus=first-second;
    printf("minus of %0.2f and %0.2f if %0.2f", minus);
}

void multiply(float first, float second)
{
    float multiply=first*second;
    printf("multiply of %0.2f and %0.2f if %0.2f", multiply);
}

void divide(float first, float second)
{
    float divide=first+second;
    printf("divide of %0.2f and %0.2f if %0.2f", divide);
}

void modulo(float first, float second)
{
     float modulo=(int)first % (int)second;
    printf("modulo of %0.2f and %0.2f if %0.2f", modulo);
}

int main()
{
    int choice;

     printf("Press one for +\n");
     printf("Press one for -\n");
     printf("Press one for *\n");
     printf("Press one for /\n");
     printf("Press one for %\n");
     printf("Press 0 for exit\n");

     int first;
     int second;

     printf("Enter your choice:");
     scanf("%d", &choice);

     printf("Enter the first number:");
     scanf("%d", &first);

     printf("Enter the second number:");
     scanf("%d", second);


     switch(choice)
     {
        case 1:
        add(first, second);
        break;

        case 2:
        minus(first, second);
        break;

        case 3:
        multiply(first, second);
        break;

        case 4:
        divide(first, second);
        break;

        case 5:
       modulo (first, second);
        break;

        default:
        printf("Exit");
        break;
     }
}