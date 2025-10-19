#include <cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    int temp = 0;
    int count = 0;
    int max = 0;
    int i = 0;
    scanf("%d", &n);

    for (i; i < n; i++) {
        scanf("%d", &temp);

        if (temp > 0) {
            count++;
            if (count > max) {
                max = count;
            }
        } else
        {
            count = 0;
        }
    }

    printf("%d", max);

    return 0;
}