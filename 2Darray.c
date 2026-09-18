#include <stdio.h>
#include <conio.h>

int main()
{
    int rowsize = 3;
    int columnsize = 4;
    int sum=0;

    int arr1[rowsize][columnsize];

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < columnsize; j++)
        {
            printf("Entr the value at [%d][%d]:", i, j);
            scanf("%d", &arr1[i][j]);
            sum=sum+arr1[i][j];
        }
    }

    // output

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < columnsize; j++)
        {
            printf(" %d", arr1[i][j]);
        }
          printf("\n");
          
    }
    printf("Sum=%d", sum);
}