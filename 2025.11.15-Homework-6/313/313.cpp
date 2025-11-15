#include <cstdio>

int C(int n, int k)
{
    if (k == 0 || k == n){
        return 1;
    }
    return (C(n - 1, k - 1) + C(n - 1, k));
}

int main(int argc, char** argv)
{
    int n = 0;
    int k = 0;
    scanf_s("%d %d", &n, &k);
    printf("%d", C(n, k));
    return 0;
}