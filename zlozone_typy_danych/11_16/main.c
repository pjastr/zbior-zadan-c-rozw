#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Apartment {
    char address[100];
    int number_of_residents;
};

struct Apartment *initApartment(char *address, int number_of_residents) {
    if (number_of_residents <= 0 || strlen(address) < 5) {
        return NULL;
    }
    struct Apartment *apartment = malloc(sizeof(struct Apartment));
    strcpy(apartment->address, address);
    apartment->number_of_residents = number_of_residents;
    return apartment;
}

void increaseResidents(struct Apartment *apartment) {
    apartment->number_of_residents += 2;
}

int main() {
    struct Apartment *apartment = initApartment("ul. Kolorowa 12", 5);
    if (apartment != NULL) {
        printf("Address: %s\nNumber of residents: %d\n", apartment->address, apartment->number_of_residents);
        increaseResidents(apartment);
        printf("Number of residents after increase: %d\n", apartment->number_of_residents);
        free(apartment);
    }
    return 0;
}
