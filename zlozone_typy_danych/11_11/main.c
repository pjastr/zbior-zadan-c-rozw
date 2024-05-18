#include <stdio.h>

struct Computer {
    char * brand;
    int number_of_cores;
};

int max_cores(struct Computer computers[], int size) {
    int max = computers[0].number_of_cores;
    for (int i = 1; i < size; i++) {
        if (computers[i].number_of_cores > max) {
            max = computers[i].number_of_cores;
        }
    }
    return max;
}

int main() {
    struct Computer computers[] = {
        {"Dell", 4},
        {"HP", 8},
        {"Lenovo", 6},
        {"Asus", 2}
    };
    printf("Max cores: %d\n", max_cores(computers, 4));
    return 0;
}
