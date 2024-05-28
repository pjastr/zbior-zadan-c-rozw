#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * lastPositive(struct element *list) {
    struct element *current = list->next;
    struct element *last_positive = NULL;
    while (current != NULL) {
        if (current->x > 0) {
            last_positive = current;
        }
        current = current->next;
    }
    return last_positive;
}

void printList(struct element *list) {
    struct element *current = list->next;
    while (current != NULL) {
        printf("%d %p\n", current->x, &current->x);
        current = current->next;
    }
    printf("---\n");
}

int main(){
    struct element * list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = 1;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -1;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = 2;
    list->next->next->next->next = NULL;
    printList(list);
    printf("%p\n", lastPositive(list));
    return 0;
}
