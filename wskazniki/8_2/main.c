#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b){
    return a+b;
}

int sumVals(int *a, int *b){
    return *a + *b;
}

void addPtr(int *a, int *b, int *c){
    *c = *a + *b;
}

int main() {
    int a = 5;
    int b = 10;
    int c = 0;
    printf("Suma a+b = %d\n", sum(a, b));
    printf("Suma *a + *b = %d\n", sumVals(&a, &b));
    addPtr(&a, &b, &c);
    printf("Suma *a + *b = %d\n", c);
    return 0;
}
