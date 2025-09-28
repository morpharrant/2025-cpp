#include <cstdio>

int main(int argc, char **argv) {
  long long n = 0, m = 0;

  scanf_s("%lld %lld", &n, &m);
  printf("%lld", (m - 1) * (n - 1) + 1);

  return 0;
}