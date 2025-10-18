#include <cstdio>

int main(int argc, char** argv)
{
    int x = 0;
    int y = 0;
    int d = 1;

    scanf_s("%d %d", &x, &y);

    while (x < y) {
        x = (x * 115 + 99) / 100;
        d++;
    }

    printf_s("%d", d);

    return 0;
}