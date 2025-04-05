#include <stdio.h>
#include <stdlib.h>

float *initFloats() {
    float *temp = malloc(3 * sizeof(float));
    if (temp == NULL) {
        return NULL;
    }
    *temp = 4.5;
    *(temp+1) = 2.3;
    *(temp+2) = -4.2;
    return temp;
}

int main() {
    float *temp = initFloats();
    printf("%f %f %f\n", *temp, *(temp+1), *(temp+2));
    free(temp);
    return 0;
}
