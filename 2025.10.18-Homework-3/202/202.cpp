#include <cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int first = 1;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    for (int x = -100; x <= 100; x++) {
        if ((a * x * x * x) + (b * x * x) + (c * x) + d == 0) {
            if (!first) {
                printf(" ");
            }
            printf("%d", x);
            first = 0;
        }
    }

    return 0;
}