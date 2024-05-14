#include <stdio.h>
#include <stdlib.h>

int minColIdx(int n, int m, int **tab) {
    int min = tab[0][0];
    int minIdx = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (tab[j][i] < min) {
                min = tab[j][i];
                minIdx = i;
            }
        }
    }
    return minIdx;
}

int main() {
    int ** tab = malloc(3 * sizeof(int *));
    tab[0] = malloc(2 * sizeof(int));
    tab[1] = malloc(2 * sizeof(int));
    tab[2] = malloc(2 * sizeof(int));
    tab[0][0] = 1; tab[0][1] = -4;
    tab[1][0] = -4; tab[1][1] = 3;
    tab[2][0] = 5; tab[2][1] = 2;
    printf("%d\n", minColIdx(3, 2, tab));
    free(tab[0]);
    free(tab[1]);
    free(tab[2]);
    free(tab);
    return 0;
}
