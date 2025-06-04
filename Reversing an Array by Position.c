#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];

    for ( int i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = i+1 ; j < n ; j++)
        {
            int temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }

    for ( int i = 0 ; i < n ; i++)
    {
        printf("%d ", arr[i]);
    }

}
