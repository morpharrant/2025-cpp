#include <cstdio>

int main(int argc, char** argv)
{
    
    long long a = 0;
    long long b = 0;
    long long sad = 0;

    scanf("%lld", &a);
    scanf("%lld", &b);

    if (b % a != 0)
    {
        sad = a - (b % a);
    }
    printf("%lld %lld %lld", b / a, b % a, sad);
    
    return 0;
}