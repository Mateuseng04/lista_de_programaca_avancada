
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *x;
    int i;
    x = malloc(5*sizeof(int*));
    for (i=0; i<5; i++){
        x[i] = (i +1);
        printf("%d\n", x[i]);
    }
}