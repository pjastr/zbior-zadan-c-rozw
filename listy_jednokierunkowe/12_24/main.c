#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void removeBeforeLast(struct element * list) {
    if (list->next == NULL || list->next->next == NULL) {
        return;
    }
    struct element * prev = list;
    struct element * current = list->next;
    struct element * next = current->next;
    while (next->next != NULL) {
        prev = current;
        current = next;
        next = next->next;
    }
    prev->next = next;
    free(current);
}

void printList(struct element * list) {
    struct element * temp = list->next;
    while (temp != NULL) {
        printf("%d\n", temp->x);
        temp = temp->next;
    }
    printf("---\n");
}

int main(){
    // pusta lista z g³ow¹
    struct element * list = malloc(sizeof(struct element));
    list->next = NULL;
    printList(list);
    removeBeforeLast(list);
    printList(list);
    // lista o jednym elemencie 7
    struct  element * list2 = malloc(sizeof(struct element));
    list2->next = malloc(sizeof(struct element));
    list2->next->x = 7;
    list2->next->next = NULL;
    printList(list2);
    removeBeforeLast(list2);
    printList(list2);
    // lista o dwóch elemenyach 3,-8
    struct element * list3 = malloc(sizeof(struct element));
    list3->next = malloc(sizeof(struct element));
    list3->next->x = 3;
    list3->next->next = malloc(sizeof(struct element));
    list3->next->next->x = -8;
    list3->next->next->next = NULL;
    printList(list3);
    removeBeforeLast(list3);
    printList(list3);
    // lista o trzech elementach 6,2,-9
    struct element * list4 = malloc(sizeof(struct element));
    list4->next = malloc(sizeof(struct element));
    list4->next->x = 6;
    list4->next->next = malloc(sizeof(struct element));
    list4->next->next->x = 2;
    list4->next->next->next = malloc(sizeof(struct element));
    list4->next->next->next->x = -9;
    list4->next->next->next->next = NULL;
    printList(list4);
    removeBeforeLast(list4);
    printList(list4);
    return 0;
}
