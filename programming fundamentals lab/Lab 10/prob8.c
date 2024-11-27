#include <stdio.h>
#include <string.h>

typedef struct Car {
    char make[50];
    char model[50];
    int year;
    double price;
    double mileage;
}car;
#define MAX_CARS 100
void add_car(car cars[], int *car_count);
void display_cars(car cars[], int car_count);
void search_car(car cars[], int car_count);

int main() {
    car cars[MAX_CARS];
    int car_count = 0;
    int choice;

    while (1) {
        printf("\nCar Dealership System\n");
        printf("1. Add a new car\n");
        printf("2. Display all cars\n");
        printf("3. Search for cars by make or model\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_car(cars, &car_count);
                break;
            case 2:
                display_cars(cars, car_count);
                break;
            case 3:
                search_car(cars, car_count);
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
void add_car(car cars[], int *car_count) {
    if (*car_count >= MAX_CARS) {
        printf("Error: Cannot add more cars. Inventory is full.\n");
        return;
    }

    car new_car;

    printf("Enter car make: ");
    scanf("%s", new_car.make);
    printf("Enter car model: ");
    scanf("%s", new_car.model);
    printf("Enter car year: ");
    scanf("%d", &new_car.year);
    printf("Enter car price: ");
    scanf("%lf", &new_car.price);
    printf("Enter car mileage: ");
    scanf("%lf", &new_car.mileage);

    cars[*car_count] = new_car;
    (*car_count)++;

    printf("Car added successfully.\n");
}

void display_cars(car cars[], int car_count) {
    if (car_count == 0) {
        printf("No cars available in the dealership.\n");
        return;
    }

    printf("\nList of available cars:\n");
    int i;
    for ( i = 0; i < car_count; i++) {
        printf("\nCar %d:\n", i + 1);
        printf("Make: %s\n", cars[i].make);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: $%.2f\n", cars[i].price);
        printf("Mileage: %.2f km\n", cars[i].mileage);
    }
}

void search_car(car cars[], int car_count) {
    if (car_count == 0) {
        printf("No cars available in the dealership to search.\n");
        return;
    }

    char search_term[50];
    printf("Enter make or model to search for: ");
    scanf("%s", search_term);

    printf("\nSearch results for '%s':\n", search_term);
    int found = 0;
	int i;
    for ( i = 0; i < car_count; i++) {
        if (stricmp(cars[i].make, search_term) == 0 || stricmp(cars[i].model, search_term) == 0) {
            printf("\nCar %d:\n", i + 1);
            printf("Make: %s\n", cars[i].make);
            printf("Model: %s\n", cars[i].model);
            printf("Year: %d\n", cars[i].year);
            printf("Price: $%.2f\n", cars[i].price);
            printf("Mileage: %.2f km\n", cars[i].mileage);
            found = 1;
        }
    }

    if (!found) {
        printf("No cars found matching the search term '%s'.\n", search_term);
    }
}

