#include<stdio.h>
int main()
{
    int arr[7] = {5,6,7,10,15,72,3};


    for ( int i = 0 ; i < 7 ; i++)
    {
        for ( int j = i+1 ; j < 7 ; j++)
        {
            if(arr[i]>arr[j])
            {
                 int temp = arr[j];
                 arr[j]=arr[i];
                 arr[i]=temp;
            }
        }
    }

    for ( int j = 0 ; j < 7 ; j++)
        {
            printf("%d ", arr[j]);
        }
        printf("\n");
}

