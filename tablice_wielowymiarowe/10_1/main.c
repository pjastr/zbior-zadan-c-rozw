#include <stdio.h>

int sumMatrix(int n, int m, int tab[n][m]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += tab[i][j];
        }
    }
    return sum;
}

int main() {
    int tab[3][4] = {{3,-4,8,7},{-1,2,3,4},{-5,6,7,8}};
    printf("%d\n", sumMatrix(3, 4, tab));
    return 0;
}
