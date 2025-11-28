#include <stdio.h>

int main(void) {
    int method;
    double total = 6.25;
    printf("Payment method (1=Cash, 2=Card): ");
    if (scanf("%d", &method) != 1) return 0;

    if (method == 1) {
        printf("Paying by cash. No processing fee.\n");
    } else if (method == 2) {
        total += 0.50;
        printf("Card selected. $0.50 processing fee added.\n");
    } else {
        printf("Invalid payment method.\n");
        return 0;
    }

    printf("Final amount: $%.2f\n", total);
    return 0;
}
