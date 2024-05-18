#include <stdio.h>
#include <stdlib.h>

int main() {
    int v1 = 2;
    int *p = &v1;
    int v2 = *p;

    printf("V1: %d\nIndirizzo di V1: %p\nValore di p: %p\nIndirizzo di p: %p\nValore di m: %d\n", v1,&v1,p,&p,v2);

    return 0;
}
