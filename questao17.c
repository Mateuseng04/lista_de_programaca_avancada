
#include <stdio.h>
#include <stdlib.h>
#include <search.h>

int ordenar(int *a, int *b, int*c)
  int temp;
  if (a < b) {
    a = temp, b = a, temp = b;
  }
  if (a < c) {
    a = temp, c = a, temp = c;
  }
int main(void) {
  int i, j;
  int array[i];

  printf("Digite o tamanho do array:\n");
  scanf(%d, &j);
  printf("Digite os valores do array:\n");
  for (i=0; i<j; i++) {
    scanf(%d, &array[i]);
  }
  qsort(array, j, sizeof(int), ordenar);
  for (i=0; i<j; i++) {
    printf("%d\n", array[i]);
  }
  return 0; 
}