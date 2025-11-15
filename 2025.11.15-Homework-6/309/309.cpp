#include <cstdio>

bool Election(bool x, bool y, bool z)
{
    return (x && y) || (x && z) || (y && z);
}

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf_s("%d %d %d", &a, &b, &c);
    bool x = a;
    bool y = b;
    bool z = c;
    bool result = Election(x, y, z);
    printf("%d", result);
    return 0;
}