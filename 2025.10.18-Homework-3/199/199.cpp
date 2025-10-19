#include <cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int nok = 0;
    scanf_s("%d %d", &a, &b);
    int A = a;
    int B = b;

    while (a != b) {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }

    nok = (A / a) * B;

    printf_s("%d", nok);

    return 0;
}