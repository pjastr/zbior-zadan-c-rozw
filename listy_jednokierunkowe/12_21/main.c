#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * deleteLast(struct element *list) {
    if (list == NULL) {
        return NULL;
    }
    if (list->next == NULL) {
        free(list);
        return NULL;
    }
    struct element *current = list;
    while (current->next->next != NULL) {
        current = current->next;
    }
    free(current->next);
    current->next = NULL;
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

int main(){
    // pusta lista bez g³owy
    struct element *list = NULL;
    printList(list);
    list = deleteLast(list);
    printList(list);
    // lista z jednym elementem -8
    struct element * list2 = malloc(sizeof(struct element));
    list2->x = -8;
    list2->next = NULL;
    printList(list2);
    list2 = deleteLast(list2);
    printList(list2);
    // lista z dwoma elementami -8, 4
    struct element * list3 = malloc(sizeof(struct element));
    list3->x = -8;
    list3->next = malloc(sizeof(struct element));
    list3->next->x = 4;
    list3->next->next = NULL;
    printList(list3);
    list3 = deleteLast(list3);
    printList(list3);
}
