#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv)
{
    
    FILE* fi;
    FILE* fo;
    
    long long k = 0;
    long long n = 0;
    
    fi = fopen("INPUT.TXT", "r");
    fscanf(fi, "%lld %lld", &k, &n);
    fclose(fi);
    
    fo = fopen("OUTPUT.TXT", "w");
    fprintf(fo, "%lld %lld", (n - 1) / k + 1, (n - 1) % k + 1);
    fclose(fo);
    
    return 0;
}