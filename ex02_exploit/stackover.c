#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

volatile int main() {
  char *seg;

  while (1) {
    seg = malloc(INT_MAX * 30);
    seg[0] = '1';
    printf("%s\n", seg);
  }
}