#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void removeFirst(struct element *list) {
    if (list->next == NULL) {
        return;
    }
    struct element *temp = list->next;
    list->next = list->next->next;
    free(temp);
}

void printList(struct element *list) {
    struct element *temp = list->next;
    while (temp != NULL) {
        printf("%d\n", temp->x);
        temp = temp->next;
    }
    printf("---\n");
}

int main() {
    // pusta lista z g³ow¹
    struct element *list1 = malloc(sizeof(struct element));
    list1->next = NULL;
    printList(list1);
    removeFirst(list1);
    printList(list1);
    // lista z g³ow¹ o jednym elemencie -8
    struct element *list2 = malloc(sizeof(struct element));
    list2->next = malloc(sizeof(struct element));
    list2->next->x = -8;
    list2->next->next = NULL;
    printList(list2);
    removeFirst(list2);
    printList(list2);
    // lista z g³ow¹ o dwóch elementach -9,4
    struct element *list3 = malloc(sizeof(struct element));
    list3->next = malloc(sizeof(struct element));
    list3->next->x = -9;
    list3->next->next = malloc(sizeof(struct element));
    list3->next->next->x = 4;
    list3->next->next->next = NULL;
    printList(list3);
    removeFirst(list3);
    printList(list3);
    return 0;
}
