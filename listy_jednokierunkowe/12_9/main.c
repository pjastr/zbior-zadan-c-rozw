#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

//rozwi¹zanie za pomoc¹ pojedynczych wskaŸników
struct element * addFirst(struct element *list, int a) {
    struct element *newElement = malloc(sizeof(struct element));
    newElement->x = a;
    newElement->next = list;
    return newElement;
}

// rozwi¹zanie za pomoc¹ podwójnego wskaŸnika
void addFirst2(struct element **list, int a) {
    struct element *newElement = malloc(sizeof(struct element));
    newElement->x = a;
    newElement->next = *list;
    *list = newElement;
}

void printList(struct element *list) {
    while (list != NULL) {
        printf("%d\n", list->x);
        list = list->next;
    }
    printf("---\n");
}

int main() {
    // lista bez g³owy o elementach 3,-4
    struct element * list1 = malloc(sizeof(struct element));
    list1->x = 3;
    list1->next = malloc(sizeof(struct element));
    list1->next->x = -4;
    list1->next->next = NULL;
    printList(list1);
    list1 = addFirst(list1, 5);
    printList(list1);
    addFirst2(&list1, 7);
    printList(list1);
    // pusta lista bez g³owy
    struct element * list2 = NULL;
    printList(list2);
    list2 = addFirst(list2, 5);
    printList(list2);
    // pusta lista bez g³owy
    struct element * list3 = NULL;
    printList(list3);
    addFirst2(&list3, 7);
    printList(list3);
    return 0;
}
