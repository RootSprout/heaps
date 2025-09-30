#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a = malloc(32);
    int *b = malloc(32);
    int *c = malloc(32);

    printf("Allocated a: %p\n b: %p\n c: %p\n", a,b,c);

    free(a);
    free(b);
    free(c);

    printf("Freed a, b, c\n");

    printf("Freed a, b, c\n");

    //Allocate again (tcache will reuse freed chunks)
    char *d = malloc(0x20); //32 bytes
    char *e = malloc(0x20);

    printf("Re-allocated:\n d = %p\n e = %p\n", d, e);

    return 0;

}

