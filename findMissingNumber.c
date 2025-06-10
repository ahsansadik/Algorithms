#include <stdio.h>

int findMissingNumber(int arr[], int n)
{
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }
    return total - sum;
}

int main()
{
    int arr[] = {1, 2, 3, 5};
    int n = 5;
    int missing = findMissingNumber(arr, n);
    printf("Missing number: %d\n", missing);
    return 0;
}
