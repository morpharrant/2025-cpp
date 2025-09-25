#include <cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;

    scanf_s("%d", &a);
    scanf_s("%d", &b);

    printf("%d + %d = %d", a, b, a + b);
    
    return 0;
}