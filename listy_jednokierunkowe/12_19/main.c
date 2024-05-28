#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * removeFirst(struct element * list) {
    if (list == NULL) {
        return NULL;
    }
    struct element * newHead = list->next;
    free(list);
    return newHead;
}

void printList(struct element * list) {
    while (list != NULL) {
        printf("%d\n", list->x);
        list = list->next;
    }
    printf("---\n");
}

int main() {
    // pusta lista bez glowy
    struct element * list = NULL;
    printList(list);
    list = removeFirst(list);
    printList(list);
    // lista o jednym elemencie
    struct element * list2 = malloc(sizeof(struct element));
    list2->x = 1;
    list2->next = NULL;
    printList(list2);
    list2 = removeFirst(list2);
    printList(list2);
    // lista o dwóch elementach
    struct element * list3 = malloc(sizeof(struct element));
    list3->x = -3;
    list3->next = malloc(sizeof(struct element));
    list3->next->x = 7;
    list3->next->next = NULL;
    printList(list3);
    list3 = removeFirst(list3);
    printList(list3);
    return 0;
}
