#include <stdio.h>
#include <string.h>
typedef struct Flight {
    int flight_no;
    char deptCity[50];
    char destCity[50];
    char date[20]; //DD/MM/YYYY
    int availableSeats;
}FL;
void displayFlightDetails(FL flight) {
    printf("Flight Number: %d\n", flight.flight_no);
    printf("Departure City: %s\n", flight.deptCity);
    printf("Destination City: %s\n", flight.destCity);
    printf("Date: %s\n", flight.date);
    printf("Available Seats: %d\n\n", flight.availableSeats);
}
void bookSeat(FL *flight) {
    if (flight->availableSeats > 0) {
        flight->availableSeats--;
        printf("Seat successfully booked on flight %d!\n", flight->flight_no);
    } else {
        printf("No seats available on flight %d.\n", flight->flight_no);
    }
}
int main() {
    FL flight1 = {12135,"Karachi","Islamabad","15.12.2024",10};
    int choice;
     while (choice != 3) {
        printf("Flight Management System\n");
        printf("1. Display Flight Details\n");
        printf("2. Book a Seat\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                displayFlightDetails(flight1);
                break;
            case 2:
                bookSeat(&flight1);
                break;
            case 3:
                printf("Exiting the program... Goodbye!\n");
                break;
            default:
                printf("Invalid choice.try again.\n");
        }
    }
    return 0;
}
