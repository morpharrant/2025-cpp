#include <cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    scanf_s("%d", &a);
    if ((((a / 100000) + ((a % 100000) / 10000)) + ((a % 10000) / 1000)) == (((a % 1000) / 100) + ((a % 100) / 10) + (a % 10)))
    {printf_s("YES");}
    else 
    {printf_s("NO");}
    return 0;
}