#include <cstdio>
 
int main(int argc, char** argv)
{
    float x = 0;
    float y = 0;
    int d = 1;
 
    scanf_s("%f %f", &x, &y);
 
    while (x < y) {
        x = x * 1.15;
        d++;
    }
 
    printf_s("%d", d);
 
    return 0;
}