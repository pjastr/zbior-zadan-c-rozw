#include <stdio.h>
#include <stdlib.h>

float *initFlts() {
    float *temp = malloc(4 * sizeof(float));
    if (temp == NULL) {
        return NULL;
    }
    *temp = 0.5;
    *(temp + 1) = 1.5;
    *(temp + 2) = 2.5;
    *(temp + 3) = 3.5;
    return temp+3;
}

int main() {
    float *temp = initFlts();
    printf("%f\n", *temp);
    printf("%f\n", *(temp - 1));
    printf("%f\n", *(temp - 2));
    printf("%f\n", *(temp - 3));
    free(temp-3);
    return 0;
}
