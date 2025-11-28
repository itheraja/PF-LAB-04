#include <stdio.h>

int main() {
    int scoops;
    double total = 0.0;
    printf("How many scoops (1, 2, or 3)? ");
    scanf("%d", &scoops);

    if (scoops == 1) total = 2.00;
    else if (scoops == 2) total = 3.50;
    else if (scoops == 3) total = 4.50;
    else {
        printf("Invalid number of scoops.\n");
        return 0;
    }

    printf("You ordered %d scoop(s). Total cost: $%.2f\n", scoops, total);
    return 0;
}
