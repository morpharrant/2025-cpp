#include <cstdio>

int main(int argc, char **argv)
{

  long long a = 0;
  long long num = 0;

  scanf_s("%lld", &a);

  num = (a + 1) / 2;
  
  printf("%lld", num * num);

  return 0;
}