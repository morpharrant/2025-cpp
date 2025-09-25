#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv)
{
    FILE* fi;
    FILE* fo;

    int n = 0;

    fi = fopen("INPUT.TXT", "r");
    fscanf(fi, "%d", &n);
    fclose(fi);

    fo = fopen("OUTPUT.TXT", "w");
    fprintf(fo, "%d", n + 1);
    fclose(fo);

    return 0;
}