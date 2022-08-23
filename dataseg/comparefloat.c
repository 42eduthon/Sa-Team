#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int i;
  float f;
  char *stop;

  f = strtof(argv[1], &stop);
  i = atoi(argv[1]);
  if (f == i)
    printf("%f %d same\n", f, i);
  else
    printf("%f %d diff\n", f, i);
  return (0);
}