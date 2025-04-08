#include <stdio.h>
#include <stdlib.h>

void sqrCopy(const int *p1, int *p2) {
    *p2 = (*p1) * (*p1);
}

int main() {
    int a = 5, b=7;
    printf("%d %d\n", a, b);
    sqrCopy(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
