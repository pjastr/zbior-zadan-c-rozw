#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int sum(struct element *list) {
    int sum = 0;
    while (list != NULL) {
        if (list->x % 2 != 0) {
            sum += list->x;
        }
        list = list->next;
    }
    return sum;
}

int main() {
    struct element * list = malloc(sizeof(struct element));
    list->x = -3;
    list->next = malloc(sizeof(struct element));
    list->next->x = 2;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 5;
    list->next->next->next = NULL;
    printf("%d\n", sum(list));
    return 0;
}
