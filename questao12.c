
#include <stdio.h>

int main(void) {
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value;
    printf("%f\n", aloha[2]);
    
    scanf("%f", &aloha);
    printf("%f", aloha);
}