#include <stdio.h>
#include <stdlib.h>

double subPtrs(const double *num1, double * const num2) {
    return *num1 - *num2;
}

int main() {
    double a = 5.3, b = 3.4;
    printf("%lf\n", subPtrs(&a, &b));
    return 0;
}
