#include <stdio.h>
#include <conio.h>

int main()
{
    // Printf("Sum no 1");
    int num;

    printf("Enter the value of num:");
    scanf("%d", &num);

    if (0 < num)
    {
        printf("number is positive");
    }
    else
    {
        printf("number is negative");
    }

    printf("\n");
    printf("\n");

    printf("sum 2\n");

    int a;
    int b;
    int c;
    int d;

    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("Enter the value of c:");
    scanf("%d", &c);
    printf("Enter the value of d:");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
                printf("%d is greatest", a);
            else
                printf("%d is greatest", d);
        }
        else
        {
            if (c > d)
                printf("%d is greatest", c);
            else
                printf("%d is greatest", d);
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
                printf("%d is greatest", b);
            else
                printf("%d is greatest", d);
        }
        else
        {
            if (c > d)
                printf("%d is greatest", c);
            else
                printf("%d is greatest", d);
        }
    }
    printf("\n");
    printf("\n");
    printf("Sum no 3");

    int units;
    int bill;

    printf("Enter the Units:");
    scanf("%d", &units);

    if (units < 100)
    {
        bill = units * 2;
        printf("%d", bill);
    }
    else if (units > 100 && units <= 200)
    {
        bill = units * 3;
        printf("%d", bill);
    }
    else
    {
        bill = units * 5;
        printf("%d", bill);
    }

    printf("\n");
    printf("\n");
    printf("Sum no 4");

    float temperature;

    printf("Enter the Temperture:");
    scanf("%f", &temperature);

    if (temperature > 35)
    {
        printf("Very Hot");
    }
    else if (temperature < 25 && temperature > 35)
    {
        printf("Hot");
    }
    else if (temperature > 15 && temperature < 24)
    {
        printf("Normal");
    }
    else
    {
        printf("Cold");
    }

    printf("\n");
    printf("\n");
    printf("Sum no 5");

    int mark;
    char grade;

    printf("Enter your mark:");
    scanf("%d", &mark);

    if (mark >= 90)
    {
        grade = 'A';
    }
    else if (mark >= 80)
    {
        grade = 'B';
    }
    else if (mark >= 70)
    {
        grade = 'C';
    }
    else if (mark >= 30)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    switch (grade)
    {
    case 'A':
    {
        printf("A-Excellent");
        break;
    }
    case 'B':
    {
        printf("B-Very Good");
        break;
    }
    case 'C':
    {
        printf("C-Good");
        break;
    }
    case 'D':
    {
        printf("D-Pass");
        break;
    }
    case 'F':
    {
        printf("F-Fail");
        break;
    }
    }
    printf("\n");
    printf("\n");
    printf("Sum no 6");

    int a;
    int b;

    float sum;
    float minus;
    float mul;
    float divide;
    float mod;

    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);

    char choice;
    printf("Enter your choice:");
    scanf(" %c", &choice);

    switch (choice)
    {
    case '+':
        sum = a + b;
        printf("Sum =%0.2f", sum);
        break;

    case '-':
        sum = a - b;
        printf("minus =%0.2f", minus);
        break;

    case '*':
        sum = a * b;
        printf("mul =%0.2f", mul);
        break;

    case '/':
        sum = a / b;
        printf("divide =%0.2f", divide);
        break;

    case '%':
        sum = a % b;
        printf("mod =%0.2f", mod);
        break;

    default:
        printf("Wrong choice");
    }
}