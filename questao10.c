
#include <stdio.h>

int main(void) {
  
  int const *x = 3;
  printf("%d", ++(*x));
  
}
