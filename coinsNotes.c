#include<stdio.h>
int main()
{
    int rem = 576;
    int arr[8]={500,200,100,50,20,10,5,2,1};
    int res[8];

    for (int i = 0; i < 8 ; i++)
    {
        res[i] = rem/arr[i];
        rem = rem%arr[i];
    }

    for (int i = 0; i < 8 ; i++)
    {
        printf("%d", res[i]);
    }
}
