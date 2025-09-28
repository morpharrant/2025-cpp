#include <cstdio>

int main(int argc, char** argv)
{
    
    long long v = 0;
    long long t = 0;
    long long s = 0;

    scanf("%lld", &v);
    scanf("%lld", &t);

    s = (v * t + 1) % 109;
    
    if (s <= 0)
    {
        s = s + 109;
    }
    
    printf("%lld", s);

    return 0;
}