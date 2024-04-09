
#include <stdio.h>
#include <stdlib.h>

void soma_de_vetores(int vet1[2][2], int vet2[2][2], int resultado[2][2]) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            resultado[i][j] = vet1[i][j] + vet2[i][j];
        }
    }
}

int main(void) {
    int i, j;
    int matriz1[2][2];
    int matriz2[2][2];
    int resultado[2][2];

    printf("Digite os valores da primeira matriz:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os valores da segunda matriz:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    soma_de_vetores(matriz1, matriz2, resultado);

    printf("A soma das matrizes é: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}