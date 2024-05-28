#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void removeLast(struct element * list) {
    if (list->next == NULL) {
        return;
    }
    struct element * prev = list;
    struct element * current = list->next;
    while (current->next != NULL) {
        prev = current;
        current = current->next;
    }
    free(current);
    prev->next = NULL;
}

void printList(struct element * list) {
    struct element * current = list->next;
    while (current != NULL) {
        printf("%d\n", current->x);
        current = current->next;
    }
    printf("---\n");
}

int main() {
    // pusta lista bez g³owy
    struct element * list = malloc(sizeof(struct element));
    list->next = NULL;
    printList(list);
    removeLast(list);
    printList(list);
    // lista o jednym elemencie 6
    struct element * list2 = malloc(sizeof(struct element));
    list2->next = malloc(sizeof(struct element));
    list2->next->x = 6;
    list2->next->next = NULL;
    printList(list2);
    removeLast(list2);
    printList(list2);
    // lista o dwóch elementach 6, 7
    struct element * list3 = malloc(sizeof(struct element));
    list3->next = malloc(sizeof(struct element));
    list3->next->x = 6;
    list3->next->next = malloc(sizeof(struct element));
    list3->next->next->x = 7;
    list3->next->next->next = NULL;
    printList(list3);
    removeLast(list3);
    printList(list3);
    return 0;
}
