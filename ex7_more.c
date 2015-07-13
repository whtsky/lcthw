#include <stdio.h>

int main(int argc, char const *argv[]) {
  long a = 2L * 1024L * 1024L * 1024L;
  long b = 2L * 1024 * 1024 * 1024;
  int c = 1 * 1024 * 1024 * 1024;

  printf(" %ld %ld %d \n", a, b, c);
  printf("%ld %ld %ld\n", sizeof(a), sizeof(b), sizeof(c));
  return 0;
}
