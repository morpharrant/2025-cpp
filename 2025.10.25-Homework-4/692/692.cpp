#include <cstdio>
#include <cstdlib>

#define MAX_SIZE 1000

int main(int argc, char** argv)
{
    int arr[MAX_SIZE]{0};
    int n = 0;
    scanf_s("%d", &n);
    int x = 0;
    int closest = 1000;
    int i = 0;
    int element = 0;

    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &arr[i]);
    }

    scanf_s("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (abs(x - arr[i]) < abs(x - closest))
        {
            closest = arr[i];
        }
        else if (abs(x - arr[i]) == abs(x - closest))
        {
            if (arr[i] < closest)
            {
                closest = arr[i];
            }
        }
    }
    printf("%d", closest);
    return 0;
}