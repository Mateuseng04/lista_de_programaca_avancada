
#include <stdio.h>
#include <stdlib.h>

float valores[] = {4.5, 6.9, 3.5, 5.6, 1.0, 0.1};
float ordenar (float *array, int n) {
    int i, j;
    float temp;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++)
         {
            if (array[j +1] > array [i]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    int i;
    float *ordem;
    float (*pf) (float, int) = &ordenar;

    ordem = malloc(6 * sizeof(float));
    if (ordem = NULL) {
        printf("Erro de alocação de memória");
        return 1;
    }
    for (i = 0; i < 6; i++) {
        ordem[i] = valores[i];
    }
    pf(*ordem, 6);

    printf("Valores ordenados:\n");
    for (i = 0; i < 6; i++) {
        printf("%f\n", ordem[i]);
    }
    free(ordem);

    return 0;
}