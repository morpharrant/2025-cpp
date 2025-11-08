#include <cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    int i = 0;
    int check = 0;
    scanf_s("%d", &n);
    int arr[n - 1]{0};
    for (i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    for (i = 1; i < n; i++) {
        if (arr[i] * arr[i - 1] > 0) {
            check = 1;
        }
    }
    if (check == 1) {
        printf_s("YES");
    }
    else {
        printf_s("NO");
    }
    return 0;
}