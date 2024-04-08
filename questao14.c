
#include <stdio.h>
#include <stdlib.h>

float area (float a, float b) {
// Declaração da função área, cujos parâmetros a e b são do tipo float
    float c;
// Declaração do resultado c, também do tipo float
    return (c = a * b);
// Retorno da funcção
}

int main(void) {
    // Declaração do ponteiro px, que aponta para a função já definida
    float (*px)(float, float) = &area; 
    // Valores a serem cálculados pela função
    printf ("A area e igual a: %f\n", px(3.5, 4.6));

}