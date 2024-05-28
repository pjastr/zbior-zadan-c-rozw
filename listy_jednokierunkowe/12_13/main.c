#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int find(struct element *list, int a) {
    while (list != NULL) {
        if (list->x == a) {
            return 1;
        }
        list = list->next;
    }
    return 0;
}

int main() {
    struct element *list = malloc(sizeof(struct element));
    list->x = 1;
    list->next = malloc(sizeof(struct element));
    list->next->x = -7;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 3;
    list->next->next->next = NULL;
    printf("%d\n", find(list, 3));
    printf("%d\n", find(list, 44));
    return 0;
}
