#include <stdio.h>
#include <string.h>

int countOdds(char *str) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9' && (str[i] - '0') % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[] = "abc567W";
    printf("%d\n", countOdds(str));
    return 0;
}
