#include <cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    int i = 0;
    scanf_s("%d", &n);
    int arr[n - 1]{0};
    for (i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf_s("%d ", arr[i]);
        }
    }
    return 0;
}