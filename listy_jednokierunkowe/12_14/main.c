#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int find(struct element *list, int a) {
    struct element *current = list->next;
    while (current != NULL) {
        if (current->x == a) {
            return 1;
        }
        current = current->next;
    }
    return 0;
}

int main() {
    struct element *list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = 9;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -3;
    list->next->next->next = NULL;
    printf("%d\n", find(list, 9));
    printf("%d\n", find(list, 0));
    return 0;
}
