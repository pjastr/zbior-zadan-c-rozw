#include <stdio.h>
#include <stdlib.h>

void copyInt(int x, int *w) {
    *w = x;
}

int main() {
    int x = 5;
    int y = 0;
    copyInt(x, &y);
    printf("x: %d, y: %d\n", x, y);
    return 0;
}
