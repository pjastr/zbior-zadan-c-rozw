#include <stdio.h>
#include <stdlib.h>

int *initInts() {
    int *ptr = (int *)malloc(3 * sizeof(int));
    ptr[0] = 5;
    ptr[1] = -12;
    ptr[2] = 33;
    return ptr + 1;
}

int main() {
    int *ptr = initInts();
    printf("%d %d %d\n", ptr[-1], ptr[0], ptr[1]);
    free(ptr - 1);
    return 0;
}
