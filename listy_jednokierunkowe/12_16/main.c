#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int sumNeg(struct element *list) {
    int suma = 0;
    struct element *current = list->next;
    while (current != NULL) {
        if (current->x < 0) {
            suma += current->x;
        }
        current = current->next;
    }
    return suma;
}

int main(){
    struct element *list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = -4;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -2;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = 3;
    list->next->next->next->next = NULL;
    printf("%d\n", sumNeg(list));
    return 0;
}
