#include <cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);
    
    if (n == 1){
        printf_s("%d", 0);
    }
    else if (n % 2 == 0) {
        printf_s("%d", n/ 2);
    }
    else {
        printf_s("%d", n);
    }
    return 0;
}