#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void addFirst(struct element *list, int a) {
    struct element *newElement = malloc(sizeof(struct element));
    newElement->x = a;
    newElement->next = list->next;
    list->next = newElement;
}

void printList(struct element *list) {
    struct element *tmp = list->next;
    while (tmp != NULL) {
        printf("%d\n", tmp->x);
        tmp = tmp->next;
    }
    printf("---\n");
}

int main() {
    // lista z g³ow¹ o elementach 3,-9
    struct element *list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = 3;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -9;
    list->next->next->next = NULL;
    printList(list);
    addFirst(list, 5);
    printList(list);
    // pusta lista z g³ow¹
    struct element *list2 = malloc(sizeof(struct element));
    list2->next = NULL;
    printList(list2);
    addFirst(list2, 7);
    printList(list2);
    return 0;
}
