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
    fprintf(fo, "The next number for the number %d is %d.\nThe previous number for the number %d is %d.", a, a + 1, a, a - 1);
    fclose(fo);

    return 0;
}