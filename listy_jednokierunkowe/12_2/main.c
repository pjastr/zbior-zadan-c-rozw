#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int main(){
    struct element * list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = 4;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 5;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = -12;
    list->next->next->next->next = NULL;
    struct element * temp = list->next;
    while(temp != NULL){
        printf("%d\n", temp->x);
        temp = temp->next;
    }
    return 0;
}
