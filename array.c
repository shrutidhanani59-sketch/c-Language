#include<stdio.h>
#include<conio.h>

int main()
{
    // int arr1[5]= {11,12,13,14,15};
    // int arr1[5];

    // arr1[0]=11;
    // arr1[1]=12;
    // arr1[2]=13;
    // arr1[3]=14;
    // arr1[4]=15;

    // printf("%d\n", arr1[0]);
    // printf("%d\n", arr1[1]);
    // printf("%d\n", arr1[2]);
    // printf("%d\n", arr1[3]);
    // printf("%d\n", arr1[4]);

    // use for loop

    int size=10;
    int arr1[size];

    for (int i=0; i<size; i++)
    {
        printf("enter the value of index %d:", i);
        scanf("%d", &arr1[i]);
    }

    for(int i=0; i<size;i++)
    {
        printf("arr[%d]=%d\n", i, arr1[i]);
    }


}