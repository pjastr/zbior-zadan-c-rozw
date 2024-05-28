#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printPos(struct element *list) {
    while (list != NULL) {
        if (list->x > 0) {
            printf("%d\n", list->x);
        }
        list = list->next;
    }
}

int main() {
    // lista bez g³owy z elementami 2,-3,9
    struct element *list1 = malloc(sizeof(struct element));
    list1->x = 2;
    list1->next = malloc(sizeof(struct element));
    list1->next->x = -3;
    list1->next->next = malloc(sizeof(struct element));
    list1->next->next->x = 9;
    list1->next->next->next = NULL;
    printPos(list1);
    printf("---\n");
    // lista bez g³owy z elementami -1,-2,-3
    struct element *list2 = malloc(sizeof(struct element));
    list2->x = -1;
    list2->next = malloc(sizeof(struct element));
    list2->next->x = -2;
    list2->next->next = malloc(sizeof(struct element));
    list2->next->next->x = -3;
    list2->next->next->next = NULL;
    printPos(list2);
    printf("---\n");
    // pusta lista bez g³owy
    struct element *list3 = NULL;
    printPos(list3);
    return 0;
}
