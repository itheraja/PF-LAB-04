#include <stdio.h>

int main(void) {
    char ans;
    double total = 4.50; 
    printf("Do you want sprinkles? (Y/N): ");
    scanf(" %c", &ans);

    if (ans == 'Y' || ans == 'y') {
        total += 0.75;
        printf("Sprinkles added.\n");
    } else {
        printf("No sprinkles.\n");
    }

    printf("Updated total: $%.2f\n", total);
    return 0;
}
