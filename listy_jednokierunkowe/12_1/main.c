#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int main() {
    struct element * list = malloc(sizeof(struct element));
    list->x = 4;
    list->next = malloc(sizeof(struct element));
    list->next->x = 5;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -12;
    list->next->next->next = NULL;
    struct element * tmp = list;
    while (tmp != NULL) {
        printf("%d\n", tmp->x);
        tmp = tmp->next;
    }
    return 0;
}
