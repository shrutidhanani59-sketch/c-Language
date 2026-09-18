#include<stdio.h>
#include<conio.h>

int main()
{
    printf("sum 1\n:");
    int celsius;
    float temperature;

    printf("Enter the celsius:");
    scanf("%d", &celsius);
    
    temperature=(1.8*celsius)+32;

    printf("The temperature is: %f", temperature);

    printf("");

    printf("\nsum 2:\n");

    int salary;
    float HRA;
    float DA;
    float TA;
    int total;

    printf("Enter the Salary:");
    scanf("%d", &salary);

    printf("Enter the HRA:");
    scanf("%f", &HRA);

    printf("Enter the DA:");
    scanf("%f", &DA);

    printf("Enter the TA:");
    scanf("%f", &TA);

    HRA=(salary*HRA)/100;
    DA=(salary*DA)/100;
    TA=(salary*TA)/100;

    total=salary+HRA+DA+TA;

    printf("Total salary is: %d", total);

    printf("");

    printf("\nsum 3:\n");
    

    int first ;
    int second ;
    int third ;

    printf("Enter the first angle:");
    scanf("%d", &first);

    printf("Enter the second angle:");
    scanf("%d", &second);

    third=180-(first+second);
    
    printf("Third angle is: %d ", third);

}
