
#include <stdio.h>

int main(void) {
  int i;
  int mat[i] = {1, 2 ,3, 4};
  int *p, x;

  p = mat[0];
  x = (*mat);

  for (i=0;i<4;i++) {
    printf ("o iº elemento é: %d\n", mat[i]");
  }
  printf("%d\n", p);
  p = p + 1;
  printf("%d\n", p);
  printf("%d\n", x);
}