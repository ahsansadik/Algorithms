#include<stdio.h>
int main()
{
    int n, max1, max2;
    scanf("%d", &n);

    int arr[n];

    for ( int i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    max1 =   max2 = arr[0];

    for ( int i = 1 ; i < n ; i++)
    {
        if(arr[i]>max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
    }

    printf("%d\n", max2);

}
