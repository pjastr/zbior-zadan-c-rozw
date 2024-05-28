#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * deleteBeforeLast(struct element *list) {
    if (list == NULL || list->next == NULL) {
        return list;
    }
    struct element *prev = NULL;
    struct element *current = list;
    struct element *next = list->next;
    while (next->next != NULL) {
        prev = current;
        current = next;
        next = next->next;
    }
    if (prev == NULL) {
        free(current);
        return next;
    }
    prev->next = next;
    free(current);
    return list;
}

void printList(struct element *list) {
    while (list != NULL) {
        printf("%d\n", list->x);
        list = list->next;
    }
    printf("---\n");
}

int main(){
    // pusta lista bez g³owy
    struct element *list = NULL;
    printList(list);
    list = deleteBeforeLast(list);
    printList(list);
    // lista o jednym elemencie 5
    struct element * list2 = malloc(sizeof(struct element));
    list2->x = 5;
    list2->next = NULL;
    printList(list2);
    list2 = deleteBeforeLast(list2);
    printList(list2);
    // lista o dwóch elementach 5, 10
    struct element * list3 = malloc(sizeof(struct element));
    list3->x = 5;
    list3->next = malloc(sizeof(struct element));
    list3->next->x = 10;
    list3->next->next = NULL;
    printList(list3);
    list3 = deleteBeforeLast(list3);
    printList(list3);
    // lista o trzech elementach 4,8,-3
    struct element * list4 = malloc(sizeof(struct element));
    list4->x = 4;
    list4->next = malloc(sizeof(struct element));
    list4->next->x = 8;
    list4->next->next = malloc(sizeof(struct element));
    list4->next->next->x = -3;
    list4->next->next->next = NULL;
    printList(list4);
    list4 = deleteBeforeLast(list4);
    printList(list4);
    return 0;
}
