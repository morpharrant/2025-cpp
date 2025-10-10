#include <cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);
    printf_s("%d", (n / 2) + (n % 2));
    return 0;
}