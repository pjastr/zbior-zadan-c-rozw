#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * lastEven(struct element *list) {
    struct element *last_even = NULL;
    while (list != NULL) {
        if (list->x % 2 == 0) {
            last_even = list;
        }
        list = list->next;
    }
    return last_even;
}

void printList(struct element *list) {
    while (list != NULL) {
        printf("%d %p\n", list->x, &list->x);
        list = list->next;
    }
    printf("---\n");
}

int main(){
    struct element * list = malloc(sizeof(struct element));
    list->x = -4;
    list->next = malloc(sizeof(struct element));
    list->next->x = 2;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 3;
    list->next->next->next = NULL;
    printList(list);
    printf("%p\n", lastEven(list));
    return 0;
}
