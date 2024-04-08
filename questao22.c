
#include <stdio.h>
int main(void)
{
  int a, b;
  int x, y, z;
  scanf("%d %d", &a, &b);
  x = a; y = b; z = a + b;
  while (a) {
  x = x | b;
  y = y ^ a;
  z = z & (a+b);
  a = a >> 1;
  b = b << 1;
  }
  printf ("%d %d %d\n", x, y, z);
  return 0;
}
