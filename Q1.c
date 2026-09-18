#include<stdio.h>
#include<conio.h>

int main()
{
     int size;
     printf("Enter the array od size: %d", size);
     scanf("%d", &size);

     int arr[size];

     for(int i=0; i<size; i++)
     {
        printf("Enter the value of index : %d",i );
        scanf("%d", &arr[i]);
     }
     for (int i=0; i<size; i++)
     {
        printf("%d\t",arr[i]);
     }

     int max=arr[0];
     for(int i=0; i<size; i++)
     {
        if(arr[0]>max){
            max=arr[i];
        }
     }
     printf("Largest elements =%d", max);
}