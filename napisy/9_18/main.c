#include <stdio.h>
#include <stdlib.h>

int length(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

char* copyEveryThird(char* str) {
    int i = 0;
    int j = 0;
    char* temp = malloc(length(str)  + 1);
    while (str[i] != '\0') {
        if (i % 3 == 0) {
            temp[j] = str[i];
            j++;
        }
        i++;
    }
    temp[j] = '\0';
    return temp;
}

int main() {
    char str []= "ABCXYZ";
    char* newStr = copyEveryThird(str);
    printf("%s\n", newStr);
    return 0;
}
