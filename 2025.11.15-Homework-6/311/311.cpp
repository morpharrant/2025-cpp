#include <cstdio>

double power(double a, int n)
{
    if (n == 0){
        return 1;
    }
    double t = power(a, n / 2);
    if (n % 2 == 0){
        return t * t;
    }
    else {
        return (t * t * a);
    }
}

int main(int argc, char** argv)
{
    double a = 0;
    int n = 0;
    scanf("%lf %d", &a, &n);
    printf("%lf", power(a, n));

    return 0;
}