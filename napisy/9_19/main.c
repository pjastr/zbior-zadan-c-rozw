#include <stdio.h>

int indexLower(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            return i;
        }
        i++;
    }
    return 0;
}

int main() {
    char str[] = "Ala ma kota";
    printf("%d\n", indexLower(str)); // 1
    char str2[] = "ALA MA KOTA";
    printf("%d\n", indexLower(str2)); // 0
    char str3[] = "";
    printf("%d\n", indexLower(str3)); // 0
    return 0;
}
