#include <cstdio>

unsigned char ToUpper(unsigned char c)
{
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}

int main(int argc, char** argv)
{
    unsigned char c = 0;
    scanf_s("%c", &c);
    
    printf("%c", ToUpper(c));

    return 0;
}