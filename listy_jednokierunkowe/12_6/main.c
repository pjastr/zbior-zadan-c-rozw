// Napisz funkcjê `printOdd`, która przyjmuje jako argument listê z g³ow¹ o elementach typu:
//
//``` c
//struct element {
//    int x;
//    struct element * next;
//};
//```
//
//Funkcja ma wyœwietliæ te elementy listy, które s¹ nieparzyste. Stwórz przypadek testowy.

#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printOdd(struct element *list) {
    struct element *current = list->next;
    while (current != NULL) {
        if (current->x % 2 != 0) {
            printf("%d\n", current->x);
        }
        current = current->next;
    }
}

int main() {
    // lista z g³ow¹ o elementach 3,-4,-9
    struct element *list1 = malloc(sizeof(struct element));
    list1->next = malloc(sizeof(struct element));
    list1->next->x = 3;
    list1->next->next = malloc(sizeof(struct element));
    list1->next->next->x = -4;
    list1->next->next->next = malloc(sizeof(struct element));
    list1->next->next->next->x = -9;
    list1->next->next->next->next = NULL;
    printOdd(list1);
    printf("---\n");
    //lista z g³ow¹ o elementach 2,4,6
    struct element *list2 = malloc(sizeof(struct element));
    list2->next = malloc(sizeof(struct element));
    list2->next->x = 2;
    list2->next->next = malloc(sizeof(struct element));
    list2->next->next->x = 4;
    list2->next->next->next = malloc(sizeof(struct element));
    list2->next->next->next->x = 6;
    list2->next->next->next->next = NULL;
    printOdd(list2);
    printf("---\n");
    // pusta lista z g³ow¹
    struct element *list3 = malloc(sizeof(struct element));
    list3->next = NULL;
    printOdd(list3);
    return 0;
}
