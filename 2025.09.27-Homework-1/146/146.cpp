#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv)
{
    FILE* fi;
    FILE* fo;

    int a = 0;
    int b = 0;

    fi = fopen("INPUT.TXT", "r");
    fscanf(fi, "%d %d", &a, &b);
    fclose(fi);

    fo = fopen("OUTPUT.TXT", "w");
    fprintf(fo, "%d %d", b - 1, a - 1);
    fclose(fo);

    return 0;
}