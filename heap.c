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

    char *p1 = malloc(64);  // Allocate 64 bytes
    char *p2 = malloc(64);
    char *p3 = malloc(64);
    char *p4 = malloc(64);
    char *p5 = malloc(64);

    free(p1);
    free(p2);
    free(p3);
    free(p4);
    free(p5);
    
    return 0;

}

