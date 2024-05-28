#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * createWithHead() {
    struct element * head = malloc(sizeof(struct element));
    head->next = NULL;
    return head;
}

int main() {
    struct element * list = createWithHead();
    printf("%p\n", list);
    printf("%p\n", list->next);
    return 0;
}
