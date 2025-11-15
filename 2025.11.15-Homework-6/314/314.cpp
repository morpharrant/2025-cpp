#include <cstdio>

int tower(int n, int a, int b, int c)
{
    if (n == 0){
        return 0;
    }
    tower(n - 1, a, c, b);
    printf("Disk %d move from %d to %d\n", n, a, b);
    tower(n - 1, c, b, a);
    return 0;
}

int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);
    tower(n, 1, 2, 3);
    return 0;
}