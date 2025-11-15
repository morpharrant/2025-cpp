#include <cstdio>

int phi(int n)
{
    if (n == 0 || n == 1){
        return 1;
    }
    int a = 1;
    int b = 1;
    for (int i = 2; i <= n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);
    printf("%d", phi(n));
    return 0;
}