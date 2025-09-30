#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a = malloc(32);
    int *b = malloc(64);
    free(a);
    int *c = malloc(128);
    return 0;
}

