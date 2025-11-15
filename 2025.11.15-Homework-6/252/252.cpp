#include <cstdio>

double power(double a, int n)
{
    if (n == 0){
        return 1;
    }
    if (n < 0){
        return 1 / power(a, -n);
    }
    if (n % 2 == 0) {
        double t = power(a, n / 2);
        return t * t;
    }
    else {
        return a * power(a, n - 1);
    }
}

int main(int argc, char** argv)
{
    double a = 0;
    int n = 0;
    scanf_s("%lf %d", &a, &n);
    printf("%lf", power(a, n));
    return 0;
}