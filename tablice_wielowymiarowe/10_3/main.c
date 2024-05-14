#include <stdio.h>

int maxRowIdx(int n, int m, int tab[n][m]){
    int max = tab[0][0];
    int maxRow = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(tab[i][j] > max){
                max = tab[i][j];
                maxRow = i;
            }
        }
    }
    return maxRow;
}

int main(){
    int tab[3][2] = {{5, -2}, {3, 4}, {5, 4}};
    printf("%d\n", maxRowIdx(3, 2, tab));
    return 0;
}
