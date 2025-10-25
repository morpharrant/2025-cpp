#include <cstdio>

#define MAX_SIZE 1000

int main(int argc, char** argv)
{
    int i = 0;
    int n = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int t = 0;
    int arr[MAX_SIZE]{0};
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);

    for (i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    a--;
    b--;
    while (a < b)
    {
        t = arr[a];
        arr[a] = arr[b];
        arr[b] = t;
        a++;
        b--;
    }
    
    c--;
    d--;
    while (c < d)
    {
        t = arr[c];
        arr[c] = arr[d];
        arr[d] = t;
        c++;
        d--;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}