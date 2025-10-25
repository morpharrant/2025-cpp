#include <cstdio>

#define MAX_SIZE 1000

int main(int argc, char** argv)
{
    int n = 0;
    int l = 0;
    int r = 0;
    int i = 0;
    int max = -1001;
    int maxi = 0;
    scanf_s("%d", &n);
    int arr[MAX_SIZE]{0};

    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &arr[i]);
    }

    scanf_s("%d %d", &l, &r);

    for (i = l - 1; i < r; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxi = i + 1;
        }
    }
    printf("%d %d", max, maxi);
    return 0;
}