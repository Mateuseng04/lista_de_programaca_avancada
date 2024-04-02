
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int pulo[10];
  int i;
  int *x;
  x = &pulo;

  for (i=0;i<10;i++) {
    printf(" o iº elemento é: %d\n", (*x + i);
  }
  return 0;
}