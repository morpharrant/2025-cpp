#include <cstdio>

int main(int argc, char **argv) {
    int a = 0;
    int b = 0;
    int c = 0;
    int var = 0;
    scanf_s("%d %d %d", &a, &b, &c);

    if(a == 0 && b == 0 && c == 0) {
        printf("0");
    } 
    else {
        if(a != 0) {
            printf_s("%d", a);
            var = 1;
        }

        if(b != 0) {
            if(var && b > 0) {
                printf_s("+");
            }
            if(b == -1) {
                printf_s("-");
            }
            else if(b != 1 && b != -1) {
                printf_s("%d", b);
            }
            printf_s("x");
            var = 1;
        }

        if(c != 0) {
            if(var && c > 0) {
                printf_s("+");
            }
            if(c == -1) {
                printf_s("-");
            }
            else if(c != 1 && c != -1) {
                printf_s("%d", c);
            }
            printf_s("y");
            var = 1;
        }
    }
    return 0;
}