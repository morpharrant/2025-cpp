#include <cstdio>

double power(double a, int n)
{
    int i = 0;
    double out = 1;
    for (i = 0; i < n; i++){
        out *= a;
    }
    return out;
}

int main(int argc, char** argv)
{
    double a = 0;
    int n = 0;
    scanf_s("%lf %d", &a, &n);
    printf("%lf", power(a, n));
    return 0;
}