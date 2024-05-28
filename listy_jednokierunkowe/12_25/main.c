#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * removeList(struct element * list) {
    struct element * current = list;
    struct element * next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    return NULL;
}

void printList(struct element * list) {
    struct element * current = list;
    while (current != NULL) {
        printf("%d\n", current->x);
        current = current->next;
    }
    printf("---\n");
}

int main() {
    // pusta lista bez g³owy
    struct element * list = NULL;
    printList(list);
    list = removeList(list);
    printList(list);
    // lista o jednym elemencie 3
    struct element * list2 = malloc(sizeof(struct element));
    list2->x = 3;
    list2->next = NULL;
    printList(list2);
    list2 = removeList(list2);
    printList(list2);
    // lista o dwóch elementach 7,-6
    struct element * list3 = malloc(sizeof(struct element));
    list3->x = 7;
    list3->next = malloc(sizeof(struct element));
    list3->next->x = -6;
    list3->next->next = NULL;
    printList(list3);
    list3 = removeList(list3);
    printList(list3);
    // lista o trzech elementach 1,-9,-5
    struct element * list4 = malloc(sizeof(struct element));
    list4->x = 1;
    list4->next = malloc(sizeof(struct element));
    list4->next->x = -9;
    list4->next->next = malloc(sizeof(struct element));
    list4->next->next->x = -5;
    list4->next->next->next = NULL;
    printList(list4);
    list4 = removeList(list4);
    printList(list4);
    return 0;
}
