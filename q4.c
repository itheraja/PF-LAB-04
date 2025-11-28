#include <stdio.h>

int main() {
    int cone_choice;
    double base_total;
    printf("Enter current total: ");
    scanf("%lf", &base_total);

    printf("Choose cone type (1. Regular +$0.50, 2. Waffle +$1.00): ");
    scanf("%d", &cone_choice);

    if (cone_choice == 1) {
        base_total += 0.50;
    } else if (cone_choice == 2) {
        base_total += 1.00;
    } else {
        printf("Invalid cone choice.\n");
        return 0;
    }

    printf("Updated total: $%.2f\n", base_total);
    return 0;
}
