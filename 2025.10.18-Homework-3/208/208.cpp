#include <cstdio>

int main(int argc, char** argv)
{
    int a0 = 0;
    int a1 = 1;
    int an = 0;
    int n = 0;

    scanf_s("%d", &n);

    if (n == 0) {
        printf_s("%d", a0);
        return 0;
    }

    if (n == 1) {
        printf_s("%d", a1);
        return 0;
    }

    while (n-- > 1) {
        an = a0 + a1;
        a0 = a1;
        a1 = an;
    }

    printf_s("%d", an);
    
    return 0;
}