#include <cstdio>

unsigned char CaseSwap(unsigned char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    else if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

int main(int argc, char** argv)
{
    unsigned char c = 0;
    scanf_s("%c", &c);
    
    printf("%c", CaseSwap(c));
    
    return 0;
}