#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * addLast(struct element *list, int a) {
    struct element *newElement = malloc(sizeof(struct element));
    newElement->x = a;
    newElement->next = NULL;
    if (list == NULL) {
        return newElement;
    }
    struct element *current = list;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newElement;
    return list;
}

void printList(struct element *list) {
    struct element *current = list;
    while (current != NULL) {
        printf("%d\n", current->x);
        current = current->next;
    }
    printf("---\n");
}

int main() {
    // pusta lista
    struct element *list1 = NULL;
    list1 = addLast(list1, 1);
    printList(list1);
    list1 = addLast(list1, -4);
    printList(list1);
    list1 = addLast(list1, 0);
    printList(list1);
    return 0;
}
