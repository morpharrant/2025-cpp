#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv)
{
    FILE* fo;

    fo = fopen("OUTPUT.TXT", "w");
    fprintf(fo, "Hello world!");
    fclose(fo);

    return 0;
}