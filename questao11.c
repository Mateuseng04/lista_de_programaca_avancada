
#include <stdio.h>

int main(void) {
  
  char x1[4];
  int x2[4];
  float x3[4];
  double x4[4];
  

  printf("Estes sao os endereços de memoria de x:\n");
  printf("char:   %p\n", (void*) &x1[0]);
  printf("int:    %p\n", (void*) &x2[0]);
  printf("float:  %p\n", (void*) &x3[0]);
  printf("double: %p\n", (void*) &x4[0]);

  printf("\nEstes sao os endereços de memoria de x+1, x+2 e x+3:\n");
  printf("char:   %p %p %p\n", (void*) (x1 + 1), (void*) (x1 + 2), (void*) (x1 + 3));
  printf("int:    %p %p %p\n", (void*) (x2 + 1), (void*) (x2 + 2), (void*) (x2 + 3));
  printf("float:  %p %p %p\n", (void*) (x3 + 1), (void*) (x3 + 2), (void*) (x3 + 3));
  printf("double: %p %p %p\n", (void*) (x4 + 1), (void*) (x4 + 2), (void*) (x4 + 3));

  return 0;
}