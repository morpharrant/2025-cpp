#include <cstdio>

#define MAX_SIZE 1000

int main(int argc, char** argv)
{
    int arr[MAX_SIZE]{0};
    int max = 0;
    int min = 0;
    int i = 0;
    int n = 0;
    scanf_s("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    min = max;

    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            arr[i] = min;
        }
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}