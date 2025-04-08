#include <stdio.h>
#include <stdlib.h>

void sumToPtr(const int *p1, const int *p2, int *result) {
    *result = *p1 + *p2;
}

int main() {
    int a=4, b=5, c=-12;
    sumToPtr(&a, &b, &c);
    printf("%d\n", c);
}
