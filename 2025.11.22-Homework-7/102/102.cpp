#include <cstdio>

bool IsDigit(unsigned char c)
{
    if (c >= '0' && c <= '9') {
        return true;
    }
    return false;
}

int main(int argc, char** argv)
{
    unsigned char c = 0;
    scanf_s("%c", &c);

    if (IsDigit(c)) {
        printf("yes");
    }
    else {
        printf("no");
    }
    return 0;
}