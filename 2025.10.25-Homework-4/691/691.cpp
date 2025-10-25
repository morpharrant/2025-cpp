#include <cstdio>

#define MAX_SIZE 1000

int main(int argc, char** argv)
{
    int counter = 0;
    int n = 0;
    int i = 0;
    scanf_s("%d", &n);
    int arr[MAX_SIZE]{0};

    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &arr[i]);
    }

    int x = 0;
    scanf_s("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            counter++;
        }
    }
    printf("%d", counter);
    return 0;
}