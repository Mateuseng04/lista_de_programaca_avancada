
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int i=3, j=5;
    int *p, *q, *f;
    p = &i;
    q = &j;
    int x;
    int z;
    int f = **&p;

    printf("%p\n", p);
    printf("%p\n", q);

    x = *p - *q;
    printf("x = %d\n", x);
    if (p == &i) {
        printf("A expressao é verdadeira\n");
        printf("%d\n", *p);
    }
    else {
        printf("%d\n", *p);
        printf("a expressao é falsa");
    }

    printf("O ponteiro para ponteiro f é:%p\n", f);

    z = 3 - *p/(*q) + 7;
    printf("z assume o valor: %p\n", z); 
    return 0;  

}