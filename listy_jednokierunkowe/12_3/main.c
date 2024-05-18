#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printListWithoutHead(struct element *list) {
    if (list == NULL) {
        printf("Lista jest pusta\n");
        printf("---\n");
        return;
    }
    struct element *current = list;
    while (current != NULL) {
        printf("%d\n", current->x);
        current = current->next;
    }
    printf("---\n");
}

int main() {
    struct element *list1 = NULL;
    printListWithoutHead(list1);

    struct element *list2 = malloc(sizeof(struct element));
    list2->x = -3;
    list2->next = malloc(sizeof(struct element));
    list2->next->x = 5;
    list2->next->next = NULL;
    printListWithoutHead(list2);
    return 0;
}
