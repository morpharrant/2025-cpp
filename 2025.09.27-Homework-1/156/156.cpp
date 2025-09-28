#include <cstdio>

int main(int argc, char** argv)
{
    
    int a = 0;
    int b = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    if (a % b == 0)
    {
        printf("1");
    }
    
    else if (b % a == 0)
    {
        printf("1");
    }

    else
    {
        printf("777");
    }
    
    return 0;
}