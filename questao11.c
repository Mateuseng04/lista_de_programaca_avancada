
#include <stdio.h>

int main (void) {

    double x[4]; 
    double *px;
    *x = 4096;
    px = &x;
    printf("%d\n", *px );

    return 0;
}