#include <cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    int i = 0;
    int t = 0;
    scanf_s("%d", &n);
    int arr[n - 1]{0};
    for (i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    for (i = 0; i < (n / 2); i++) {
        t = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = t;
    }
    for (i = 0; i < n; i++) {
        printf_s("%d ", arr[i]);
    }
    return 0;
}