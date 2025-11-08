#include <cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    int i = 0;
    int count = 0;
    scanf_s("%d", &n);
    int arr[n - 1]{0};
    for (i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    for (i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            count++;
        }
    }
    printf_s("%d", count);
    return 0;
}