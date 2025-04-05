#include <stdio.h>
#include <stdlib.h>

int *initInts() {
    int *ptr = (int *)malloc(3 * sizeof(int));
    if (ptr == NULL){
        return NULL;
    }
    *ptr = 5;
    *(ptr+1) = -12;
    *(ptr+2) = 33;
    return ptr + 1;
}

int main() {
    int *ptr = initInts();
    printf("%d %d %d\n", *(ptr-1), *ptr, *(ptr+1));
    free(ptr - 1);
    return 0;
}
