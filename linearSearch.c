#include<stdio.h>
int main()
{
    int arr[7];
    int flag = 0;

    for( int i = 0 ; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;
    scanf("%d", &key);

    for ( int i = 0 ; i < 7 ; i++)
    {
        if(arr[i]==key)
        {
            printf("Elements %d is found in the array in position %d\n", key, i+1);
            flag=1;
        }
    }

    if(flag==0)
    {
        printf("%d is not found in the array\n", key);
    }
}
