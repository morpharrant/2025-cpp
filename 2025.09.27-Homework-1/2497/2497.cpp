#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv)
{

    FILE* fi;
    FILE* fo;

    long long a = 0;
    long long b = 0;
    long long c = 0;

    fi = fopen("INPUT.TXT", "r");
    fscanf(fi, "%lld %lld %lld", &a, &b, &c);
    fclose(fi);

    long long sum = 0;
    sum = a + b + c;

    fo = fopen("OUTPUT.TXT", "w");
    fprintf(fo, "%lld", sum);
    fclose(fo);

    return 0;
}