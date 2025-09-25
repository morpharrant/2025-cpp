#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv)
{
    FILE* fi;
    FILE* fo;

    int a = 0;
    int b = 0;
    int c = 0;

    fi = fopen("INPUT.TXT", "r");
    fscanf(fi, "%d %d %d", &a, &b, &c);
    fclose(fi);

    fo = fopen("OUTPUT.TXT", "w");
    fprintf(fo, "%d", a * b * c * 2);
    fclose(fo);

    return 0;
}