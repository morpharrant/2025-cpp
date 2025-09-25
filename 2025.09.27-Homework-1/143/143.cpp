#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv)
{
    FILE* fi;
    FILE* fo;

    int a = 0;

    fi = fopen("INPUT.TXT", "r");
    fscanf(fi, "%d", &a);
    fclose(fi);

    fo = fopen("OUTPUT.TXT", "w");
    fprintf(fo, "%d", a);
    fclose(fo);

    return 0;
}