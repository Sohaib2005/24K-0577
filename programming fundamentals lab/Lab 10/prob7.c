#include <stdio.h>
#define MAX_TEMPERATURE 40.0
void check_temperature(double temp) {
    static int count = 0;
    if (temp > MAX_TEMPERATURE) {
        printf("Temperature %.2f exceeds the limit of %.2f!\n", temp, MAX_TEMPERATURE);
        count++;
    } else {
        printf("Temperature %.2f is within the limit.\n", temp);
    }
    printf("Total no of times the temp exceeded is: %d\n", count);
    printf("Enter -1 to stop.\n");
}

int main() {
    double input_temp;
    printf("Enter temperatures to check (enter -1 to stop):\n");
    while (1) {
        printf("Enter temperature: ");
        scanf("%lf", &input_temp);
        if (input_temp == -1) {
            break;
        }
        check_temperature(input_temp);
    }
    printf("End of program.\n");
    return 0;
}

