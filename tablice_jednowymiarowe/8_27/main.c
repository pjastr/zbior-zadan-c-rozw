#include <stdio.h>

void increase_by_index(int n, int tab[n]) {
    for (int i = 0; i < n; i++) {
        tab[i] += i;
    }
}

int main() {

    int tab[] = {7, -3, 5, 11, -5};
    increase_by_index(5, tab);
    for (int i = 0; i < 5; i++) {
        printf("%d ", tab[i]);
    }
    return 0;
}
