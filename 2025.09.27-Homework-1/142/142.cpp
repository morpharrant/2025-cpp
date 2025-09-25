#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;

    FILE* fi;
    FILE* fo;

    fi = fopen("INPUT.TXT", "r");
    fscanf_s(fi, "%d %d", &a, &b);
    fclose(fi);

    fo = fopen("OUTPUT.TXT", "w");
    fprintf(fo, "%d", a + b);
    fclose(fo);

    return 0;
}