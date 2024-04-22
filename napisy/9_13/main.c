#include <stdio.h>

void cutStr(char txt[], int n, int m) {
    int i=0;
    int j=0;
    while(txt[i] != '\0') {
        if (i <n || i > m) {
            txt[j] = txt[i];
            j++;
        }
        i++;
    }
    txt[j] = '\0';
}

int main() {
    char txt[] = "abcde";
    int n = 0;
    int m = 3;
    cutStr(txt, n, m);
    printf("%s\n", txt);
    return 0;
}
