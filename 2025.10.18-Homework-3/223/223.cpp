#include <cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    int temp = -1;
    int max = -1;
    int count = 0;

    do {
        scanf("%d", &n);

        if (n > temp) {
            max = temp;
            temp = n;
            count = 1;
        }
        else if (n == temp) {
            count++;
        }
        else if (n > max) {
            max = n;
        }

    } while (n != 0);

    if (count >= 2) {
        printf("%d", temp);
    }
    else {
        printf("%d", max);
    }
    
    return 0;
}