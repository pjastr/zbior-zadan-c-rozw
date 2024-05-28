#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void removeList(struct element * list){
    struct element * current = list->next;
    struct element * next;
    while(current != NULL){
        next = current->next;
        free(current);
        current = next;
    }
    list->next = NULL;
}

void printList(struct element * list){
    struct element * current = list->next;
    while(current != NULL){
        printf("%d\n", current->x);
        current = current->next;
    }
    printf("---\n");
}

int main(){
    //pusta lista
    struct element * list = malloc(sizeof(struct element));
    list->next = NULL;
    printList(list);
    removeList(list);
    printList(list);
    // lista o jednym elemencie -2
    struct element * list2 = malloc(sizeof(struct element));
    list2->next = malloc(sizeof(struct element));
    list2->next->x = -2;
    list2->next->next = NULL;
    printList(list2);
    removeList(list2);
    printList(list2);
    // lista o dwóch elementach 6,-9
    struct element * list3 = malloc(sizeof(struct element));
    list3->next = malloc(sizeof(struct element));
    list3->next->x = 6;
    list3->next->next = malloc(sizeof(struct element));
    list3->next->next->x = -9;
    list3->next->next->next = NULL;
    printList(list3);
    removeList(list3);
    printList(list3);
    // lista o trzech elementach 4,-8,12
    struct element * list4 = malloc(sizeof(struct element));
    list4->next = malloc(sizeof(struct element));
    list4->next->x = 4;
    list4->next->next = malloc(sizeof(struct element));
    list4->next->next->x = -8;
    list4->next->next->next = malloc(sizeof(struct element));
    list4->next->next->next->x = 12;
    list4->next->next->next->next = NULL;
    printList(list4);
    removeList(list4);
    printList(list4);
    return 0;
}
