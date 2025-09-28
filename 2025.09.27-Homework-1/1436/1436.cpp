#include <cstdio>

int main(int argc, char** argv)
{
    
    long long a = 0;
    long long b = 0;
    long long q = 0;
    long long r = 0;

    scanf("%lld", &a);
    scanf("%lld", &b);

    q = a / b;
    r = a - (q * b);

    if (r < 0)
    {
        if (b > 0)
        {
            r = r + b;
            q = q - 1;
        }
        else
        {
            r = r - b;
            q = q + 1;
        }
    }

    printf("%lld", r);
    
    return 0;
}