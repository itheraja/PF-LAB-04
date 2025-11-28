#include <stdio.h>

int main() {
    int scoops;
    const double one_scoop_price = 2.00;
    printf("How many scoops do you want? ");
    scanf("%d", &scoops):
    if (scoops > 1) {
        printf("Please see our multi-scoop offers.\n");
    } else if (scoops == 1) {
        printf("Your total is $%.2f\n", one_scoop_price);
    } else {
        printf("Invalid number of scoops.\n");
    }
    return 0;
}
