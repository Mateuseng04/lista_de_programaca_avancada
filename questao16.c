
#include <stdio.h>
#include <stdlib.h>
#include <search.h>

float valores[] = {4.5, 6.9, 3.5, 5.6, 1.0, 0.1};
void trocar (int *a, int *b)  {
  float tmp;
  tmp = *a; *a = *b; *b = tmp;
}
void ordenar (float *i, float *j, float *k) {
    float temp;
    if (*i > *j) {
       trocar(i, j);       
    }
    if (*i > *k) {
       trocar(i, j);
    }   
}

int main(void) {
    int i, j, k;
    void *ordem;
    int ne;

    ordem = malloc(6 * sizeof(float));
    if (ordem = NULL) {
        printf("Erro de alocação de memória");
        return 1;
    }
    qsort (ordem, 6, sizeof(float), ordenar);)
    printf("Valores ordenados:\n");
    for (i = 0; i < 6; i++) {
        printf("%f\n", ordem[i]);
    }
    free(ordem);

    return 0;
}