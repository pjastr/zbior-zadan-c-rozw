#include <stdio.h>

double findMax(const double *num1, double * const num2) {
    if (*num1 > *num2) {
        return *num1;
    }
    return *num2;
}

int main() {
    double a = 5.5;
    double b = 6.6;
    printf("Max: %f\n", findMax(&a, &b));
    return 0;
}
