#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv)
{
    
    FILE* fi;
    FILE* fo;

    long long a = 0;
    long long num = 0; // intermediate number

    fi = fopen("INPUT.TXT", "r");
    fscanf(fi, "%lld", &a);
    fclose(fi);

    num = (a + 1) / 2;

    fo = fopen("OUTPUT.TXT", "w");
    fprintf(fo, "%lld", num * num);
    fclose(fo);
    
    return 0;
}