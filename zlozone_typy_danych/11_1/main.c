#include <stdio.h>

struct Car {
    char * brand;
    char model[20];
    int year;
    int isAvailable;
};

int main() {
    struct Car car1 = {"Audi", "A4", 2010, 1};
    printf("Car1: %s %s %d %d\n", car1.brand, car1.model, car1.year, car1.isAvailable);
    struct Car car2 = {"BMW", "X5", 2015, 0};
    printf("Car2: %s %s %d %d\n", car2.brand, car2.model, car2.year, car2.isAvailable);
    return 0;
}
