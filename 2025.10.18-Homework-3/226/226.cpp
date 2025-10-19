#include <cstdio>

int main(int argc, char** argv)
{
    int p = -1;
    int c = 0;
    int count = 0;
    int max = 0;

    do {
        scanf_s("%d", &c);

        if (c == p) {
            count++;
        }
        else {
            count = 1;
        }
        if (count > max) {
            max = count;
        }
        p = c;
    } while (c != 0);

    printf_s("%d", max);

    return 0;
}