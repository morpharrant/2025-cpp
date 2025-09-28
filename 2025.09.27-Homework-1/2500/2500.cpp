#include <cstdio>

int main(int argc, char **argv)
{

  long long k = 0;
  long long n = 0;

  scanf_s("%lld %lld", &k, &n);
  
  printf("%lld %lld", (n - 1) / k + 1, (n - 1) % k + 1);

  return 0;
}