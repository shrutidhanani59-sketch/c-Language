#include <stdio.h>
#include <conio.h>
void cube(int rowsize, int columnsize, int a[rowsize][columnsize])
{
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < columnsize; j++)
        {
            int c = a[i][j] * a[i][j] * a[i][j];
            printf("%d ", c);
        }
        printf("\n");
    }
}
int main()
{
    int size;
    
    printf("Enter arrar size:");
    scanf("%d", &size);

    int rowsize = size;
    int columnsize = size;

    int a[rowsize][columnsize];
    printf("\n");

    printf("Enter array elements:\n");

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < columnsize; j++)
        {
            printf("a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\ncube of array elements:\n");

    cube(rowsize, columnsize, a);
}