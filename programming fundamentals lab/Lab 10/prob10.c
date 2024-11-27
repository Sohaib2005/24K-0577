#include <stdio.h>
#include <string.h>
typedef struct TravelPackage {
    char name[50];
    char destination[50];
    int duration;      
    double cost;       
    int seats_available;
}TP;
void displayPackages(TP packages[], int size);
void bookPackage(TP packages[], int size);
int main() {
    TP packages[] = {
        {"Summer Escape", "Hawaii", 7, 1200.50, 10},
        {"Winter Wonderland", "Switzerland", 10, 2500.75, 5},
        {"Cultural Tour", "Japan", 14, 3000.00, 8},
        {"Desert Safari", "Dubai", 5, 800.00, 15}
    };
    int size = sizeof(packages) / sizeof(packages[0]);
    int choice;
    while (1) {
        printf("\nTravel Package Booking System\n");
        printf("1. Display Available Packages\n");
        printf("2. Book a Package\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                displayPackages(packages, size);
                break;
            case 2:
                bookPackage(packages, size);
                break;
            case 3:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
void displayPackages(TP packages[], int size) {
    printf("\nAvailable Travel Packages:\n");
    int i;
    for (i = 0; i < size; i++) {
        printf("\nPackage %d:\n", i + 1);
        printf("Name: %s\n", packages[i].name);
        printf("Destination: %s\n", packages[i].destination);
        printf("Duration: %d days\n", packages[i].duration);
        printf("Cost: $%.2f\n", packages[i].cost);
        printf("Seats Available: %d\n", packages[i].seats_available);
    }
}
void bookPackage(TP packages[], int size) {
    int package_number, seats_to_book;
    displayPackages(packages, size);
    printf("\nEnter the package number to book: ");
    scanf("%d", &package_number);

    if (package_number < 1 || package_number > size) {
        printf("Invalid package number.\n");
        return;
    }
    TP *selected_package = &packages[package_number - 1];
    if (selected_package->seats_available <= 0) {
        printf("Sorry, no seats available for this package.\n");
        return;
    }
    printf("Enter the number of seats to book: ");
    scanf("%d", &seats_to_book);
    if (seats_to_book > selected_package->seats_available) {
        printf("Only %d seats are available. Cannot book %d seats.\n",
               selected_package->seats_available, seats_to_book);
        return;
    }
    selected_package->seats_available -= seats_to_book;
    printf("Booking successful! You booked %d seat(s) for the '%s' package.\n",
           seats_to_book, selected_package->name);
}

