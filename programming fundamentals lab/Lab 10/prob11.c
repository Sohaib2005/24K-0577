#include <stdio.h>
#define METERS_TO_KILOMETERS 0.001
double convertToKilometers(double m) {
    static int count = 0;
    count++;

    printf("Function called %d times.\n", count); 
    return m * METERS_TO_KILOMETERS;
}

int main() {
    double m;

    printf("Enter distance in meters: ");
    scanf("%lf", &m);

    double km = convertToKilometers(m);
    printf("Distance in kilometers: %.3f km\n", km);
    printf("\nEnter another distance in meters: ");
    scanf("%lf", &m);

    km = convertToKilometers(m);
    printf("Distance in kilometers: %.3f km\n", km);

    return 0;
}

