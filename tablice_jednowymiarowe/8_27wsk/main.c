#include <stdio.h>
#include <stdlib.h>

void increase_by_index(int n, int * tab) {
    for (int i = 0; i < n; i++) {
        *(tab + i) += i;
    }
}

int main() {

    int * tab = (int *) malloc(5 * sizeof(int));
    * tab = 12;
    * (tab + 1) = -4;
    * (tab + 2) = 0;
    * (tab + 3) = 5;
    * (tab + 4) = 7;
    increase_by_index(5, tab);
    for (int i = 0; i < 5; i++) {
        printf("%d ", tab[i]);
    }
    free(tab);
    return 0;
}
