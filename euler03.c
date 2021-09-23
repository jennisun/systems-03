#include <stdio.h>

long one (int n) {
  int i = 3;
  long ans = 0;

  for (i = 1; i < 1000; i ++) if (i % 3 == 0 || i % 5 == 0) ans += i;

  return ans;
}

long six (int n) {
  long squares = 100 * 101 * 201 / 6;
  long sum = 100 * 101 / 2;
  return sum * sum - squares;
}


int main() {
  printf("%ld \n", one(1));
  printf("%ld \n", six(1));
}
