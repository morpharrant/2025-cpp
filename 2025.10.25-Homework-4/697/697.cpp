#include <cstdio>

#define MAX_SIZE 1000

int main(int argc, char** argv)
{
    int i = 0;
    int n = 0;
    int arr[MAX_SIZE]{0};
    scanf_s("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[n - i - 1]);
    }

    return 0;
}