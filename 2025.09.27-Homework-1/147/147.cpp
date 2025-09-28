#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv)
{
    
    FILE* fi;
    FILE* fo;
    
    long long a = 0;
    
    fi = fopen("INPUT.TXT", "r");
    fscanf(fi, "%lld", &a);
    fclose(fi);
    
    fo = fopen("OUTPUT.TXT", "w");
    fprintf(fo, "%lld", a * a);
    fclose(fo);
    
    return 0;
}