#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printListWithHead(struct element *list) {
    if (list->next == NULL) {
        printf("Lista jest pusta\n");
        printf("---\n");
        return;
    }
    struct element *current = list->next;
    while (current != NULL) {
        printf("%d\n", current->x);
        current = current->next;
    }
    printf("---\n");
}

int main() {
    struct element *list1 = malloc(sizeof(struct element));
    list1->next = NULL;
    printListWithHead(list1);

    struct element *list2 = malloc(sizeof(struct element));
    list2->next = malloc(sizeof(struct element));
    list2->next->x = 9;
    list2->next->next = malloc(sizeof(struct element));
    list2->next->next->x = -4;
    list2->next->next->next = NULL;
    printListWithHead(list2);
    return 0;
}
