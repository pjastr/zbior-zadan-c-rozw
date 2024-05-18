#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
};

struct Person *initPerson(char name[], int age) {
    struct Person *person = (struct Person *) malloc(sizeof(struct Person));
    strcpy(person->name, name);
    person->age = age;
    return person;
}

void showPerson(struct Person person) {
    printf("Name: %s, Age: %d\n", person.name, person.age);
}

void birthday(struct Person *person) {
    person->age++;
}

int main() {
    struct Person *person = initPerson("John", 25);
    showPerson(*person);
    birthday(person);
    showPerson(*person);
    free(person);
    return 0;
}
