#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void addLast(struct element *list, int a) {
    struct element *current = list;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = malloc(sizeof(struct element));
    current->next->x = a;
    current->next->next = NULL;
}

void printList(struct element *list) {
    struct element *current = list->next;
    while (current != NULL) {
        printf("%d -> ", current->x);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct element *list1 = malloc(sizeof(struct element));
    list1->next = NULL;
    printList(list1);
    addLast(list1, -9);
    printList(list1);
    addLast(list1, 0);
    printList(list1);
    return 0;
}
