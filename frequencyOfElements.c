#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[100] = {0};
    int i, j, visited;

    for (i = 0; i < n; i++)
    {
        visited = 0;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                visited = 1;
                break;
            }
        }
        if (!visited)
        {
            int count = 1;
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
            printf("%d: %d %s\n", arr[i], count, count > 1 ? "times" : "time");
        }
    }

    return 0;
}
